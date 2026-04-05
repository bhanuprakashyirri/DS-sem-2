<div align="center">

# 🗂️ Data Structures in C

![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![Semester](https://img.shields.io/badge/Semester-1st%20Year-orange?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-purple?style=for-the-badge)

> A hands-on collection of **Data Structures** implemented from scratch in **C** — built as part of my 2nd year coursework.

</div>

---

## 📁 Repository Structure

```
data-structures-c/
│
├── 🔗 Linked Lists
│   ├── singlelinkedlist.c           → Singly Linked List
│   ├── doublelinkedlist.c           → Doubly Linked List
│   ├── circularsinglelinkedlist.c   → Circular Singly Linked List
│   └── doublecircularlinkedlist.c   → Circular Doubly Linked List
│
├── 📦 Stacks
│   ├── stackusingarrays.c           → Stack using Arrays
│   └── stackusinglinkedlist.c       → Stack using Linked List
│
├── 🔃 Sorting
│   ├── bubblesort2func.c            → Bubble Sort
│   ├── insertionsort.c              → Insertion Sort
│   └── newselectionSort.c           → Selection Sort
│
└── 🔍 Searching
    └── binarysearch.c               → Binary Search
```

---

## 🔗 Linked Lists

![LinkedList](https://img.shields.io/badge/Topic-Linked%20Lists-blue?style=flat-square)

A linked list is a dynamic linear data structure where each **node** holds data and a pointer to the next node.

```
HEAD → [10|•] → [20|•] → [30|NULL]
```

| File | Type | Key Operations |
|------|------|----------------|
| `singlelinkedlist.c` | Singly Linked List | Insert, Delete, Traverse |
| `doublelinkedlist.c` | Doubly Linked List | Insert, Delete, Forward & Backward |
| `circularsinglelinkedlist.c` | Circular Singly | Insert, Delete, Circular Traversal |
| `doublecircularlinkedlist.c` | Circular Doubly | Insert, Delete, Bidirectional Circular |

---

## 📦 Stacks

![Stack](https://img.shields.io/badge/Topic-Stacks-orange?style=flat-square)

A **Stack** follows **LIFO** — Last In, First Out.

```
  Push → [ TOP ] ← Pop
         [  3  ]
         [  2  ]
         [  1  ]
```

| File | Implementation | Operations |
|------|----------------|------------|
| `stackusingarrays.c` | Array-based | Push, Pop, Peek, isEmpty |
| `stackusinglinkedlist.c` | Node-based | Push, Pop, Peek, Dynamic Size |

---

## 🔃 Sorting Algorithms

![Sorting](https://img.shields.io/badge/Topic-Sorting-red?style=flat-square)

| File | Algorithm | Worst Case | Space |
|------|-----------|------------|-------|
| `bubblesort2func.c` | Bubble Sort | O(n²) | O(1) |
| `insertionsort.c` | Insertion Sort | O(n²) | O(1) |
| `newselectionSort.c` | Selection Sort | O(n²) | O(1) |

---

## 🔍 Searching Algorithms

![Searching](https://img.shields.io/badge/Topic-Searching-green?style=flat-square)

| File | Algorithm | Time Complexity | Requirement |
|------|-----------|-----------------|-------------|
| `binarysearch.c` | Binary Search | O(log n) | Sorted array |

---

## ⚙️ Compile & Run

```bash
# Compile
gcc filename.c -o output

# Run
./output
```

**Example:**
```bash
gcc singlelinkedlist.c -o sll
./sll
```

---

## 📬 Connect with Me

<div align="center">

[![LinkedIn](https://img.shields.io/badge/LinkedIn-Bhanu%20Prakash%20Yirri-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/bhanuprakashyirri/)
[![Gmail](https://img.shields.io/badge/Gmail-prakash4reall@gmail.com-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:prakash4reall@gmail.com)
[![GitHub](https://img.shields.io/badge/GitHub-bhanuprakashyirri-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/bhanuprakashyirri)

</div>

---

<div align="center">

⭐ **If this repo helped you, consider giving it a star!** ⭐

</div>
