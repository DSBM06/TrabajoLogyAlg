#include <iostream>
#include <vector>

int main() {
    // Request user input for first vector
    std::vector<int> v1;
    int n;
    std::cout << "Enter the length of the first vector: ";
    std::cin >> n;
    std::cout << "Enter the elements of the first vector: ";
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        v1.push_back(temp);
    }

    // Request user input for second vector
    std::vector<int> v2;
    std::cout << "Enter the elements of the second vector: ";
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        v2.push_back(temp);
    }

    // Calculate the sum of the two vectors
    std::vector<int> v3;
    for (int i = 0; i < n; i++) {
        v3.push_back(v1[i] + v2[i]);
    }

    // Display the result
    std::cout << "The sum of the two vectors is: ";
    for (int i = 0; i < n; i++) {
        std::cout << v3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}