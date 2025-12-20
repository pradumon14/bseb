
# Computer Science Practical Portfolio

![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B)
![Database](https://img.shields.io/badge/Database-SQLite-003B57?style=for-the-badge&logo=sqlite)
![Status](https://img.shields.io/badge/Status-Completed-success?style=for-the-badge)

This repository serves as a comprehensive archive of my Class 12 Computer Science practical work. It features implementations of fundamental Data Structures and Algorithms in C++, alongside Database Management solutions demonstrating SQL proficiency.

## 📂 Project Structure

The repository is divided into two primary sections:
1.  **C++ Source Code:** 20+ programs covering arrays, stacks, queues, and file handling.
2.  **Database Management:** Schema design and SQL queries based on real-world student data scenarios.
```
bseb/
│
├── cpp/
│   ├── p01_array_sum_avg.cpp
│   ├── p02_array_insertion.cpp
│   ├── p03_array_deletion.cpp
│   ├── p04_array_linear_search.cpp
│   ├── p05_array_binary_search.cpp
│   ├── p06_array_sorting.cpp
│   ├── p07_array_merging.cpp
│   ├── p08_matrix_addition.cpp
│   ├── p09_matrix_multiplication.cpp
│   ├── p10_matrix_transpose.cpp
│   ├── p11_array_of_structures_student.cpp
│   ├── p12_array_of_objects_employee.cpp
│   ├── p13_stack_array.cpp
│   ├── p14_stack_linkedlist.cpp
│   ├── p15_queue_linear.cpp
│   ├── p16_queue_circular.cpp
│   ├── p17_queue_linkedlist.cpp
│   ├── p18_binary_file_student.cpp
│   ├── p19_text_file_operations.cpp
│   ├── p20_prime_sieve.cpp
│   ├── p21_polynomial_addition.cpp
│   └── p22_sparse_matrix.cpp
│
├── sql/
│   └── class10.db 
└── README.md
```
---

## 1. C++ Programming Implementations

This section allows for the execution and testing of standard algorithms and data structures.

### 1D Array Programs
*   `p01_array_sum_avg.cpp` - Calculate sum and average of elements.
*   `p02_array_insertion.cpp` - Insert an element at a specific index.
*   `p03_array_deletion.cpp` - Delete an element from a specific index.
*   `p04_array_linear_search.cpp` - Linear search implementation.
*   `p05_array_binary_search.cpp` - Binary search implementation (sorted array).
*   `p06_array_sorting.cpp` - Sorting array elements (Bubble Sort).
*   `p07_array_merging.cpp` - Merge sort logic for two arrays.

### 2D Array Programs
*   `p08_matrix_addition.cpp` - Matrix addition logic.
*   `p09_matrix_multiplication.cpp` - Matrix multiplication logic.
*   `p10_matrix_transpose.cpp` - Matrix transposition.

### Structures & OOP
*   `p11_array_of_structures_student.cpp` - Record management using struct.
*   `p12_array_of_objects_employee.cpp` - Employee management using classes.

### Stack & Queue Data Structures
*   `p13_stack_array.cpp` - Static Stack using Arrays.
*   `p14_stack_linkedlist.cpp` - Dynamic Stack using Linked Lists.
*   `p15_queue_linear.cpp` - Linear Queue implementation.
*   `p16_queue_circular.cpp` - Circular Queue implementation.
*   `p17_queue_linkedlist.cpp` - Dynamic Queue using Linked Lists.

### File Handling
*   `p18_binary_file_student.cpp` - Binary I/O (Create, Read, Modify).
*   `p19_text_file_operations.cpp` - Text I/O operations.

### Algorithms
*   `p20_prime_sieve.cpp` - Sieve of Eratosthenes algorithm.
*   `p21_polynomial_addition.cpp` - Polynomial algebra implementation.
*   `p22_sparse_matrix.cpp` - Triplet representation of sparse matrices.

---

## 2. SQL Database Management

This section utilizes Structured Query Language to manage student records for the 2023-24 academic session.

### Dataset Overview
The queries in this project are validated against the following `Students` dataset:

| ID | Name      | RollNo | Class | Session | Gender |
|----|-----------|--------|-------|---------|--------|
| 1  | Priyanshu | 1      | 10    | 2023-24 | Male   |
| 2  | Yanshi    | 2      | 10    | 2023-24 | Female |
| 3  | Siya      | 3      | 10    | 2023-24 | Female |
| 4  | Raunak    | 4      | 10    | 2023-24 | Male   |
| 5  | Ankit     | 5      | 10    | 2023-24 | Male   |
| 6  | Piyush    | 6      | 10    | 2023-24 | Male   |
| 7  | Yuvraj    | 7      | 10    | 2023-24 | Male   |
| 8  | Vikash    | 8      | 10    | 2023-24 | Male   |
| 9  | Rajak     | 9      | 10    | 2023-24 | Male   |
| 10 | Nikhil    | 10     | 10    | 2023-24 | Male   |
| 11 | Suraj     | 11     | 10    | 2023-24 | Male   |
| 12 | Roshan    | 12     | 10    | 2023-24 | Male   |
| 13 | Musharaf  | 13     | 10    | 2023-24 | Male   |
| 14 | Pradumon  | 14     | 10    | 2023-24 | Male   |
| 15 | Saloni    | 15     | 10    | 2023-24 | Female |
| 16 | Aditi     | 16     | 10    | 2023-24 | Female |
| 17 | Manisha   | 17     | 10    | 2023-24 | Female |
| 18 | Gulabsa   | 18     | 10    | 2023-24 | Female |
| 19 | Jhanvi    | 19     | 10    | 2023-24 | Female |
| 20 | Zehra     | 20     | 10    | 2023-24 | Female |
| 21 | Sifa      | 21     | 10    | 2023-24 | Female |
| 22 | Roshni    | 22     | 10    | 2023-24 | Female |
| 23 | Samma     | 23     | 10    | 2023-24 | Female |
| 24 | Putul     | 24     | 10    | 2023-24 | Female |

---

## Installation & Setup

### 1. Clone the Repository
To run this project locally, clone the repository to your system:

```bash
git clone https://github.com/pradumon14/bseb
cd bseb
```

### 2. Compile and Run C++ Programs
Ensure that a C++ compiler is installed on your system. Use the commands below according to your OS.

**Linux / Termux**
```bash
g++ p01_array_sum_avg.cpp -o app
./app
```

**Windows (PowerShell)**
```powershell
g++ p01_array_sum_avg.cpp -o app.exe
.\app.exe
```

**macOS**
(Requires Xcode Command Line Tools: `xcode-select --install`)
```bash
clang++ p01_array_sum_avg.cpp -o app
./app
```

### 3. Initialize and Run SQL
This project uses SQLite for database operations. If SQLite is not installed, follow the commands below.

**Installation:**
```bash
# Ubuntu/Debian
sudo apt install sqlite3

# Termux (Android)
pkg install sqlite

# macOS (Homebrew)
brew install sqlite
```

**Running the Database:**
To start an interactive database session:

```sql
/* Start SQLite and create the database file */
sqlite3 class10.db

/* Improve display formatting */
sqlite> .headers on
sqlite> .mode box

/* Example Query */
sqlite> SELECT Name, RollNo FROM students WHERE Gender='Male';
```
