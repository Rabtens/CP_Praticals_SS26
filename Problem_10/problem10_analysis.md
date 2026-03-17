## Problem 10 — Subset Sum Count

### Problem Summary
Count the number of subsets whose sum equals a target value.

### Algorithm Explanation
1. Generate all subsets using bitmask.
2. For each subset:
   - Compute sum
   - Compare with target
3. Increment count if equal.

### Time Complexity
- Subsets: 2^N
- Each subset sum: O(N)
- Overall: **O(N * 2^N)**

### Space Complexity
- Input storage: **O(N)**

### Screenshot
![alt text](<../assets/Screenshot from 2026-03-17 18-36-37.png>)

### Reflection
This problem helped understand subset sum concepts and brute-force techniques. It also provided a foundation for more advanced methods like dynamic programming.