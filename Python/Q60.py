# Q60.py - Program to Store Information of a Student Using Structure
class Student:
    def __init__(self, name, age, roll):
        self.name = name
        self.age = age
        self.roll = roll

name = input("Enter name: ")
age = int(input("Enter age: "))
roll = int(input("Enter roll number: "))
student = Student(name, age, roll)
print(f"Student info - Name: {student.name}, Age: {student.age}, Roll: {student.roll}")