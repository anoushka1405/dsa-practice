# Day 12 – August 4, 2025

## Topics Covered

### Stacks (Strings)

#### 1. Make The String Great (LC 1544)
- Implemented stack-based approach to remove adjacent pairs where one is upper and the other is lower of the same character.
- Observed ASCII trick: uppercase and lowercase versions differ by 32.
- Replaced stack with string-as-stack for optimization.
- Optimized solution:
```cpp
for(char ch : s){
    if(!result.empty() && abs(result.back()-ch)==32){
        result.pop_back();
    } else {
        result.push_back(ch);
    }
}
```
- Learned to build the final result by reversing the stack or by using string push/pop directly.

#### 2. Backspace String Compare (LC 844)
- Simulated backspace behavior using a stack-like string.
- Careful to handle cases where `#` appears with nothing to delete.
- Final approach: compare two processed strings.
- Key insight: `pop_back()` only if the string is non-empty.


## Insights

- Strings can act as stacks with `push_back()` and `pop_back()` for space optimization.
- ASCII manipulation can simplify character pair checks.
- Carefully simulating text-editing behavior (like backspaces) builds strong intuition for real-world input parsing.

## Challenges

- Confused condition for popping characters (`isupper` vs ASCII check).
- Took a bit of extra time to debug the exact backspace simulation — understanding test cases helped.
- **Two-pointer approach for Backspace String Compare needs revision.**
