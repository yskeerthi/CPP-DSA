
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

Absolutely broo 🤝 — here’s a **complete, well-structured, word-document-ready explanation** of **Trees** in **C++**, covering everything from **Basics to Advanced Topics (only easy/basic level)**.

---

# 🌲 **TREES in Data Structures (C++) – From Basics to Advanced (Easy-Level Only)**

---

## 📘 **1. Introduction to Trees**

### ✅ **Definition:**

A **tree** is a **non-linear**, **hierarchical** data structure consisting of **nodes** connected by **edges**. It starts with a **root node** and branches off into **child nodes**.

* **Each node** contains:
  ➤ A **value/data**
  ➤ Pointers to its **children**

* **Root Node**: The top-most node.

* **Leaf Node**: Nodes with no children.

### ✅ **Tree Terminologies:**

| Term        | Meaning                                         |
| ----------- | ----------------------------------------------- |
| **Root**    | First node of the tree                          |
| **Parent**  | A node that has one or more child nodes         |
| **Child**   | A node that descends from another node          |
| **Leaf**    | A node with no children                         |
| **Edge**    | Connection between parent and child             |
| **Height**  | Length of the longest path to a leaf            |
| **Depth**   | Distance from root to that node                 |
| **Subtree** | A tree consisting of a node and its descendants |

---

## 📘 **2. Types of Trees**

### 🌿 **Binary Tree**

Each node has **at most 2 children**: `left` and `right`.

```cpp
struct Node {
    int data;
    Node* left;
    Node* right;
};
```

### 🌿 **Binary Search Tree (BST)**

A **Binary Tree** where:

* Left subtree nodes ≤ Root
* Right subtree nodes > Root

### 🌿 **Full Binary Tree**

Every node has **0 or 2 children**.

### 🌿 **Complete Binary Tree**

All levels are filled **except possibly the last**, and nodes are filled **left to right**.

### 🌿 **Perfect Binary Tree**

All internal nodes have 2 children, and **all leaves are at the same level**.

---
***tree building***
```
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* buildTree() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);

    return root;
}

int main() {
    Node* root = buildTree();
    // Tree is built and ready to use
    return 0;
}

```
## 📘 **3. Tree Traversals**

### 🔁 **1. Inorder Traversal (Left → Root → Right)**

```cpp
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
```

### 🔁 **2. Preorder Traversal (Root → Left → Right)**

```cpp
void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
```

### 🔁 **3. Postorder Traversal (Left → Right → Root)**

```cpp
void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
```

### 🔁 **4. Level Order Traversal (Breadth First)**

Use **queue**.

```cpp
void levelOrder(Node* root) {
    if (root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
}
```

> 🔥 **Trick to Remember**:

* **Inorder** = Left - Root - Right
* **Preorder** = Root - Left - Right
* **Postorder** = Left - Right - Root
* **Level Order** = Top to Bottom, Left to Right

---

## 📘 **4. Binary Search Tree Operations**

### 🧩 **Insert a Node in BST**

```cpp
Node* insert(Node* root, int key) {
    if (root == NULL) return new Node(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);
    return root;
}
```

### 🔍 **Search in BST**

```cpp
bool search(Node* root, int key) {
    if (root == NULL) return false;
    if (root->data == key) return true;
    if (key < root->data) return search(root->left, key);
    return search(root->right, key);
}
```

---

## 📘 **5. Easy-Level Tree Problems (With Explanations)**

---

### ✅ **Q1. Count the number of nodes in a Binary Tree**

#### ➤ **Approach**:

* Traverse all nodes and count them recursively.

```cpp
int countNodes(Node* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}
```

#### 💡 **Time Complexity**: **O(n)**

> Because every node is visited once.

---

### ✅ **Q2. Find Height of a Tree**

#### ➤ **Approach**:

* Height = 1 + max(left height, right height)

```cpp
int height(Node* root) {
    if (root == NULL) return 0;
    return 1 + max(height(root->left), height(root->right));
}
```

#### 💡 **Time Complexity**: **O(n)**

---

### ✅ **Q3. Print all leaf nodes**

```cpp
void printLeaves(Node* root) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL)
        cout << root->data << " ";
    printLeaves(root->left);
    printLeaves(root->right);
}
```

#### 💡 **Time Complexity**: **O(n)**

---

### ✅ **Q4. Mirror of Binary Tree**

