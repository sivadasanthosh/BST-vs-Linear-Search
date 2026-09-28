# BST Search vs Linear Search Comparison

## Search Comparison

| Search Key | BST Comparisons | Linear Search Comparisons |
|------------|-----------------|---------------------------|
| A7 | 3 | 3 |
| B12 | 5 | 5 |
| A120 | 3 | 6 |
| B3 | 6 | 7 |

## Performance Comparison

| Feature | BST Search | Linear Search |
|---------|------------|---------------|
| Data Structure | Binary Search Tree | Array |
| Best Case | O(1) | O(1) |
| Average Case | O(log n) | O(n) |
| Worst Case | O(n) | O(n) |
| Space Complexity | O(n) | O(1) |
| Searching Method | Tree traversal | Sequential checking |
| Effect of large data | Efficient when balanced | More comparisons as data grows |

## Observation

For the selected search keys, BST search requires fewer comparisons for
A120 and B3 compared with Linear Search.

However, the given BST is unbalanced because of the insertion order.
Therefore, its performance is not always O(log n).

A balanced BST can provide efficient searching for a growing database.
