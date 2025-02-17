#include <iostream>

int main() {
    int rows = 3;
    int cols = 4;
    int n = rows * cols; // Total number of elements

    // Allocate memory for the 2D array
    int* arr = new int[n]; // Linear array

    // Initialize and print the array in a single loop
    for(int i = 0; i < n; ++i) {
        arr[i] = i; // Initialize the element
        std::cout << arr[i] << " "; // Print the element

        // Print a newline at the end of each row
        if ((i + 1) % cols == 0) {
            std::cout << std::endl;
        }
    }

    // Free memory
    delete[] arr;

    return 0;
}
