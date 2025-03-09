#include <iostream>
#include "MaxHeap.h"

int main() {
    MaxHeap maxHeap;

    // Menyisipkan elemen
    maxHeap.insert(10);
    maxHeap.insert(20);
    maxHeap.insert(5);
    maxHeap.insert(30);
    maxHeap.insert(15);

    std::cout << "Max Heap: ";
    maxHeap.printHeap();

    // Mengambil elemen maksimum
    try {
        std::cout << "Extract Max: " << maxHeap.extractMax() << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "Max Heap setelah mengambil max: ";
    maxHeap.printHeap();

    // Membangun heap dari array yang tidak terurut
    std::vector<int> array = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5 };
    maxHeap.buildMaxHeap(array);
    std::cout << "Max Heap setelah membangun dari array: ";
    maxHeap.printHeap();

    // Melihat elemen maksimum tanpa menghapusnya
    try {
        std::cout << "Elemen max (peek): " << maxHeap.peekMax() << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
