# Trace Table

## BST Insertion Trace

| Step | Key Inserted | Action |
|------|--------------|--------|
| 1 | A102 | Root |
| 2 | A25 | Right of A102 |
| 3 | A7 | Right of A25 |
| 4 | B100 | Right of A7 |
| 5 | B12 | Right of B100 |
| 6 | A120 | Left of A25 |
| 7 | B3 | Right of B12 |
| 8 | A45 | Left of B100 |

## BST Search Trace

### A7

| Comparison | Node | Result |
|------------|------|--------|
| 1 | A102 | A7 > A102 |
| 2 | A25 | A7 > A25 |
| 3 | A7 | Found |

BST comparisons = 3

### B12

| Comparison | Node | Result |
|------------|------|--------|
| 1 | A102 | B12 > A102 |
| 2 | A25 | B12 > A25 |
| 3 | A7 | B12 > A7 |
| 4 | B100 | B12 > B100 |
| 5 | B12 | Found |

BST comparisons = 5

### A120

| Comparison | Node | Result |
|------------|------|--------|
| 1 | A102 | A120 > A102 |
| 2 | A25 | A120 < A25 |
| 3 | A120 | Found |

BST comparisons = 3

### B3

| Comparison | Node | Result |
|------------|------|--------|
| 1 | A102 | B3 > A102 |
| 2 | A25 | B3 > A25 |
| 3 | A7 | B3 > A7 |
| 4 | B100 | B3 > B100 |
| 5 | B12 | B3 > B12 |
| 6 | B3 | Found |

BST comparisons = 6
