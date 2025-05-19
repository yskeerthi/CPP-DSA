
## 🌳 **TREES IN DSA: COMPLETE OVERVIEW**

---

### 📌 **1. INTRODUCTION TO TREES**

* A **tree** is a **non-linear hierarchical data structure**.
* It consists of **nodes** connected by **edges**.
* **Root**: The topmost node.
* **Leaf**: A node with no children.
* **Parent/Child**: The direct relationship between nodes.
* **Subtree**: A tree formed by a node and its descendants.
* Trees are **acyclic** and **connected** graphs.

---

### 📐 **2. BASIC TERMINOLOGY**

| Term         | Description                                  |
| ------------ | -------------------------------------------- |
| **Node**     | A fundamental part of a tree containing data |
| **Edge**     | A link between two nodes                     |
| **Root**     | The top node (entry point)                   |
| **Parent**   | Node with children                           |
| **Child**    | Node derived from a parent                   |
| **Leaf**     | Node without children                        |
| **Siblings** | Nodes sharing the same parent                |
| **Height**   | Longest path from root to a leaf             |
| **Depth**    | Distance from root to a node                 |
| **Degree**   | Number of children a node has                |
| **Level**    | The generation of a node in a tree           |

---

### 🌲 **3. TYPES OF TREES**

#### A. **General Trees**

* No restriction on number of children.
* Used in generic hierarchies.

---

#### B. **Binary Trees**

* Each node has **at most 2 children**.
* Common base for many tree variations.

##### Types of Binary Trees:

| Type                     | Description                                                       |
| ------------------------ | ----------------------------------------------------------------- |
| **Full Binary Tree**     | Every node has 0 or 2 children                                    |
| **Perfect Binary Tree**  | All internal nodes have 2 children & all leaves are at same level |
| **Complete Binary Tree** | All levels filled except possibly the last (filled left to right) |
| **Skewed Tree**          | All nodes have only left or right child (left/right skewed)       |
| **Balanced Binary Tree** | Height of left and right subtrees differ by at most 1             |

---

#### C. **Binary Search Tree (BST)**

* Left child < Parent < Right child.
* Efficient for **search, insert, delete** operations: **O(log n)** (average case).

##### BST Operations:

* Insert
* Search
* Delete (3 cases: no child, 1 child, 2 children)

---

#### D. **AVL Tree (Adelson-Velsky and Landis Tree)**

* **Self-balancing BST**
* Balance factor of each node = height(left) - height(right) ∈ {-1, 0, 1}
* **Rotations** (LL, RR, LR, RL) used to maintain balance

---

#### E. **Red-Black Tree**

* Self-balancing BST with **color rules**:

  * Root is black.
  * Red node can't have red child.
  * Every path from node to descendant leaf has same number of black nodes.
* Used in **Linux kernel**, **map/set in C++ STL**

---

#### F. **Segment Tree**

* For **range queries** and **updates** (e.g., sum, min, max in range).
* Time complexity:

  * Build: O(n)
  * Query/Update: O(log n)

---

#### G. **Fenwick Tree / Binary Indexed Tree (BIT)**

* Used for **prefix sum** and **range queries**.
* Efficient and compact, less memory than Segment Tree.
* Time complexity:

  * Update/Query: O(log n)

---

#### H. **Trie (Prefix Tree)**

* For **string-based data**.
* Used in autocomplete, spell checking.
* Nodes store **characters**, paths represent **words**.
* Operations: insert, search, delete → O(L), where L = length of word.

---

#### I. **Heap Tree**

* **Binary Heap**: Complete binary tree with Heap Property:

  * **Max Heap**: Parent ≥ children
  * **Min Heap**: Parent ≤ children
* Used in **Priority Queues**, **Heap Sort**

---

#### J. **B-Tree**

* Used in **databases & file systems**.
* Generalization of BST: Each node has more than two children.
* Balanced, high fan-out (less height).

---

#### K. **B+ Tree**

* Like B-Tree, but only **leaf nodes contain data**.
* Internal nodes only store keys.
* Used in **DBMS indexing**.

---

#### L. **N-ary Tree**

* Each node has **at most N children**.
* General form of a tree with more branching.

---

#### M. **Suffix Tree**

* For efficient **string pattern matching**.
* Built from all suffixes of a string.
* Used in bioinformatics, compression, etc.

---

### ⚙️ **4. TREE TRAVERSALS**

#### A. **Depth-First Traversal**

* **Inorder (LNR)**: Left → Node → Right
* **Preorder (NLR)**: Node → Left → Right
* **Postorder (LRN)**: Left → Right → Node

#### B. **Breadth-First Traversal**

* Level Order Traversal (uses Queue)

---

### 🧠 **5. APPLICATIONS OF TREES**

| Tree Type            | Application                                    |
| -------------------- | ---------------------------------------------- |
| Binary Tree          | Expression evaluation, hierarchical structures |
| BST                  | Search operations                              |
| AVL / Red-Black Tree | Self-balancing BSTs                            |
| Segment Tree         | Range queries (min/max/sum)                    |
| Trie                 | Dictionary, spell check                        |
| Heap                 | Priority Queue, scheduling                     |
| B-Tree / B+ Tree     | Databases, indexing                            |
| N-ary Tree           | Game trees, hierarchical models                |
| Suffix Tree          | Pattern matching, DNA sequencing               |

---

### 🔍 **6. ADVANCED TREE CONCEPTS**

* **Lowest Common Ancestor (LCA)**:

  * Use Binary Lifting or Euler Tour + Segment Tree
* **Diameter of Tree**:

  * Longest path between two nodes
* **Tree DP**:

  * Dynamic programming on trees (e.g., longest path, subtree sums)
* **Centroid Decomposition**:

  * Divide-and-conquer on trees
* **Heavy-Light Decomposition**:

  * Optimize queries on paths

---

### 🧪 **7. PRACTICE QUESTIONS**

1. Check if Binary Tree is Balanced
2. Construct Tree from Inorder and Preorder/Postorder
3. Find LCA of two nodes
4. Serialize/Deserialize Binary Tree
5. Mirror of Binary Tree
6. Count number of nodes
7. Vertical Order Traversal
8. Max Path Sum in Binary Tree
9. Check if BST is valid
10. BST to DLL (Doubly Linked List)

---

### 💻 **8. TIME & SPACE COMPLEXITIES**

| Operation | BST      | AVL Tree | Red-Black | Trie   | Segment Tree | Heap     |
| --------- | -------- | -------- | --------- | ------ | ------------ | -------- |
| Insert    | O(log n) | O(log n) | O(log n)  | O(L)   | O(log n)     | O(log n) |
| Search    | O(log n) | O(log n) | O(log n)  | O(L)   | O(log n)     | N/A      |
| Delete    | O(log n) | O(log n) | O(log n)  | O(L)   | O(log n)     | O(log n) |
| Space     | O(n)     | O(n)     | O(n)      | O(n·L) | O(n)         | O(n)     |

---

## 🧾 Summary: Tree Types at a Glance

| Type            | Description         | Use Case           |
| --------------- | ------------------- | ------------------ |
| Binary Tree     | At most 2 children  | Expression trees   |
| BST             | Ordered binary tree | Fast lookup        |
| AVL / Red-Black | Self-balancing BSTs | Map, Set           |
| Trie            | Prefix tree         | Auto-complete      |
| Heap            | Priority queue      | Scheduling         |
| Segment Tree    | Range queries       | Competitive coding |
| B/B+ Tree       | Multi-way trees     | Database indexing  |

---

Would you like a **downloadable PDF or Markdown notes** for this complete overview? I can generate it for you.
