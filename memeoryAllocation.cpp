#include <iostream>

int main() {
    int size = 5;
    int* dynamicArray = new int[size];

    std::cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element [" << i << "]: ";
        std::cin >> dynamicArray[i];
    }

    std::cout << "\nElements stored in the dynamic array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << "\n";

    delete[] dynamicArray;
    dynamicArray = nullptr; 

    return 0;
}
