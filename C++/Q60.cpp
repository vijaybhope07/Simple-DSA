// Q60.cpp
#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

int main() {
    Student s;
    cout << "Enter name: ";
    getline(cin, s.name);
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter marks: ";
    cin >> s.marks;
    cout << "\nDisplaying Information:\n";
    cout << "Name: " << s.name << "\nRoll: " << s.roll << "\nMarks: " << s.marks;
    return 0;
}
