#include <iostream>
using namespace std;

int main() {
    int courses;
    float grade, credit;
    float totalCredits = 0;
    float totalPoints = 0;

    cout << "------ CGPA Calculator ------" << endl;

    cout << "Enter number of courses: ";
    cin >> courses;

    for(int i = 1; i <= courses; i++) {
        cout << "\nCourse " << i << endl;

        cout << "Enter grade: ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credit;

        totalCredits = totalCredits + credit;
        totalPoints = totalPoints + (grade * credit);
    }

    float cgpa = totalPoints / totalCredits;

    cout << "\nTotal Credits = " << totalCredits << endl;
    cout << "Total Grade Points = " << totalPoints << endl;
    cout << "Final CGPA = " << cgpa << endl;

    cout << "\nProgram Finished Successfully.";

    return 0;
}

