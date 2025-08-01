##  Day 9 – July 31, 2025

### Topics Covered

#### Linked Lists:

-  **Detect Loop Length in Linked List**
  - Implemented Floyd’s Cycle Detection Algorithm.
  - Understood how to detect loop and then find the length of the loop.
  - Realized why we move `fast` one step before counting: to not count the starting node twice.

- **Reversing a Linked List**
  - Iterative approach using `prev`, `curr`, and `next` pointers.
  - Revisited recursive approach (noted difficulty in recalling it).

- **Check if Length of Linked List is Odd or Even**
  - Used fast pointer approach (`fast = fast->next->next`).
  - `fast == nullptr` → even; `fast != nullptr` → odd.

- **Find Merge Point of Two Linked Lists**
  - Brute-force nested loop approach.
  - Understood importance of comparing node *references*, not values.
  - Implemented optimal 2-pointer solution:
    - Reset pointers to the other list when null.
    - Ensures both pointers traverse equal total lengths.

-  **Dry Run Practice**
  - Walked through diagrams and memory-level understanding of nodes vs values.

###  LeetCode Problems Solved
-  **Intersection of Two Linked Lists**
  - Used optimal 2-pointer method.
  - Final code:
    ```cpp
    while(ptr1 != ptr2){
        ptr1 = (ptr1 == nullptr) ? headB : ptr1->next;
        ptr2 = (ptr2 == nullptr) ? headA : ptr2->next;
    }
    ```

###  Insights
- Comparing pointers means comparing addresses — not values.
- Fast and slow pointer methods help detect cycle, find midpoint, determine length parity, and more.
- Switching pointers in intersection detection ensures synchronization without needing lengths.

### Challenges
- Recursive linked list reversal still not intuitive — needs reinforcement.
- Initially struggled with dry-running Floyd’s Algorithm and merge point logic but overcame through visualization.
