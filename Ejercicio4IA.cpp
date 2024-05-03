#include <iostream>

using namespace std;

int main() {
    int grades[10];
    int sum = 0;

    // Input grades for each student
    for (int i = 0; i < 10; i++) {
        cout << "Enter grade for student " << i + 1 << ": ";
        cin >> grades[i];
        sum += grades[i];
    }

    // Calculate and output average grade
    double average = static_cast<double>(sum) / 10;
    cout << "The average grade for the class is: " << average << endl;

    return 0;
}