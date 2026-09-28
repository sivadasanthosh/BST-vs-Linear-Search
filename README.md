# BST vs Linear Search

## Question 11 – Government Database

A government database stores the following identification numbers:

A102, A25, A7, B100, B12, A120, B3, A45

The objective is to implement a Binary Search Tree (BST), display its
inorder traversal, compare BST Search with Linear Search, and analyse
the effect of insertion order and key length on search performance.

## 1. BST Implementation

The identification numbers are inserted into a Binary Search Tree using
the given insertion order.

### Inorder Traversal

A102 A120 A25 A45 A7 B100 B12 B3

### BST Height

The height of the resulting BST is 5.

The tree becomes unbalanced because of the given insertion order.

## 2. Search Comparison

The selected identification numbers are:

- A7
- B12
- A120
- B3

The number of comparisons made by BST Search and Linear Search is
recorded in the comparison table.

## 3. Effect of Insertion Order

Insertion order has a significant effect on the height of a BST.

If the elements are inserted in a suitable order, the tree can remain
balanced and searching can be performed efficiently.

If the elements are inserted in an unfavourable order, the tree can
become unbalanced. In the worst case, BST search can become O(n).

## 4. Effect of Key Length

The length of the identification key does not directly affect the
number of nodes or the theoretical BST complexity.

However, longer strings may require more character comparisons when
two keys are compared.

Therefore, both the tree structure and the length of the keys can
affect the practical execution time.

## 5. Complexity Analysis

### BST Search

Best Case: O(1)

Average Case: O(log n) for a balanced BST

Worst Case: O(n)

### Linear Search

Best Case: O(1)

Average Case: O(n)

Worst Case: O(n)

## 6. Suitable Approach for a Growing Database

For a growing database, maintaining a balanced BST can provide efficient
searching because its average search complexity is O(log n).

A linear search checks records sequentially and can require O(n)
comparisons.

Therefore, maintaining an efficient indexed search structure is useful
when the number of database records becomes large.

## 7. Conclusion

The experiment demonstrates the difference between BST Search and Linear
Search.

The BST organizes the identification numbers into a tree structure and
can reduce the number of comparisons when the tree is reasonably
balanced.

The experiment also shows that insertion order affects BST height and
search performance.

For a growing database, a balanced search tree or another efficient
indexing structure can be used to maintain faster searches.

## Files Included

- `bst_linear_search.c` – C source code
- `input.txt` – Input identification numbers
- `output.txt` – Program output
- `trace_table.md` – BST insertion and search trace
- `complexity_analysis.md` – Time and space complexity
- `comparison_table.md` – BST and Linear Search comparison
- `output_screenshot.png` – Program execution screenshot
