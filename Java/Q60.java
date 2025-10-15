// Student.java - This class acts as the structure or blueprint for a student.
class Student {
    // Data members (fields) to store information
    String name;
    int rollNumber;
    String major;
    double gpa;

    // A constructor to initialize the student object when it's created
    public Student(String name, int rollNumber, String major, double gpa) {
        this.name = name;
        this.rollNumber = rollNumber;
        this.major = major;
        this.gpa = gpa;
    }

    // A method to display the student's information
    public void displayInfo() {
        System.out.println("--- Student Details ---");
        System.out.println("Name: " + name);
        System.out.println("Roll Number: " + rollNumber);
        System.out.println("Major: " + major);
        System.out.println("GPA: " + gpa);
        System.out.println("-----------------------");
    }
}

// Main.java - The main class to run the program
public class Main {
    public static void main(String[] args) {
        // 1. Create an object (an instance) of the Student class
        //    This calls the constructor to set the initial values.
        Student student1 = new Student("Aisha Khan", 101, "Computer Science", 9.2);
        
        // 2. Call the method on the object to display its information
        student1.displayInfo();

        // You can create another student object easily
        Student student2 = new Student("Rohan Verma", 102, "Mechanical Engineering", 8.5);
        student2.displayInfo();
    }
}