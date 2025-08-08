# Day 14 (August 8, 2025)

## Problems Solved and Topics Covered

1. **Stack using Queues**  (lc 225)
   - Implemented stack operations (`push`, `pop`, `top`, `empty`) using two queues.  
   - Learned the technique of transferring all elements except the last to the helper queue to simulate stack LIFO behavior.  

2. **Queue using Stacks**  (lc 232)
   - Implemented queue operations (`push`, `pop`, `peek`, `empty`) using two stacks.  
   - Understood the logic of transferring elements between stacks only when needed to maintain FIFO order.  
   - Learned why checking the helper stack’s emptiness is crucial for efficiency.  

3. **MinStack Implementation**  (lc 155)
   - Built a stack supporting `getMin()` in O(1) time using two stacks: one for values, one for tracking minimums.  
   - Understood why equal minimum values must also be pushed onto the min stack.  
   - Learned how to keep min stack in sync with the main stack during pops.  

4. **Queue using Linked List**  
   - Implemented a queue with linked list nodes managing `front` and `rear` pointers.  
   - Ensured enqueue and dequeue operations run in O(1) time.  

5. **Queue using Vector and Array**  
   - Implemented a queue using a vector with a moving front index and occasional cleanups for memory efficiency.  
   - Implemented a fixed-size circular queue with an array using modular arithmetic for wrap-around indexing.  


## Challenges and Learnings
- Improved understanding of how to maintain auxiliary data structures like min stacks for optimal query time.   

## Overall Insights

- Auxiliary data structures (like a second stack or queue) can efficiently simulate other abstract data types.  


