# Experiment 15: Recursion

## **Aim**
To understand and implement recursion in C++ by solving problems like:  
1. Sum of first N natural numbers  
2. Factorial of a number  
3. Reversing a number  
4. Reversing a string  

---

## **Objectives**
- Learn the concept of recursion and its applications.  
- Implement recursive functions for mathematical and string operations.  
- Compare recursion with iteration in terms of memory, time, and readability.  
- Understand real-life and industrial applications of recursion.  

---

## **Tools Used**
VS Code

---

## **Theory**

## Definition:
   Recursion is a programming technique in which a function calls itself directly or indirectly to solve a smaller instance of the same problem. 
   It continues until it reaches a base condition.

---

## Key Components of Recursion:
   a) Base Case:
      - The condition under which the recursion stops.
      - Prevents infinite recursion.
      - Example: n == 0 in factorial or sumup function.
   
   b) Recursive Case:
      - Part of the function where it calls itself with a smaller/simpler input.
      - Example: fact(n-1) or sumup(n-1).
   
   c) Parameters / Arguments:
      - Input values passed to the function for each recursive call.
      - Often reduced in each step to reach the base case.

---

## How Recursion Works (Stack Behavior):
   - Each recursive call is pushed onto the **call stack**.
   - Memory is allocated for parameters, local variables, and return address of each call.
   - Execution pauses at each recursive call until the base case is reached.
   - Once base case is reached, the stack starts **unwinding**, returning values to previous calls in reverse order.
   
   Example (sumup(3)):
     sumup(3) → 3 + sumup(2)
     sumup(2) → 2 + sumup(1)
     sumup(1) → 1 + sumup(0)
     sumup(0) → 0 (base case reached)
     Stack unwinds: 0 → 1 → 3 → 6 (final result)

---

## Text-Based Stack Visualization:

   Call Stack (Top at the top, bottom at the base):
```
   +------------------+  <- sumup(3) waiting for sumup(2)
   | sumup(3)         |
   +------------------+
   | sumup(2)         |
   +------------------+
   | sumup(1)         |
   +------------------+
   | sumup(0)         |  <- Base case, returns 0
   +------------------+
   |   End / Return   |
   +------------------+
```
   - Stack unwinds from top to bottom, combining results at each level.

---

## Advantages of Recursion:
   - Simplifies code for problems with repetitive or nested subproblems.
   - Elegant for tasks like tree traversals, factorial, Fibonacci, string/number reversal.

---

## Disadvantages:
   - Can consume more memory due to stack usage.
   - May lead to stack overflow if base case is missing or input is too large.
   - Sometimes iterative solutions are more efficient.

---

## Key Notes:
   - Every recursion must have a base case.
   - Recursive function can call itself directly or indirectly.
   - Recursion is often visualized as a stack of function calls.
   - Recursive solution should reduce problem size in each call.

---

### Why Recursion Can Be Better than Iteration
- Makes the logic closer to mathematical formulation.  
- Useful for hierarchical or nested problems (e.g., directory traversal, parsing).  
- Reduces need for manual stack or auxiliary data structures in some cases.  

---

## **Algorithm**

### 1. Sum of N Numbers
1. Start  
2. Read integer `n`  
3. If `n < 0`, display error  
4. If `n == 1` or `n == 0`, return 1  
5. Else return `n + sumup(n-1)`  
6. Print result  
7. End  

---

### 2. Factorial of a Number
1. Start  
2. Read integer `n`  
3. If `n < 0`, display error  
4. If `n == 0` or `n == 1`, return 1  
5. Else return `n * fact(n-1)`  
6. Print result  
7. End  

---

### 3. Reverse a Number
1. Start  
2. Read integer `num`  
3. If `num > 0`, print `num % 10`  
4. Call function recursively with `num/10`  
5. End  

---

### 4. Reverse a String
1. Start  
2. Read string `str`  
3. If index < 0, return ""  
4. Else return `str[index] + reverse(str, index-1)`  
5. Print result  
6. End  

---


## **Flowcharts**

