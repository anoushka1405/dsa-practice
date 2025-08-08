# Day 13 (August 7, 2025)

## Problems Solved and Topics Covered

### 1. Contains Duplicate - lc 219
- Implemented frequency counting with `unordered_map`.  
- Optimized with `unordered_set` to detect duplicates early.  
- Learned about `unordered_set::insert` return value (pair with bool).  
- Practiced early return to improve efficiency.


### 2. Valid Anagram - lc 242
- Learned to simplify by using a single frequency map: increment counts for first string, decrement for second.  
- Understood early termination if counts mismatch.  

### 3. Group Anagrams - lc 49 
- Understood idea of creating a key common to all anagrams : the alphabetically sorted anagram.
- strengthened hashmaps and vectors
 

### 3. Two Sum - lc 1  
- Implemented hash map approach to find two indices adding up to target.  
- Debugged small mistake (subtracting index instead of value).  
- Learned the meaning of `mp[nums[i]] = i` to map values to their indices.  




---

## Challenges and Learnings

- Debugged subtle logic errors (e.g., complement calculation).  
- Practiced C++ STL containers (`unordered_map`, `unordered_set`, `map`) usage.  
- Recognized importance of early stopping to optimize runtime.  

---

## Overall Insights

- Hash maps and sets are essential tools for fast lookup in problems like duplicates and two sum.  
- Traversing and understanding map data structures improves debugging and coding speed.  
- Simplifying logic after getting a correct solution helps write cleaner, faster code.  

---
