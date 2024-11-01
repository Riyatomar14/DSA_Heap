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

#### time complexity for inertion ,deletion and heapify algo. in heap is o(log n). 

## HEAPIFY ALGORITHM(place the node on its correct position) 
In heapify algorithm we have given array , then we have to convert that array into heap.As we know that heap is a CBT(complete binary tree).
### NOTE:we don't have to check the leaf node as it is a already a heap. so, for that we have one result to find the leaf node in a heap:
# (n/2+1)-->n th index
#### by this we have to process only the left node (1 --> n/2) to place it in correct position as we save time by not checking the leaf nodes in heap. 
