# Data Structures and Algorithms (LAB+Theory) Guide for 3rd Sem CPS
## 📋 Course Overview
This course combines Object-Oriented Programming concepts in C++ with traditional Data Structures and Algorithms, and includes Python implementations. This unique structure helps build a strong foundation in both programming paradigms and DSA concepts.  
## 📚 How to Use This Guide
1. Follow the sections in order - concepts build upon each other
2. Complete the practice problems for each section
3. Implement the code examples in both C++ and Python where applicable
4. Review the PYQs at the end of each major section
----------------------------------------------------------------
## Part 1: C++ and Object-Oriented Programming
### 1.1 C++ Fundamentals
#### Core Concepts
- Structure of C++ Program
- Data Types (Basic, User-defined, Derived)
- Operators and Their Precedence
- Control Statements and Functions
#### Key Points to Remember
- Difference between pass by value and reference
- Understanding function prototyping
- Inline functions and their use cases
- Pointer manipulation
#### Related PYQs
1. Illustrate the types of constructors using a program. (CO1, BL3, PO1, PO5) -- 3M 2023endsem
2. Ilustrate operator overloading by writing a program which uses a unary ++ operator to increment a value. (CO1, BL3, PO1, PO5) -- 4M 2023endsem
3. Write a C++ program to find the sum of numbers which illustrates the use of base class constructors in a single inheritance. (CO1, BL4, PO5). --3M 2024midsem
4. How are control structures classified? Give the syntaxes for the different types. (CO1, BL2, PO1) --3M 2024midsem
5. Write a program to illustrate the working of multilevel inheritance for the mathematical expression (a+b)^2 . Use two-member functions, one to read the data and the other to display its value. (CO1, BL4, PO5) --4M 2024midsem
6. Illustrate function templates with multiple parameters using a C++ program. (CO1, BL4, PO5) --2M 2024midsem 
7. Write a program in C++ to print a square pattern with the # character using loops. (CO1, BL4, PO5) --2M 2024midsem
-----------------------------------------------------------------
## Part 2: Basic Data Structures and Recursion
### 2.1 Recursion
#### Core Concepts
- Understanding recursive functions
- Base cases and recursive cases
- Stack frame in recursion
- Common recursive problems
#### Implementation Focus
- Factorial calculation
- Fibonacci series
- Tower of Hanoi
- Debugging techniques for recursive functions
### 2.2 Linked Lists
#### Core Concepts
- Single Linked List
- Double Linked List
- Circular Linked List
- Common operations
#### Implementation Focus
- Insertion (beginning, end, middle)
- Deletion
- Traversal
- Special cases handling
#### Related PYQs
1. Write a program to delete an element at the end of the linked list of array size 12. (CO2, BL3, PO1, PO5) -- 3M 2023endsem
2. Write a C++ program to implement a recursive function to calculate the sum of digits of a given number. (CO2, BL4, PO1, PO5) -- 3M 2023endsem
3. Write a C++ program to implement a recursive function to calculate the product of two numbers without using the multiplication operator. (CO2, BL4, PO5) --3M 2024midsem
4. Write a program in C++ to create a doubly linked list of ‘n’ nodes and count the
number of nodes. (CO2, BL4, PO5) --3M 2024midsem
- -------------------------------------------------------------
## Part 3: Advanced Data Structures
### 3.1 Trees
#### Core Concepts
- Binary Search Trees
- Tree Traversal (Inorder, Preorder, Postorder)
- Binary Expression Trees
- Kernel Density Trees
### 3.2 Stacks and Queues
#### Core Concepts
- Stack operations and applications
- Queue types and implementations
- Priority Queues
- Ring Buffer concept
### 3.3 Heaps
Core Concepts
- Max Heap
- Min Heap
- Heapify process
- Common operations
#### Related PYQs
1. State the advantages of circular queue over linear queue. With examples, compare the enqueue and dequeue operations between the two. (CO3, BL3, PO1, PO2) --4M 2023endsem
2. Illustrate any three types of binary tree. (CO3, BL3, PO1, PO2) --3M 2023endsem
3. If there are 8 nodes in a binary tree, calculate its minimum and maximum height. (CO3, BL4, PO1, PO3) --2M 2023endsem
4. Convert the given infix expression to prefix using stack.
   ![image](https://github.com/user-attachments/assets/c8fd31f5-91b3-49b3-8f75-d118bdd550cd)  
   Write the algorithm for the prefix expression for an expression tree. Draw the expression tree. (CO3, BL4, PO1, PO3) --5M 2023endsem
5. Calculate the order to print all the nodes of the graph starting from the root node using Depth first
search algorithm. Consider 0 as the root node. (CO3, BL4, PO1, PO3) --4M 2023endsem
![image](https://github.com/user-attachments/assets/b0c7769b-945e-4ad6-867c-b14ea57265a7)
6. What are the different traversal algorithms in binary search tree? Write the algorithms. (CO3, BL2, PO1) --3M 2024midsem
7. Which properties of binary search tree make it a special type of binary tree? (CO3, BL2, PO1) --2M 2024midsem
- ---------------------------------------------------------------
## Part 4: Python Implementation
### 4.1 Python Data Structures
#### Core Concepts
- Lists vs Arrays
- Tuples
- Python implementation of previous structures
- Python-specific optimizations
#### Related PYQs
1. Write a Python program to find the sum of two numbers using multi-level inheritance. (CO4, BL3, PO3, PO5) --3M 2023endsem
2. Write a Python program to create a recursive function to calculate the sum of numbers from 0 to 10. (CO4, BL4, PO1, PO5) --2M 2023endsem
3. Compare lists and tuples in Python Programming with examples. (CO4, BL3, PO1)  --3M 2023endsem
- -----------------------------------------------------------------
## Part 5: Algorithms
### 5.1 Sorting Algorithms
#### Core Concepts
- Bubble Sort
- Heap Sort
- Radix Sort
- Complexity Analysis
### 5.2 Searching Algorithms
#### Core Concepts
- Linear Search
- Binary Search
- Hashing Techniques
- Time-Space Trade-offs
#### Related PYQs
1. Collision in hashing occurs when two indices have to store different values. Given an array {4, 11, 6, 3, 7, 13, 12, 9}, with m = 10 and h(k) = 2k +3, illustrate how collision can be avoided using Quadratic Probing. Also write the order of storage after collision avoidance. (CO5, BL4, PO1, PO3) -- 3M 2023endsem
2. Sort the given array [50, 25, 35, 16, 55, 22, 9, 8, 75, 20] using heap sort algorithm with all the steps. (CO5, BL4, PO1, PO3) -- 4M 2023endsem
3. Given an array [15, 24, 36, 55, 78, 90, 111, 145, 176, 208], find 55 using binary search algorithm. Write the algorithm for the same. (CO5, BL4, PO1, PO3)
- - -----------------------------------------------------------------
## 📚 Additional Resources
(Add links to helpful online resources, videos, and practice platforms)
- -----------------------------------------------------------------
## ⚠️ Common Pitfalls to Avoid
(Add section about common mistakes and misconceptions)

-------x----------x--------------
