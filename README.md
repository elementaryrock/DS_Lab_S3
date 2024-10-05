## 1. Polynomial Representation
A simple C program to represent and sort polynomial expressions.
- Stores polynomials using array of structures
- Sorts terms by exponents
- Displays polynomial in standard form (ax^n + bx^m + ...)

<div align="center">
  <p align="center">
    <img title="Polynomial" alt="Polynomial 1" src="/images/polynomial_2.png" width="300" style="display: inline-block;">
    <img title="Polynomial" alt="Polynomial 2" src="/images/polynomial_1.svg" width="150" style="display: inline-block;">
  </p>
</div>
<br>
Example

```
Input:
Number of terms: 3
Coefficients and exponents: 2 3 4 1 3 2
```
```
Output:
2x^3 + 3x^2 + 4x^1
```
## 2. Sparse Matrix Representation
- The code takes an input matrix of arbitrary size and identifies non-zero elements.
- It then creates a new matrix (effective matrix) that stores only the non-zero elements along with their row and column indices. This is more efficient for sparse matrices with many zero elements.

<img title="Sparse" alt="Sparse 1" src="/images/Sparse_1.svg" style="display: inline-block;">
