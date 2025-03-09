#ifndef MAXHEAP_H
#define MAXHEAP_H

#include <vector>
#include <iostream>
#include <stdexcept>  // Untuk melemparkan pengecualian

// Definisi kelas MaxHeap
class MaxHeap {
public:
    MaxHeap();

    void insert(int key);                 // Menyisipkan elemen baru ke dalam heap
    int extractMax();                     // Mengambil elemen maksimum dari heap
    void buildMaxHeap(const std::vector<int>& array);  // Membangun max heap dari array yang tidak terurut
    void printHeap() const;               // Mencetak heap untuk debugging/verifikasi
    int peekMax() const;                  // Mengembalikan elemen maksimum tanpa menghapusnya

private:
    std::vector<int> heap;

    void maxHeapify(size_t i);            // Menjaga properti heap setelah penghapusan
    int parent(int i) const;              // Mendapatkan indeks induk dari elemen di indeks i
    int leftChild(int i) const;           // Mendapatkan indeks anak kiri dari elemen di indeks i
    int rightChild(int i) const;          // Mendapatkan indeks anak kanan dari elemen di indeks i
};

#endif // MAXHEAP_H
