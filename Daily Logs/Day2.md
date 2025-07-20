#  Day 2 - July 19, 2025

##  Topics Covered

### Sliding Window Technique
- [x] Learned the basic sliding window template
- [x] Implemented “Longest Subarray with Given Sum K (Only Positives)”
  - Understood `start`, `end`, `currSum`, and how to shrink window when sum > k
  - Dry-run with example input helped debug logic
  - Final working code written and commented
- [x] Realized why sliding window doesn't work for negatives

### Hashing + Prefix Sum
- [x] Explored optimized solution for “Longest Subarray with Sum K (with Negatives)”
  - Understood use of `unordered_map` to store first occurrences of prefix sums
  - Learnt the logic behind `currSum - k` being in map = valid subarray exists
  - Didn’t fully grasp the intuition – marked for later revision

### Strings in C++
- [x] Solved LeetCode 1935 – Maximum Number of Words You Can Type
  - Used `unordered_set<char>` for fast lookup
  - Used `istringstream` to split sentence into words
  - Learned how `ss >> word` works in C++

##  Challenges Faced
- Got confused in prefix sum logic involving hashmap
- Didn’t derive solution on own for hash map version of subarray sum

## 💡 Insights
- Sliding window works only when array has all positive elements (due to monotonic nature of sum)
- Prefix sum + hashmap helps in tracking cumulative sum differences, especially useful when elements can be negative
- Breaking problems into dry runs on paper clears up logic faster than overthinking code
- Keeping code commented helps with later revision
