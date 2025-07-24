## Day 7 - July 24, 2025

### Topics Covered

#### Queues
- Implemented queues using vectors.
- Understood why circular queue is needed:
  - Dequeue is O(n) in linear array due to shifting.
  - Circular queue solves this using modular arithmetic.
- Implemented circular array logic:
  - Used `%` operator to wrap around and reuse freed space.
- Applications of Queues:
  - **OS Concepts:**
    - Page Replacement Algorithms (Second Chance, FIFO).
    - CPU Scheduling (Round-Robin).
    - Buffer Systems (Ring Buffers for inter-process communication).
  - **Real Life:**
    - Months in a year, Meals in a day, Traffic lights, Clocks.

#### 2D & 3D Arrays
- Declaration, initialization, and traversal of multi-dimensional arrays.
- Practiced passing 2D arrays as function parameters.
  - Understood the need for fixed number of columns in function declaration.

#### LeetCode
- **LC 867 – Transpose Matrix**
  - Understood how to use `vector<vector<int>> res(m, vector<int>(n));` to create a new matrix.
  - Learned swapping rows and columns: `res[j][i] = mat[i][j];`.
- **LC 54 – Spiral Matrix**
  - Got the basic logic of maintaining 4 boundaries (top, bottom, left, right).
  - Understood traversal in 4 directions and shrinking bounds after each round.
  - Need to revisit and dry-run fully tomorrow.

---

### Insights 
- Modulo logic in circular queues is a practical optimization trick.
- Matrix operations often require careful handling of indices and dimensions — not as trivial as 1D arrays.
- Real-world applications help ground abstract data structures into memorable scenarios.

---

### Challenges ⚠
- Spiral Matrix: Difficult to manage all boundary conditions and directions mentally — will revisit with dry-run.

---
