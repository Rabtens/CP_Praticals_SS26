## Problem 5 — Balanced Line Problem (Deque Operations)

### Problem Summary
Simulate a queue where elements can be added or removed from both ends, and print the state after each operation.

### Algorithm Explanation
1. Use a deque to store elements.
2. For each operation:
   - push_front → insert at front
   - push_back → insert at back
   - pop_front → remove from front
   - pop_back → remove from back
3. After each operation, print all elements.

### Time Complexity
- Each operation: O(1)
- Printing deque: O(N)
- Overall depends on number of operations.

### Space Complexity
- Deque storage: **O(N)**

### Screenshot
![alt text](<../assets/Screenshot from 2026-03-17 18-23-40.png>)

### Reflection
This problem helped understand how deque differs from queue and stack. It demonstrated flexibility in inserting/removing from both ends. It also improved understanding of simulation-based problems.