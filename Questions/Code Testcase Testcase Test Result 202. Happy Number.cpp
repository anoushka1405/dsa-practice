 // HashSet to track numbers we've seen before to detect loops
    unordered_set<int> seen;

    bool isHappy(int n) {
        // Base case: if we reach 1, it's a happy number
        if (n == 1) return true;

        // If we've seen this number before, we are in a cycle → not happy
        if (seen.count(n)) return false;

        // Mark current number as seen
        seen.insert(n);

        // Calculate the sum of the squares of digits
        int sum = 0;
        while (n != 0) {
            int digit = n % 10;       // Get last digit
            sum += digit * digit;     // Add square of digit
            n /= 10;                  // Remove last digit
        }

        // Recursively check if the new number is happy
        return isHappy(sum);
    }

//Using tortoise hare method for cycle detection.

    // Helper function to get sum of squares of digits
    int getNext(int n) {
        int sum = 0;
        while (n != 0) {
            int digit = n % 10;       // Get last digit
            sum += digit * digit;     // Add square of digit
            n /= 10;                  // Remove last digit
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n;                 // Slow pointer moves one step
        int fast = getNext(n);       // Fast pointer moves two steps

        // Loop until we either find 1 (happy number) or detect a cycle
        while (fast != 1 && slow != fast) {
            slow = getNext(slow);                // Move one step
            fast = getNext(getNext(fast));       // Move two steps
        }

        // If fast reaches 1, it's a happy number
        return fast == 1;
    }
