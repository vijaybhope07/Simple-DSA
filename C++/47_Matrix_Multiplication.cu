// Matrix Multiplication in CUDA C++
// Can be scaled up for thousands of operations

#include <iostream>
#include <cuda_runtime.h>
#include <cstdlib>
#include <ctime>

#define N 1024
#define PRINT_SIZE 8
#define COUNT 1

using namespace std;

__global__ void multiplication_kernel(float* A, float* B, float* C) {
    int row = blockIdx.y * blockDim.y + threadIdx.y;
    int col = blockIdx.x * blockDim.x + threadIdx.x;

    if (row < N && col < N) {
        float sum = 0;
        for (int k = 0; k < N; ++k) {
            sum += A[row * N + k] * B[k * N + col];
        }
        C[row * N + col] = sum;
    }
}

int main() {

    srand(static_cast<unsigned int>(time(0)));

    size_t size = N * N * sizeof(float);

    float *h_A = new float[N*N];
    float *h_B = new float[N*N];
    float *h_C = new float[N*N];

    float *d_A, *d_B, *d_C;
    cudaMalloc(&d_A, size);
    cudaMalloc(&d_B, size);
    cudaMalloc(&d_C, size);

    dim3 threadsPerBlock(16, 16);
    dim3 numBlocks((N + threadsPerBlock.x - 1) / threadsPerBlock.x,
                   (N + threadsPerBlock.y - 1) / threadsPerBlock.y);

    int iter = 0;
    while (iter < COUNT) {

        for (int i = 0; i < N*N; ++i) {
            h_A[i] = static_cast<float>(rand()) / RAND_MAX;
            h_B[i] = static_cast<float>(rand()) / RAND_MAX;
        }

        cudaMemcpy(d_A, h_A, size, cudaMemcpyHostToDevice);
        cudaMemcpy(d_B, h_B, size, cudaMemcpyHostToDevice);

        multiplication_kernel<<<numBlocks, threadsPerBlock>>>(d_A, d_B, d_C);
        cudaDeviceSynchronize();

        cudaMemcpy(h_C, d_C, size, cudaMemcpyDeviceToHost);

        // Output truncated to a 8 x 8 matrix
        cout << "\nTruncated output matrix (first " << PRINT_SIZE << "x" << PRINT_SIZE << "):\n";
        for (int i = 0; i < PRINT_SIZE; ++i) {
            for (int j = 0; j < PRINT_SIZE; ++j) {
                cout << h_C[i * N + j] << "\t";
            }
            cout << "\n";
        }

        iter++;
    }

    cudaFree(d_A); cudaFree(d_B); cudaFree(d_C);
    delete[] h_A; delete[] h_B; delete[] h_C;

    return 0;
}
