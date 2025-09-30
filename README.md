# Searching Algorithms

**Author:** Prathyush
**PRN:** 24070123064
**Batch:** ENTC A3  

---

## 📌 Overview
**Searching** is the process of finding the location of a particular element (called the **target**) within a data structure such as an array or a list.  
Efficient searching is a fundamental concept in computer science and is widely used in databases, software applications, and system programming.  

This repository contains implementations of the following **searching algorithms** in C++:

1. **Linear Search** – Simple iterative search through all elements.
2. **Sequential Search** – Linear search implemented using a `while` loop.
3. **Binary Search** – Efficient search for **sorted arrays** using a divide-and-conquer approach.

---

## 🧠 Theory

### 1. Linear Search
**Definition:**  
Linear search, also known as **simple search**, is the most straightforward searching technique. It examines each element of the array sequentially until the target element is found or the end of the array is reached.

**Working Principle:**  
1. Start from the first element of the array.
2. Compare the current element with the target.
3. If it matches, return the index.
4. Otherwise, move to the next element and repeat steps 2–3.
5. If the end of the array is reached without a match, return `-1`.

**Advantages:**  
- Simple and easy to implement.  
- Works on both sorted and unsorted arrays.  

**Disadvantages:**  
- Inefficient for large datasets (O(n) time complexity).  

**Example:**  
Array: `{10, 20, 30, 40, 50}`  
Target: `30` → Found at index `2`.

---

### 2. Sequential Search
**Definition:**  
Sequential search is essentially a **linear search implemented using a while loop**. Functionally, it is the same as linear search, but the implementation uses `while` instead of `for`.  

**Working Principle:**  
1. Initialize an index variable at 0.  
2. While the index is less than the array size:
   - Compare `arr[index]` with the target.
   - If equal, return the index.
   - Otherwise, increment the index.  
3. If no match is found, return `-1`.

**Advantages:**  
- Easy to understand and implement.  
- Works on unsorted arrays.  

**Disadvantages:**  
- Linear time complexity (O(n)) makes it inefficient for large arrays.

---

### 3. Binary Search
**Definition:**  
Binary search is an efficient searching technique that works on **sorted arrays**. It uses a **divide-and-conquer** approach to reduce the search space by half in each step.  

**Working Principle:**  
1. Initialize `start` and `end` pointers.  
2. Find the middle index: `middle = start + (end - start)/2`.  
3. Compare `arr[middle]` with the target:
   - If equal → return middle.  
   - If target > `arr[middle]` → search in the right half.  
   - If target < `arr[middle]` → search in the left half.  
4. Repeat steps 2–3 until `start > end` (target not found).  

**Advantages:**  
- Very efficient for large datasets (O(log n) time complexity).  
- Reduces comparisons drastically compared to linear search.  

**Disadvantages:**  
- Requires **sorted arrays**.  
- Slightly complex to implement than linear search.  

**Example:**  
Array: `{10, 20, 30, 40, 50}`  
Target: `40` → Found at index `3`.

---

## 📊 Comparison of Algorithms

| Algorithm        | Best Case | Worst Case | Average Case | Requirement         |
|------------------|-----------|------------|--------------|--------------------|
| Linear Search    | O(1)      | O(n)       | O(n/2)       | Works on any array |
| Sequential Search| O(1)      | O(n)       | O(n/2)       | Works on any array |
| Binary Search    | O(1)      | O(log n)   | O(log n)     | Array must be sorted |

---

## 🚀 How to Run the Programs

1. **Clone the repository:**
   ```bash
   git clone https://github.com/<your-username>/<repo-name>.git
Navigate into the project folder:

bash
Copy code
cd <repo-name>
Compile a C++ program:

bash
Copy code
g++ filename.cpp -o output
Run the executable:

bash
Copy code
./output
