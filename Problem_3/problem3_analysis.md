## Problem 3 — Remove Duplicates

### Problem Summary
The task is to remove duplicate elements from a list of integers and print only unique values.

### Algorithm Explanation
1. Read N and store elements in a vector.
2. Sort the vector.
3. Traverse the sorted vector:
   - Print the first element.
   - For each next element, compare with previous.
   - Print only if it is different.

### Time Complexity
- Sorting: O(N log N)
- Traversal: O(N)
- Overall: **O(N log N)**

### Space Complexity
- Vector storage: **O(N)**

### Screenshot
![alt text](<../assets/Screenshot from 2026-03-17 18-13-02.png>)

### Reflection
This problem helped in understanding how sorting simplifies duplicate removal. Initially, duplicate removal might seem complex, but sorting groups duplicates together, making comparison easy. It also reinforced the use of STL algorithms.