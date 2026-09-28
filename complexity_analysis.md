# Complexity Analysis

## BST Search

For a balanced Binary Search Tree, the time complexity is O(log n).

For a worst-case unbalanced BST, the time complexity becomes O(n).

Space complexity is O(n).

## Linear Search

Best Case: O(1)

Average Case: O(n)

Worst Case: O(n)

Space Complexity: O(1)

## Complexity Comparison

| Algorithm | Best Case | Average Case | Worst Case | Space |
|-----------|-----------|--------------|------------|-------|
| BST Search | O(1) | O(log n) | O(n) | O(n) |
| Linear Search | O(1) | O(n) | O(n) | O(1) |

## Analysis of the Given BST

The given insertion order produces an unbalanced BST with height 5.

Therefore, some searches require more comparisons than a balanced BST.

Insertion order has an important effect on BST performance. A balanced
insertion order produces a smaller height, while an unfavourable order
can produce a highly unbalanced tree.

Key length does not change the number of nodes in the BST, but comparing
longer strings may require more character comparisons.

For a growing database, maintaining a balanced BST or another efficient
indexed search structure helps maintain faster searches.
