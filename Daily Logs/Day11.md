# Day 11 – August 2, 2025

## Topics Covered

### Stacks:

#### Valid Parentheses (LC 20)
- Implemented using a stack.
- Pushed opening brackets.
- Checked for correct matching closing brackets.
- Returned false on mismatch or leftover elements in stack.

#### Remove All Adjacent Duplicates in String (LC 1047)
- Used stack-based approach (or string as stack).
- If current char matches top of stack, popped.
- Else, pushed it.
- Final string built from stack contents.

## Insights

- Stack is powerful for managing balanced expressions or processing in LIFO order.
- Using `string` with `push_back` and `pop_back` behaves like stack.
- Adjacent removal problems map well to real-time stack behavior.

## Challenges

- Need to reinforce handling nested and interleaved bracket conditions.
