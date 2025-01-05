# Algorithm Complexity Notes

## Time Complexity

Time taken is never equal to time complexity - it can be different for different machines with diff processors. Therefore the rate at which the time taken increases with respect to the input size is what is time complexity.

### Three Important Rules:
1. Time complexity to be computed in the worst case scenario only
2. Avoid constants
3. Avoid lower values

### Example 1:
```cpp
for (i=0; i<N; i++) {
    cout<<"Raj";
}
```

This loop will run/iterate N times, and with each run/iterations 3 steps/things are done:
1. Checking if `i<N`
2. Doing all the codes inside the loop after passing `i<N` check
3. Doing `i++` increment after all the codes are implemented

Therefore the time complexity is: `O(N x 3)`

### Example 2:
Given: `O(4N^3 + 3N^2 + 8)`  
Input size: `N = 10^5`

Total number of steps done by the machine:
~ 4x10^15 + 3x10^10 + 8

> These constants have very little significance when input size is large, and same idea applies to logic of avoiding lower values

### Notations:
- **Big-Oh (O)**: Upper bound of the input size
- **Theta (θ)**: Average bound of the input size
- **Omega (Ω)**: Lower bound of the input size

## Space Complexity

Space complexity = Space taken to solve the problem (auxilary space) + input space

> We don't express this in mb, kb and all that.

### Example:
Take `a` and `b` as input and calculate sum:

```cpp
c = a + b  // Output c as sum
```

Here:
- `c` is auxilary space
- `a` and `b` are input space

Space complexity: `O(3)`

### Important Note:
> In interview never do anything to the input variable, unless the interviewer says ok you can tamper with the input variable.

Example of what NOT to do:
```cpp
b = a + b  // Don't modify input variables
```
This is terrible coding practice especially in interviews.