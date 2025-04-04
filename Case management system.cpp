#include <iostream>
#include <string>
using namespace std;

// Class to store course details
class Course {
public:
    string name;
    string code;

    // Constructor to initialize course details
    Course(string n = "", string c = "") : name(n), code(c) {}

    // Display course details
    void display() {
        cout << "Course: " << name << " (" << code << ")" << endl;
    }
};

// Class to store student details
class Student {
public:
    string name;
    int regNumber;
    Course courses[10]; // Assume a student can take up to 10 courses
    int courseCount = 0; // Track the number of courses

    // Constructor to initialize student details
    Student(string n = "", int reg = 0) : name(n), regNumber(reg) {}

    // Add a course to the student's list
    void addCourse(Course course) {
        if (courseCount < 10) {
            courses[courseCount] = course;
            courseCount++;
        } else {
            cout << "Cannot add more courses. Limit reached!" << endl;
        }
    }

    // Display student details and their courses
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Registration Number: " << regNumber << endl;
        cout << "Courses Enrolled: " << endl;
        for (int i = 0; i < courseCount; i++) {
            courses[i].display();
        }
        cout << "-------------------------" << endl;
    }
};

int main() {
    // Create some courses
    Course math("Mathematics", "MATH101");
    Course physics("Physics", "PHYS101");
    Course cs("Computer Science", "CS101");

    // Create students and add courses
    Student student1("Abdullah", 1001);
    student1.addCourse(math);
    student1.addCourse(cs);

    Student student2("Reyan", 1002); // Fixed missing double quote
    student2.addCourse(physics);
    student2.addCourse(cs);

    // Display student details
    student1.display();
    student2.display();

    return 0;
}