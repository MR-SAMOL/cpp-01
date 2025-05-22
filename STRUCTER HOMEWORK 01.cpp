							// HOMEWORK STRUCTER OF THE PROGRAM STUDENT
							// REQUIREMENTS:
							// 01, DEFINE A STRUCTER CALLED STUDENT THAT CONTAIINS:
							// STRING NAME
							// INT AGE
							// FLOAT GRADE
							// 02, WRITE A FUNTION VOID INTPUTSTUDENT( STUDENT & S) TO INTPUT THE STUDENT DATA
							// 03, WRITE A FUNTION VOID DISPLAYSTUDENT ( CONST STUDENT & S )TO DISPLAY STUDENT DATA
							// 04, INT MAIN () FUNTION, CREATE AN ARRAY OF STUDENT ( E.G,3 STUDENTS), INTPUT THEIR DATA USING THE FUNTION,AND THEN DISPLAY THE DATA. 

							 
#include <iostream>
using namespace std;

// Define the structure for Student
struct Student {
    string name;
    int age;
    float grade;
};

// Function to input student data
void inputStudent(Student &s) {
    cout << "Enter student name: ";
    getline(cin, s.name);  // Use getline for full name input
    cout << "Enter student age: ";
    cin >> s.age;
    cout << "Enter student grade: ";
    cin >> s.grade;
    cin.ignore(); // Clear the newline character left in the buffer
}

// Function to display student data
void displayStudent(const Student &s) {
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Grade: " << s.grade << endl;
    cout << "---------------------------" << endl;
}

// Main function
int main() {
    const int NUM_STUDENTS = 3;
    Student students[NUM_STUDENTS];

    cout << "=== Enter Student Information ===" << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        inputStudent(students[i]);
    }

    cout << "\n=== Displaying Student Information ===" << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        displayStudent(students[i]);
    }

    return 0;
}


							// NOTED KEYS
							// 01, STRUCT COME FORM THE WORDS STRUCTER
							// WE USE STRUCTER ( STRUCT ) USED TO GROUP RELATED VARIBLES TOGETHER UNDER ONE NAME, ALLOWING YOU TO CREATE A CUSTOM DATA TYPE. THEY'RE ESPECIALLY USEFUL WHEN YOU WANT TO MODEL REAL-WORLD ENTIES WITH MULTIPLE ATTRIBUTES.
							// WHY WE USE STRUCTER 
							// 01, TO GROUP DATA LOGICALLY- FOR EXAMPLE, A STUDENT MIGHT HAVE A NAME,AGE,AND GRADE
							// 02, TO CREATE CUSTOM TYPES- YOU CAN DEFINE YOUR OWN DATA TYPES TAILORED TO YOUR PROGRAM'S NEEDS.
							// 03, TO MAKE CODE CLEANER AND MORE ORGANIZED- INSTESD OF MANAGING MULTIPLE VARIBLES SEPARATELY, YOU CAN USE ONE STRUCTER.
							// 04, TO SUPPORT OBJECT-ORIENTED FEATURES- IN MODERN C++, STRUCTS CAN ALSO INCLUDE FUNTIONS, SIMILAR TO CLASSES.
							//  
