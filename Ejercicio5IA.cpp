#include <iostream>

using namespace std;

int main() {
    int grades[8];
    int approved = 0;
    int failed = 0;
    int sum = 0;

    // Input grades for each student
    for (int i = 0; i < 8; i++) {
        cout << "Enter grade for student " << i + 1 << ": ";
        cin >> grades[i];
        sum += grades[i];

        if (grades[i] >= 70) {
            approved++;
        } else {
            failed++;
        }
    }

    // Calculate and output average grade
    double average = static_cast<double>(sum) / 8;
    cout << "Number of approved students: " << approved << endl;
    cout << "Number of failed students: " << failed << endl;
    cout << "The average grade for the class is: " << average << endl;

    return 0;
}