## Problem 9 — Count Subsets with Even Sum

### Problem Summary
Count the number of subsets whose sum is even.

### Algorithm Explanation
1. Generate all subsets using bitmask.
2. For each subset:
   - Calculate sum
   - Check if even
3. Count valid subsets.

### Time Complexity
- Subsets: 2^N
- Each sum calculation: O(N)
- Overall: **O(N * 2^N)**

### Space Complexity
- Input storage: **O(N)**

### Screenshot
![alt text](<../assets/Screenshot from 2026-03-17 18-33-49.png>)

### Reflection
This problem reinforced subset generation and introduced condition checking on subsets. It helped improve logical thinking for filtering subsets based on constraints.