**1. Sum of N Numbers**  
```
          +----------------------+
          |        Start         |
          +----------------------+
                    |
                    v
          +----------------------+
          |       Input n        |
          +----------------------+
                    |
                    v
          +----------------------+
          |      n < 0 ?         |
          +----------------------+
            |             |
           Yes            No
            |             |
            v             v
  +----------------+   +----------------------+
  | Print error    |   |      n <= 1 ?        |
  | message        |   +----------------------+
  +----------------+       |          |
                           Yes         No
                            |           |
                            v           v
                     +------------+  +------------------+
                     | return 1   |  | return n + sumup |
                     |            |  | (n-1)            |
                     +------------+  +------------------+
                            |
                            v
                    +----------------+
                    |  Print result  |
                    +----------------+
                            |
                            v
                          +------+
                          | End  |
                          +------+
```

---

**2. Factorial**  
```
+-------------------------------+
|             Start             |
+-------------------------------+
              |
              v
+-------------------------------+
|          Input n              |
+-------------------------------+
              |
              v
+-------------------------------+
|         Is n <= 1 ?           |
+-------------------------------+
       | Yes           | No
       v                v
+----------------+   +---------------------+
| Return 1       |   | Return n* fact(n-1) |
+----------------+   +---------------------+
       |
       v
+----------------+
|      End       |
+----------------+

```

---

**3. String Reversal**  
```
+-------------------------------+
|             Start             |
+-------------------------------+
              |
              v
+-------------------------------+
| Input string str              |
+-------------------------------+
              |
              v
+-------------------------------+
| Is str empty or length = 1 ?  |
+-------------------------------+
       | Yes           | No
       v                v
+----------------+   +---------------------------+
| Return str     |   | Reverse substring(1..n-1) |
+----------------+   +---------------------------+
                           |
                           v
                  +---------------------------+
                  | Append first char to end  |
                  +---------------------------+
                           |
                           v
                       +--------+
                       |  End   |
                       +--------+


```

---

**4. Number Reversal**
```
+-------------------------------+
|             Start             |
+-------------------------------+
              |
              v
+-------------------------------+
|        Input number n         |
+-------------------------------+
              |
              v
+-------------------------------+
|           Is n == 0 ?         |
+-------------------------------+
       | Yes           | No
       v                v
+----------------+   +---------------------------------------+
| Return 0       |   | last_digit = n % 10                   |
+----------------+   | rev = reverse(n / 10)                 |
                     | reversed_number = rev*10 + last_digit |
                     +---------------------------------------+
                           |
                           v
                       +--------+
                       |  End   |
                       +--------+
```

---


## **Differences Between Recursion and Iteration**

| Feature               | Recursion                                         | Iteration                                      |
|-----------------------|---------------------------------------------------|------------------------------------------------|
| **Memory Usage**      | Higher; uses call stack for each function call    | Lower; uses fixed loop variables               |
| **Time Complexity**   | Can be same or slightly higher due to overhead    | Usually lower; no overhead of function calls   |
| **Understandability** | Easier for problems naturally recursive           | Can be complex for nested/hierarchical logic   |
| **Termination**       | Requires base case to stop                        | Requires loop condition to stop                |
| **Use Case**          | Trees, graphs, factorial, Fibonacci, backtracking | Simple counting, array processing, iterations  |

---

## **Industrial Applications of Recursion**
- **Algorithm Design:** Sorting algorithms (QuickSort, MergeSort)  
- **Data Structures:** Traversal of trees and graphs  
- **Parsing:** Compilers, expression evaluation, interpreters  
- **Artificial Intelligence:** Backtracking, recursive search algorithms  
- **Computer Graphics:** Fractal generation  
- **Networking:** Recursive DNS lookups  

### **Companies Using Recursion**
- Software and tech giants: Google, Microsoft, IBM, Amazon (for algorithms & AI)  
- Game development companies: Unity, Epic Games (recursive graphics, AI)  
- Compiler & language design companies: Intel, Oracle, JetBrains  

---



