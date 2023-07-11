#include <iostream>
#include <algorithm>

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int findLargestElement(const int arr[], int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    std::cout << "Enter 5 integers to fill the array: " << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Array in descending order: ";
    std::sort(arr, arr + SIZE, std::greater<int>());
    printArray(arr, SIZE);

    std::cout << "Array in ascending order: ";
    std::sort(arr, arr + SIZE);
    printArray(arr, SIZE);

    int maxElement = findLargestElement(arr, SIZE);
    std::cout << "Largest element: " << maxElement << std::endl;

    // Find position of the largest element
    int maxPosition = std::find(arr, arr + SIZE, maxElement) - arr;
    std::cout << "Position of the largest element: " << maxPosition << std::endl;

    return 0;
}
