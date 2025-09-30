# Searching Algorithms

**Author:** Prathyush  
**PRN:** 24070123064
**Batch:** ENTC A3  

---

## 📌 Overview
This repository contains implementations of fundamental **searching algorithms** in C++:
1. **Linear Search** – Iterative method using a `for` loop.
2. **Sequential Search** – Similar to linear search but implemented using a `while` loop.
3. **Binary Search** – Efficient searching algorithm that works on sorted arrays.

These programs demonstrate how to find a target element in an array and return its index if found.

---

## 🧑‍💻 Implemented Algorithms

### 1. Linear Search
- Checks each element one by one until the target is found.
- Time Complexity: **O(n)**
- Space Complexity: **O(1)**

```cpp
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
2. Sequential Search
Similar to linear search but uses a while loop instead of a for loop.

Time Complexity: O(n)

Space Complexity: O(1)

cpp
Copy code
int sequentialSearch(int arr[], int size, int target) {
    int index = 0;
    while (index < size) {
        if (arr[index] == target)
            return index;
        index++;
    }
    return -1;
}
3. Binary Search
Works only on sorted arrays.

Divides the search range in half each time until the target is found.

Time Complexity: O(log n)

Space Complexity: O(1)

cpp
Copy code
int binarySearch(int arr[], int size, int target) {
    int start = 0, end = size - 1;
    while (start <= end) {
        int middle = start + (end - start) / 2;
        if (arr[middle] == target)
            return middle;
        else if (arr[middle] < target)
            start = middle + 1;
        else
            end = middle - 1;
    }
    return -1;
}
🚀 How to Run
Clone the repository:

bash
Copy code
git clone https://github.com/<your-username>/<repo-name>.git
Navigate into the project folder:

bash
Copy code
cd <repo-name>
Compile the program:

bash
Copy code
g++ filename.cpp -o output
Run the executable:

bash
Copy code
./output
Example Output

For an array {10, 20, 30, 40, 50} and target 40:

Target 40 found at index 3.
