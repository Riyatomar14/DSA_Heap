# DSA_Heap

# A heap- it is basically a complete binary tree(CBT).

-> A complete binary tree is a type of binary tree where all levels are completely filled, except for possibly the last level:
1. Complete levels: All levels are completely filled, except for possibly the last level.
2. Last level: The last level is filled from left to right.

### A heap is CBT that comes up with a HEAP ORDER PROPERTY(MAX HEAP and MIN HEAP).
-Max heap-The root node's key is the largest of all the keys in its descendants, and this property is true for all subtrees. The parent node's key is greater than or equal to the child node's key.
-Min heap-The root node's key is the smallest of all the keys in its descendants, and this property is true for all subtrees. The parent node's key is less than or equal to the child node's key.

node- i th index
##### left child - (2*i) index
##### right child - (2*i + 1) index
##### parent node - (i/2) index
