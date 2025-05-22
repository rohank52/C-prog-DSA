# 📘 C Programming + DSA Notes

A concise reference to **C programming** concepts and **Data Structures & Algorithms (DSA)** using C. Perfect for beginners, interviews, and quick revision.

---

## 🧾 C Programming Summary

### 🔤 Basics

```c
#include <stdio.h>

int main() {
    printf("Hello, C!\n");
    return 0;
}
```

* Entry point: `main()`
* Header files: `#include`
* Compile: `gcc file.c -o file`

### 📦 Data Types

* `int`, `float`, `char`, `double`
* Modifiers: `short`, `long`, `unsigned`, `signed`

### 🧩 Control Flow

* `if`, `else`, `switch`
* Loops: `for`, `while`, `do-while`
* Jump: `break`, `continue`, `goto`

### 🧠 Functions

```c
int add(int a, int b) { return a + b; }
```

* Call by value
* Call by reference (via pointers)

### 📍 Pointers

```c
int x = 10;
int *p = &x;
```

* `*p` dereference
* `&x` address of

### 📊 Arrays & Strings

```c
int arr[5]; char name[] = "Alice";
```

* Fixed-size, zero-indexed
* Strings = char arrays ending with `'\0'`

### 🧱 Structs

```c
struct Student { char name[50]; int age; };
```

* Custom data types

### 📁 File I/O

```c
FILE *fp = fopen("data.txt", "r");
fclose(fp);
```

* Modes: `r`, `w`, `a`, `rb`, `wb`

---

## 🧮 DSA in C

### 🔢 Arrays

* Static size
* Common operations: insert, delete, search

### 📚 Linked List

```c
struct Node {
    int data;
    struct Node* next;
};
```

* Types: Singly, Doubly, Circular
* Dynamic memory (`malloc`, `free`)

### 🌀 Stack

* LIFO (Last In First Out)
* Implemented via array or linked list

```c
push(), pop(), peek()
```

### 🔁 Queue

* FIFO (First In First Out)
* Types: Circular, Priority Queue

### 🌲 Trees

```c
struct Node {
    int data;
    struct Node* left, *right;
};
```

* Traversals: Inorder, Preorder, Postorder
* Binary Tree, BST, AVL

### 📈 Searching

* Linear Search: O(n)
* Binary Search: O(log n) (sorted only)

### 🧮 Sorting Algorithms

* **Bubble Sort** – O(n²)
* **Selection Sort** – O(n²)
* **Insertion Sort** – O(n²)
* **Merge Sort** – O(n log n)
* **Quick Sort** – O(n log n) avg

### 🧠 Recursion

```c
int fact(int n) {
    if(n <= 1) return 1;
    return n * fact(n - 1);
}
```

* Used in trees, backtracking, etc.

### 🗺 Hashing

* Hash tables using arrays
* Collision handling: chaining, open addressing

### 🧭 Graphs

* Represented using: Adjacency matrix/list
* Traversals: BFS, DFS

---

## 💡 Tips

* Master pointers — they power most DSA in C.
* Practice recursion — key for trees & backtracking.
* Use dry run/debugging to understand memory layout.

---

## 🧰 Tools

* Compiler: `gcc`, `clang`
* Debugger: `gdb`
* Formatter: `clang-format`
* Visualizer: [https://pythontutor.com/c.html](https://pythontutor.com/c.html)

---

## 📚 Resources

* Book: *Let Us C* by Yashwant Kanetkar
* [GeeksforGeeks – C DSA](https://www.geeksforgeeks.org/data-structures/)
* [CS50 by Harvard](https://cs50.harvard.edu/)

---

Let me know if you want this exported as a `.md` file or turned into a GitHub repo template!
