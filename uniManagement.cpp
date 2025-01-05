#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variables for programs
    string programName1 = "Computer Science";
    string programName2 = "Software Engineering";
    string programName3 = "Information Technology";

    short maxSeats1 = 3; // Fixed number of seats
    short maxSeats2 = 4;
    short maxSeats3 = 2;

    short availableSeats1 = maxSeats1, availableSeats2 = maxSeats2, availableSeats3 = maxSeats3;

    float minEligibility1 = 60.0; // Fixed eligibility criteria
    float minEligibility2 = 55.0;
    float minEligibility3 = 50.0;

    // Admin login
    string username, password;
    cout << "--- Admin Login ---\n";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "admin" && password == "admin123") {
        cout << "Login successful!\n\n";

        // Display programs
        cout << "--- Programs Added ---\n";
        cout << "1. " << programName1 << " | Seats: " << maxSeats1 << " | Eligibility: " << minEligibility1 << "%\n";
        cout << "2. " << programName2 << " | Seats: " << maxSeats2 << " | Eligibility: " << minEligibility2 << "%\n";
        cout << "3. " << programName3 << " | Seats: " << maxSeats3 << " | Eligibility: " << minEligibility3 << "%\n\n";

        // Variables for students
        string studentName1 = "Ali Khan";
        string studentName2 = "Sara Ahmed";

        short studentMarks1 = 750; // Fixed marks for Student 1
        short studentMarks2 = 450; // Fixed marks for Student 2

        short totalMarks = 1000; // Total marks fixed

        string studentPreference1_1 = programName1;
        string studentPreference1_2 = programName2;

        string studentPreference2_1 = programName2;
        string studentPreference2_2 = programName3;

        string studentStatus1, studentStatus2;
        string rejectionReason1, rejectionReason2;

        // Process Student 1
        float percentage1 = (float)studentMarks1 / totalMarks * 100;
        if (percentage1 >= minEligibility1 && availableSeats1 > 0) {
            studentStatus1 = "Accepted in " + programName1;
            availableSeats1--;
        } else if (percentage1 >= minEligibility2 && availableSeats2 > 0) {
            studentStatus1 = "Accepted in " + programName2;
            availableSeats2--;
        } else {
            studentStatus1 = "Rejected";
            rejectionReason1 = "Does not meet eligibility or no seats available.";
        }

        // Display Student 1 status
        cout << "--- Student 1 ---\n";
        cout << "Name: " << studentName1 << "\n";
        cout << "Marks: " << studentMarks1 << " | Percentage: " << percentage1 << "%\n";
        cout << "Preferences: " << studentPreference1_1 << ", " << studentPreference1_2 << "\n";
        cout << "Status: " << studentStatus1 << "\n";
        if (studentStatus1 == "Rejected") {
            cout << "Reason: " << rejectionReason1 << "\n";
        }
        cout << "\n";

        // Process Student 2
        float percentage2 = (float)studentMarks2 / totalMarks * 100;
        if (percentage2 >= minEligibility2 && availableSeats2 > 0) {
            studentStatus2 = "Accepted in " + programName2;
            availableSeats2--;
        } else if (percentage2 >= minEligibility3 && availableSeats3 > 0) {
            studentStatus2 = "Accepted in " + programName3;
            availableSeats3--;
        } else {
            studentStatus2 = "Rejected";
            rejectionReason2 = "Does not meet eligibility or no seats available.";
        }

        // Display Student 2 status
        cout << "--- Student 2 ---\n";
        cout << "Name: " << studentName2 << "\n";
        cout << "Marks: " << studentMarks2 << " | Percentage: " << percentage2 << "%\n";
        cout << "Preferences: " << studentPreference2_1 << ", " << studentPreference2_2 << "\n";
        cout << "Status: " << studentStatus2 << "\n";
        if (studentStatus2 == "Rejected") {
            cout << "Reason: " << rejectionReason2 << "\n";
        }
        cout << "\n";

        // Display programs again before final status
        cout << "--- Programs Summary ---\n";
        cout << "1. " << programName1 << " | Seats: " << maxSeats1 << " | Eligibility: " << minEligibility1 << "%\n";
        cout << "2. " << programName2 << " | Seats: " << maxSeats2 << " | Eligibility: " << minEligibility2 << "%\n";
        cout << "3. " << programName3 << " | Seats: " << maxSeats3 << " | Eligibility: " << minEligibility3 << "%\n\n";

        // Display final program statuses
        cout << "--- Final Program Status ---\n";
        cout << programName1 << " | Available Seats: " << availableSeats1 << "\n";
        cout << programName2 << " | Available Seats: " << availableSeats2 << "\n";
        cout << programName3 << " | Available Seats: " << availableSeats3 << "\n";
    } else {
        cout << "Invalid credentials. Exiting system.\n";
    }

    return 0;
}