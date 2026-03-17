## Problem 1 — Dynamic Array Basics

### Problem Summary
The task is to read N integers from the user, store them using a dynamic container, and compute the maximum, minimum, and sum of all elements.

### Algorithm Explanation
1. Read integer N.
2. Declare a vector of size N.
3. Input all elements into the vector.
4. Initialize variables for sum, minimum, and maximum.
5. Traverse the vector once:
   - Add each element to sum.
   - Update maximum if current element is larger.
   - Update minimum if current element is smaller.
6. Print the results.

### Time Complexity
- Input reading: O(N)
- Traversal: O(N)
- Overall: **O(N)**

### Space Complexity
- Vector storage: **O(N)**

### Screenshot
![alt text](<../assets/Screenshot from 2026-03-17 18-04-55.png>)

### Reflection
This problem helped in understanding how vectors work as dynamic arrays in C++. It reinforced the concept of performing multiple computations (sum, min, max) in a single traversal, improving efficiency. It also clarified how vectors differ from static arrays in terms of flexibility.