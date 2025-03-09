Nama: Muhammad Faathir Arsa

NIM: 1313623023

Program Studi: Ilmu Komputer A

Mata Kuliah: Desain dan Analisis Algoritma

# Proyek Max Heap

### Deskripsi
Ini adalah implementasi struktur data **Max Heap** menggunakan C++. Max Heap adalah heap yang memastikan nilai diatas lebih besar dari nilai bawahannya.

### Prerequisite
- `Meson` & `Ninja` untuk build system.
- Compiler dari `build-essential`

### Cara Instalasi dan Kompilasi

1. **Clone Repository**

   ```bash
   git clone https://github.com/IlkomUNJ/heap-sort-implementation-mfaathirarsa.git
   cd heap-sort-implementation-mfaathirarsa
   ```

2. **Install**

   Di Ubuntu/Debian:

   ```bash
   sudo apt update
   sudo apt install build-essential meson ninja-build
   ```

3. **Cara Compile Program**

   ```bash
   meson setup build
   meson compile -C build
   ```

4. **Jalankan Program**

   ```bash
   ./build/MaxHeapify
   ```

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

### Fungsi Utama
- **insert()**: Menyisipkan elemen ke dalam Max Heap.
- **extractMax()**: Mengambil elemen maksimum.
- **buildMaxHeap()**: Membuat Max Heap dari array.
- **peekMax()**: Melihat elemen maksimum tanpa menghapusnya.