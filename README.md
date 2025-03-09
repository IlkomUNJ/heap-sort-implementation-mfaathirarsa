# Proyek Max Heapify C++

### Identitas

- **Nama**: Muhammad Faathir Arsa
- **NIM**: 1313623023
- **Program Studi**: Ilmu Komputer A
- **Mata Kuliah**: Desain dan Analisis Algoritma

### Deskripsi
Ini adalah implementasi struktur data **Max Heap** menggunakan C++. Max Heap adalah jenis heap di mana setiap elemen di dalamnya lebih besar dari nilai anak-anaknya.

---

### Prerequisite
- `Meson` dan `Ninja` untuk sistem build.
- Compiler dari `build-essential`.

---

### Cara Instalasi dan Kompilasi

1. **Clone Repository**

   ```bash
   git clone https://github.com/IlkomUNJ/heap-sort-implementation-mfaathirarsa.git
   cd heap-sort-implementation-mfaathirarsa
   ```

2. **Install Dependencies**

   Di Ubuntu/Debian:

   ```bash
   sudo apt update
   sudo apt install build-essential meson ninja-build
   ```

3. **Kompilasi Program**

   ```bash
   meson setup build
   meson compile -C build
   ```

4. **Jalankan Program**

   ```bash
   ./build/MaxHeapify
   ```

---

### Struktur Direktori

```
heap-sort-implementation-mfaathirarsa/
│
├── src/                # Kode sumber
│   ├── MaxHeap.cpp     # Implementasi MaxHeap
│   ├── MaxHeap.h       # Header MaxHeap
│   └── main.cpp        # Program utama
│
└── build/              # Hasil kompilasi
```

---

### Fungsi Utama

- **insert()**: Menyisipkan elemen ke dalam Max Heap.
- **extractMax()**: Mengambil elemen maksimum.
- **buildMaxHeap()**: Membuat Max Heap dari array.
- **peekMax()**: Melihat elemen maksimum tanpa menghapusnya.