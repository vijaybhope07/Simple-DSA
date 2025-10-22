"""
Program to solve the "Two Sum" problem.

Given a list of integers nums and an integer target,
find the indices of the two numbers such that they add up to target.

Example:
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]  # because nums[0] + nums[1] = 2 + 7 = 9

Author: Veeru Yadav
GitHub: https://github.com/VeeruYadav45
"""

def two_sum(nums, target):
    # Dictionary to store value -> index mapping
    seen = {}
    for i, num in enumerate(nums):
        complement = target - num
        if complement in seen:
            return [seen[complement], i]  # Found the pair
        seen[num] = i  # Store current number and index
    return []  # No pair found


# ---------- Main Program ----------
if __name__ == "__main__":
    n = int(input("Enter the number of elements: "))
    nums = list(map(int, input("Enter the array elements: ").split()))
    target = int(input("Enter the target sum: "))

    result = two_sum(nums, target)

    if result:
        print(f"Indices of elements that add up to {target}: {result[0]} and {result[1]}")
        print(f"Elements are: {nums[result[0]]} + {nums[result[1]]} = {target}")
    else:
        print(f"No two elements add up to {target}.")
