## Problem 7 — Running Median

### Problem Summary
Calculate the median after each insertion of a number in a stream.

### Algorithm Explanation
1. Use two heaps:
   - Max heap for lower half
   - Min heap for upper half
2. Balance heaps after each insertion.
3. Median:
   - If equal size → average of tops
   - Else → top of max heap

### Time Complexity
- Each insertion: O(log N)
- Overall: **O(N log N)**

### Space Complexity
- Heaps: **O(N)**

### Screenshot
![alt text](<../assets/Screenshot from 2026-03-17 18-28-55.png>)

### Reflection
This problem introduced streaming data processing. It showed how two heaps maintain balance efficiently and helped understand real-time median computation.