```cpp
void mirror(Node* root) {
    if (root == NULL) return;
    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
}
```

#### 💡 **Time Complexity**: **O(n)**

---

### ✅ **Q5. Sum of all nodes**

```cpp
int sum(Node* root) {
    if (root == NULL) return 0;
    return root->data + sum(root->left) + sum(root->right);
}
```

#### 💡 **Time Complexity**: **O(n)**

---

## 🧠 **Tricks to Remember Tree Concepts**

| Trick                                                   | Explanation                      |
| ------------------------------------------------------- | -------------------------------- |
| **ROOT** starts the structure                           | Everything starts from here      |
| **Traverse** means visit all nodes in some order        | Use recursion or queue           |
| **BST Insertion** = Go left if smaller, right if bigger | Always                           |
| **Height = max(L, R) + 1**                              | Recursively compare left & right |
| **Leaf Node = left == NULL and right == NULL**          | No children                      |

---

## 📘 **6. Summary Table of Key Tree Topics (Basics)**

| Topic                    | Description                     | Time Complexity           |
| ------------------------ | ------------------------------- | ------------------------- |
| Traversals (In/Pre/Post) | Visit all nodes in order        | O(n)                      |
| Level Order              | BFS using Queue                 | O(n)                      |
| Count Nodes              | Count recursively               | O(n)                      |
| Tree Height              | Max depth from root             | O(n)                      |
| Leaf Nodes               | Check both left and right NULL  | O(n)                      |
| Tree Mirror              | Swap left and right recursively | O(n)                      |
| BST Insertion            | Recursive insert                | O(log n) avg / O(n) worst |
| BST Search               | Recursive search                | O(log n) avg / O(n) worst |

---

## 📘 **7. Extra Practice Problems (All Easy)**

| Problem                          | Hint                            |
| -------------------------------- | ------------------------------- |
| Print nodes at k-th level        | Use level decrement recursively |
| Check if two trees are identical | Recursively compare both trees  |
| Left View of Binary Tree         | Track max level seen so far     |
| Right View of Binary Tree        | Similar to left view            |
| Count leaf nodes                 | Base case: both child NULL      |
| Find min & max in BST            | Go to leftmost & rightmost      |
| Check if BST is valid            | Check constraints at every node |
| Diameter of Tree (longest path)  | Track height of left & right    |

---

## 🧩 **Simple C++ Template for Tree Problems**

```cpp
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
```
Of course broo 💥 — here’s a complete and organized list of **ALL BASIC TREE QUESTIONS** with their **question names** and **direct URLs** from trusted platforms like **LeetCode, GeeksforGeeks, and InterviewBit** so you can directly practice and bookmark!

---

# 🌳 **All Basic Tree Problems (with URLs)**

---

## 🔹 **1. Tree Traversals**

