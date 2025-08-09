#include <iostream>  // Includes library for input/output operations (cin, cout)
#include <string>    // Includes library to use the string data type
using namespace std; // Allows use of standard library names without "std::" prefix

// Structure definition for a Student
struct Student {
    string name;      // Stores the student's name
    int test1;        // Stores score for test 1
    int test2;        // Stores score for test 2
    int finalExam;    // Stores score for the final exam
    double average;   // Stores calculated weighted average
    char letter;      // Stores final letter grade
};

// Function to calculate weighted average and assign letter grade
void calculateGrade(Student &s) { // Function prototype: "&s" means s is passed by refernece... work will be done directly to s not a copy of s  
    // Compute weighted average: test1 (30%), test2 (30%), final exam (40%)
    s.average = (s.test1 * 0.3) + (s.test2 * 0.3) + (s.finalExam * 0.4);

    // Assign letter grade based on average
    if (s.average >= 90.0)
        s.letter = 'A';  // Average ≥ 90 → Grade A
    else if (s.average >= 80.0)
        s.letter = 'B';  // Average ≥ 80 → Grade B
    else if (s.average >= 70.0)
        s.letter = 'C';  // Average ≥ 70 → Grade C
    else if (s.average >= 60.0)
        s.letter = 'D';  // Average ≥ 60 → Grade D
    else
        s.letter = 'F';  // Average < 60 → Grade F
}

int main() {
    Student s; // Create a Student object to store one student's data

    // Ask for and store student name
    cout << "Enter student name: ";
    getline(cin, s.name); // Read full name (including spaces)

    // Ask for and store first test score
    cout << "Enter test 1 score: ";
    cin >> s.test1;

    // Ask for and store second test score
    cout << "Enter test 2 score: ";
    cin >> s.test2;

    // Ask for and store final exam score
    cout << "Enter final exam score: ";
    cin >> s.finalExam;

    // Call function to compute average and letter grade
    calculateGrade(s);

    // Display results
    cout << "\nStudent: " << s.name << endl;       // Output student name
    cout << "Average: " << s.average << endl;      // Output weighted average
    cout << "Letter Grade: " << s.letter << endl;  // Output letter grade

    return 0; // End of program
}