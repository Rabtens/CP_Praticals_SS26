## Problem 4 — Sliding Window Maximum

### Problem Summary
Given an array and a window size K, the goal is to find the maximum element in every window of size K.

### Algorithm Explanation
1. Use a deque to store indices of useful elements.
2. For each element:
   - Remove indices outside the window.
   - Remove smaller elements from the back.
   - Add current index.
3. The front of the deque always contains the maximum.
4. Print the maximum for each window.

### Time Complexity
- Each element is added and removed at most once.
- Overall: **O(N)**

### Space Complexity
- Deque stores at most K elements: **O(K)**

### Screenshot
![alt text](<../assets/Screenshot from 2026-03-17 18-16-40.png>)

### Reflection
This problem showed how deque can optimize sliding window problems. A brute force approach would take O(NK), but using deque reduces it to O(N). It improved understanding of efficient data structures for real-time window processing.