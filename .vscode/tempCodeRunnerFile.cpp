#include <iostream>

int* createArray(int size) {
    if (size <= 0) return nullptr;  // Check for valid size

    int* array = new int[size];  // Allocate memory for the array
    for (int i = 0; i < size; ++i) {
        array[i] = i + 1;  // Fill the array with simple values (e.g., 1, 2, 3, ...)
    }
    return array;
}

int main() {
    int size = 5;
    int* array = createArray(size);

    if (array != nullptr) {  // Check if memory was successfully allocated
        for (int i = 0; i < size; ++i) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;

        delete[] array;  // Free the memory
    } else {
        std::cout << "Failed to allocate memory." << std::endl;
    }

    return 0;
}