| No. | Question Name                 | Link                                                                              |
| --- | ----------------------------- | --------------------------------------------------------------------------------- |
| 1️⃣ | Inorder Traversal             | [LeetCode #94](https://leetcode.com/problems/binary-tree-inorder-traversal/)      |
| 2️⃣ | Preorder Traversal            | [LeetCode #144](https://leetcode.com/problems/binary-tree-preorder-traversal/)    |
| 3️⃣ | Postorder Traversal           | [LeetCode #145](https://leetcode.com/problems/binary-tree-postorder-traversal/)   |
| 4️⃣ | Level Order Traversal         | [LeetCode #102](https://leetcode.com/problems/binary-tree-level-order-traversal/) |
| 5️⃣ | Reverse Level Order Traversal | [GFG](https://www.geeksforgeeks.org/reverse-level-order-traversal/)               |

---

## 🔹 **2. Tree Size & Structure**

| No.    | Question Name                    | Link                                                                                                  |
| ------ | -------------------------------- | ----------------------------------------------------------------------------------------------------- |
| 6️⃣    | Count Nodes in Binary Tree       | [LeetCode #222](https://leetcode.com/problems/count-complete-tree-nodes/)                             |
| 7️⃣    | Count Leaf Nodes                 | [GFG](https://www.geeksforgeeks.org/count-leaves-in-binary-tree/)                                     |
| 8️⃣    | Count Non-Leaf Nodes             | [GFG](https://www.geeksforgeeks.org/count-non-leaf-nodes-binary-tree/)                                |
| 9️⃣    | Height of Binary Tree            | [GFG](https://www.geeksforgeeks.org/write-a-c-program-to-find-the-maximum-depth-or-height-of-a-tree/) |
| 🔟     | Print All Leaf Nodes             | [GFG](https://www.geeksforgeeks.org/print-leaf-nodes-left-right-binary-tree/)                         |
| 1️⃣1️⃣ | Sum of All Nodes in Tree         | [GFG](https://www.geeksforgeeks.org/sum-nodes-binary-tree/)                                           |
| 1️⃣2️⃣ | Check if Two Trees are Identical | [LeetCode #100](https://leetcode.com/problems/same-tree/)                                             |

---

## 🔹 **3. Tree Views**

| No.    | Question Name              | Link                                                                        |
| ------ | -------------------------- | --------------------------------------------------------------------------- |
| 1️⃣3️⃣ | Left View of Binary Tree   | [GFG](https://www.geeksforgeeks.org/left-view-binary-tree/)                 |
| 1️⃣4️⃣ | Right View of Binary Tree  | [LeetCode #199](https://leetcode.com/problems/binary-tree-right-side-view/) |
| 1️⃣5️⃣ | Top View of Binary Tree    | [GFG](https://www.geeksforgeeks.org/top-view-of-a-binary-tree/)             |
| 1️⃣6️⃣ | Bottom View of Binary Tree | [GFG](https://www.geeksforgeeks.org/bottom-view-binary-tree/)               |

---

## 🔹 **4. BST-Specific Basics**

| No.    | Question Name              | Link                                                                                   |
| ------ | -------------------------- | -------------------------------------------------------------------------------------- |
| 1️⃣7️⃣ | Insert into BST            | [LeetCode #701](https://leetcode.com/problems/insert-into-a-binary-search-tree/)       |
| 1️⃣8️⃣ | Search in BST              | [LeetCode #700](https://leetcode.com/problems/search-in-a-binary-search-tree/)         |
| 1️⃣9️⃣ | Minimum and Maximum in BST | [GFG](https://www.geeksforgeeks.org/find-the-minimum-element-in-a-binary-search-tree/) |
| 2️⃣0️⃣ | Validate BST               | [LeetCode #98](https://leetcode.com/problems/validate-binary-search-tree/)             |

---

## 🔹 **5. Level-Based Problems**

| No.    | Question Name             | Link                                                                      |
| ------ | ------------------------- | ------------------------------------------------------------------------- |
| 2️⃣1️⃣ | Print Nodes at K-th Level | [GFG](https://www.geeksforgeeks.org/print-nodes-at-k-distance-from-root/) |
| 2️⃣2️⃣ | Root to Leaf Paths        | [LeetCode #257](https://leetcode.com/problems/binary-tree-paths/)         |

---

## 🔹 **6. Tree Conversion & Mirror**

| No.    | Question Name                  | Link                                                                                  |
| ------ | ------------------------------ | ------------------------------------------------------------------------------------- |
| 2️⃣3️⃣ | Mirror of Binary Tree          | [GFG](https://www.geeksforgeeks.org/create-a-mirror-tree-from-the-given-binary-tree/) |
| 2️⃣4️⃣ | Convert to Sum Tree (Optional) | [GFG](https://www.geeksforgeeks.org/convert-a-given-tree-to-sum-tree/)                |

---

## 🔹 **7. Miscellaneous Easy**

| No.    | Question Name                                      | Link                                                                                    |
| ------ | -------------------------------------------------- | --------------------------------------------------------------------------------------- |
| 2️⃣5️⃣ | Diameter of Binary Tree (Easy Ver)                 | [LeetCode #543](https://leetcode.com/problems/diameter-of-binary-tree/)                 |
| 2️⃣6️⃣ | Check if Tree is Balanced                          | [LeetCode #110](https://leetcode.com/problems/balanced-binary-tree/)                    |
| 2️⃣7️⃣ | Lowest Common Ancestor in Binary Tree (Conceptual) | [LeetCode #236](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) |

---

Absolutely brooo 🌟! Below is a **power-packed** section you can **directly paste into your Word doc**, covering:

---

# 🚀 **Frequently Asked Basic Tree Interview Questions**

> 👨‍💻 Commonly Asked in Interviews @ Google, Amazon, Microsoft, Walmart, Infosys, TCS, etc.

---

## 📌 **Common Patterns & Tips for Interviews**

✅ Most tree interview questions are based on **traversals**, **recursion**, and **basic structural properties**.

✅ Use **recursion** wherever you have to:

* Visit every node.
* Go left and right.
* Collect or compute something.

✅ Use **queue** for **level-order** and **view problems**.

---

## 📘 **Formulas and Concepts You Must Know**

| Topic                           | Formula / Rule                                            |
| ------------------------------- | --------------------------------------------------------- |
| Height of a Tree                | `height = 1 + max(left height, right height)`             |
| Number of Nodes in Perfect Tree | `nodes = 2^h - 1` (where `h` = height)                    |
| Number of Leaf Nodes            | `L = N + 1` (in Full Binary Tree with `N` internal nodes) |
| Max Nodes in Tree of height h   | `2^h - 1` (Perfect Binary Tree)                           |
| Min height of Complete Tree     | `floor(log₂(n)) + 1`                                      |
| Level of Node                   | Level starts from 1 (root) or 0 (depth)                   |

---

## 📘 **Frequently Asked Basic Tree Interview Questions**

---

### ✅ 1. **Inorder/Preorder/Postorder Traversal**

📍 *Asked in*: Infosys, Capgemini, Wipro
➡ Output a list using recursion.

---

### ✅ 2. **Level Order Traversal**

📍 *Asked in*: TCS, HCL
➡ Use a queue to print level-wise.

---

### ✅ 3. **Find Height of a Binary Tree**

📍 *Asked in*: Amazon
➡ Use recursive formula: `1 + max(L, R)`

---

### ✅ 4. **Count Total Nodes / Leaf Nodes**

📍 *Asked in*: Cognizant, Zoho
➡ Use base case and recurse left & right.

---

### ✅ 5. **Check if Two Trees are Identical**

📍 *Asked in*: Accenture
➡ Compare `root1->data == root2->data` and recurse.

---

### ✅ 6. **Find the Left View / Right View**

📍 *Asked in*: Tech Mahindra, L\&T
➡ Use level-order and track first/last node at each level.

---

### ✅ 7. **Insert & Search in BST**

📍 *Asked in*: Walmart, ServiceNow
➡ Based on comparing keys and traversing left/right.

---

### ✅ 8. **Validate if Tree is BST**

📍 *Asked in*: Google (easy rounds)
➡ Use min/max constraints at each node.

---

### ✅ 9. **Print Nodes at K-th Level**

📍 *Asked in*: Capgemini
➡ Use recursion, decrease K at every level.

---

### ✅ 10. **Root-to-Leaf Paths**

📍 *Asked in*: Infosys
➡ Use recursion and backtracking to build paths.

---

### ✅ 11. **Mirror a Tree**

📍 *Asked in*: Mindtree
➡ Swap left and right recursively.

---

### ✅ 12. **Diameter of Tree (Easy Version)**

📍 *Asked in*: Persistent Systems
➡ `diameter = left height + right height + 1`

---

### ✅ 13. **Check if Binary Tree is Balanced**

📍 *Asked in*: Amazon
➡ Height difference of subtrees ≤ 1 at every node.

---

### ✅ 14. **Print Leaf Nodes**

📍 *Asked in*: TCS
➡ Base case: `left == NULL && right == NULL`

---

## 🔥 **Smart Notes & Tricks**

| Concept         | Shortcut to Remember          |
| --------------- | ----------------------------- |
| Traversals      | "L R R" – In, Pre, Post       |
| Height vs Depth | Height = longest path to leaf |
| BST Insertion   | Go Left (if <), Right (if >)  |
| View Questions  | Use queue & level order       |
| Balanced Tree   | Use `abs(L - R) <= 1`         |

---

## 🎯 **Last-Minute Practice (Lightning Fast)**

| Topic                | URL                                                                     |
| -------------------- | ----------------------------------------------------------------------- |
| GFG 50 Tree Problems | [Visit](https://www.geeksforgeeks.org/binary-tree-data-structure/)      |
| LeetCode Tree Easy   | [Visit](https://leetcode.com/tag/tree/)                                 |
| InterviewBit Trees   | [Visit](https://www.interviewbit.com/courses/programming/topics/trees/) |

---

## 🧠 **Pro Tip**

> 👉 **Draw the tree** and dry-run recursion for 2-3 levels.
> 👉 Use **function call stack visualization** to debug recursion-based questions.

---





