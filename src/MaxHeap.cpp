#include "MaxHeap.h"
#include <algorithm> // Untuk std::swap

MaxHeap::MaxHeap() {
    // Konstruktor tidak memerlukan inisialisasi khusus
}

int MaxHeap::parent(int i) const {
    return (i - 1) / 2;
}

int MaxHeap::leftChild(int i) const {
    return 2 * i + 1;
}

int MaxHeap::rightChild(int i) const {
    return 2 * i + 2;
}

void MaxHeap::maxHeapify(size_t i) {
    size_t left = leftChild(i);
    size_t right = rightChild(i);
    size_t largest = i;

    if (left < heap.size() && heap[left] > heap[largest]) {
        largest = left;
    }

    if (right < heap.size() && heap[right] > heap[largest]) {
        largest = right;
    }

    if (largest != i) {
        std::swap(heap[i], heap[largest]);
        maxHeapify(largest);
    }
}

void MaxHeap::insert(int key) {
    heap.push_back(key);
    size_t i = heap.size() - 1;

    while (i != 0 && heap[parent(i)] < heap[i]) {
        std::swap(heap[i], heap[parent(i)]);
        i = parent(i);
    }
}

int MaxHeap::extractMax() {
    if (heap.size() == 0) {
        throw std::out_of_range("Heap kosong!");
    }
    if (heap.size() == 1) {
        int max = heap[0];
        heap.pop_back();
        return max;
    }

    int root = heap[0];
    heap[0] = heap[heap.size() - 1];
    heap.pop_back();

    maxHeapify(0);
    return root;
}

void MaxHeap::buildMaxHeap(const std::vector<int>& array) {
    heap = array;
    for (size_t i = (heap.size() / 2) - 1; i != size_t(-1); --i) {
        maxHeapify(i);
    }
}

int MaxHeap::peekMax() const {
    if (heap.empty()) {
        throw std::out_of_range("Heap kosong!");
    }
    return heap[0];
}

void MaxHeap::printHeap() const {
    for (size_t i = 0; i < heap.size(); ++i) {
        std::cout << heap[i] << " ";
    }
    std::cout << std::endl;
}
