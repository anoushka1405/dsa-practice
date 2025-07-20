#  Moore’s Voting Algorithm

## Purpose
To find the *majority element* (an element that appears more than ⌊n/2⌋ times) in an array.

---

## Assumptions
- The majority element **always exists** in the array (as per Leetcode 169).
- If not guaranteed, a second pass is needed to validate the candidate.

---

##  Intuition
If an element appears more than half the time, it **cancels out all other elements** when you:
- Increase count for same element.
- Decrease count for different elements.

Eventually, the **majority element survives** as the last candidate.

---

## 🛠️ Algorithm Steps
1. **Initialize:**
   - `count = 0`
   - `candidate = 0`

2. **First Pass – Finding Candidate:**
   - Traverse the array:
     - If `count == 0`, set `candidate = current element`.
     - If `element == candidate`, do `count++`
     - Else, do `count--`

3. **(Optional) Second Pass – Verify Candidate:**
   - Count occurrences of `candidate` again.
   - If it appears more than ⌊n/2⌋ times, return it.
   - Else, return -1.

> If the majority element is **guaranteed**, the second pass is not needed.

---

## Time & Space Complexity
| Aspect | Value |
|--------|-------|
| Time   | O(n)  |
| Space  | O(1)  |

---

## Use Cases
- Finding the majority element in arrays (Leetcode 169).
- Useful where majority is **guaranteed** or **validation is added**.

---

## Example Dry Run

Array: `[2, 2, 1, 1, 1, 2, 2]`

| Index | Element | Candidate | Count |
|-------|---------|-----------|-------|
| 0     | 2       | 2         | 1     |
| 1     | 2       | 2         | 2     |
| 2     | 1       | 2         | 1     |
| 3     | 1       | 2         | 0     |
| 4     | 1       | 1         | 1     |
| 5     | 2       | 1         | 0     |
| 6     | 2       | 2         | 1     |

Final `candidate = 2`, which is correct.
