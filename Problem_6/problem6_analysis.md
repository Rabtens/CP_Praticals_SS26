## Problem 6 — K Largest Elements

### Problem Summary
Find and print the K largest elements from a list of N numbers.

### Algorithm Explanation
1. Use a max heap (priority queue).
2. Insert all elements into the heap.
3. Extract the top K elements.

### Time Complexity
- Insertion: O(N log N)
- Extract K elements: O(K log N)
- Overall: **O(N log N)**

### Space Complexity
- Heap storage: **O(N)**

### Screenshot
![alt text](<../assets/Screenshot from 2026-03-17 18-26-08.png>)

### Reflection
This problem demonstrated how priority queues can efficiently retrieve largest elements. It also showed the advantage of heaps over sorting when only partial results are required.