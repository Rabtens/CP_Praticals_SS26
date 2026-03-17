## Problem 8 — Subset Generation (Bitmask)

### Problem Summary
Generate all possible subsets of a given set.

### Algorithm Explanation
1. Total subsets = 2^N
2. Use bitmask from 0 to (2^N - 1)
3. For each bitmask:
   - Check each bit
   - Include element if bit is set

### Time Complexity
- Total subsets: 2^N
- Each subset takes O(N)
- Overall: **O(N * 2^N)**

### Space Complexity
- Output storage: **O(N * 2^N)**

### Screenshot
![alt text](<../assets/Screenshot from 2026-03-17 18-31-01.png>)

### Reflection
This problem helped in understanding bitmasking techniques. It showed how binary representation can generate subsets efficiently and is widely used in combinatorial problems.