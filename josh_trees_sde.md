Absolutely, Chaaatuuuu! Here's your **GitHub-ready markdown documentation** for:

---

## ✅ **Question 1: Implement Red-Black Tree**

---

**📂 Topic:** Tree
**🔁 Repeated:** ❌

---

### 🔸 Problem Description:

Implement a **Red-Black Tree (RBT)** — a type of self-balancing binary search tree where each node stores an extra bit (color: red or black) to ensure the tree remains approximately balanced, which guarantees `O(log n)` time for insertion, deletion, and lookup operations.

---

### 🔹 Intuition:

Red-Black Trees are an efficient way to keep the BST height balanced. By applying **color rules** and **rotations**, we ensure that:

* No path is **more than twice as long** as any other (logarithmic height).
* A newly inserted node is **initially red**, and violations are fixed via **recoloring** and **rotations** during insertions or deletions.

---

### 🔸 Brute-Force Approach:

There is no true brute-force for this problem because the **RBT itself is the optimized version** of a BST that prevents degeneracy (linked list shape). The brute-force equivalent is a plain BST, but it leads to worst-case `O(n)` operations due to imbalance.

---

### ✅ Optimized Approach: Red-Black Tree Insertion Rules

1. Insert new node as a **BST** node, mark it **red**.
2. Fix any violations:

   * **Case 1:** Parent and uncle are red → Recolor.
   * **Case 2:** Parent is red and uncle is black → Rotation + Recolor.

---

### 🔧 C++ Code Snippet (Insert + Fix Violations)

```
enum Color { RED, BLACK };

struct Node {
    int data;
    bool color;
    Node *left, *right, *parent;

    Node(int data) {
        this->data = data;
        left = right = parent = nullptr;
        color = RED;
    }
};

class RedBlackTree {
    Node* root;

    void rotateLeft(Node* &root, Node* &pt) {
        Node* right_child = pt->right;
        pt->right = right_child->left;
        if (pt->right != nullptr)
            pt->right->parent = pt;
        right_child->parent = pt->parent;
        if (pt->parent == nullptr)
            root = right_child;
        else if (pt == pt->parent->left)
            pt->parent->left = right_child;
        else
            pt->parent->right = right_child;
        right_child->left = pt;
        pt->parent = right_child;
    }

    void rotateRight(Node* &root, Node* &pt) {
        Node* left_child = pt->left;
        pt->left = left_child->right;
        if (pt->left != nullptr)
            pt->left->parent = pt;
        left_child->parent = pt->parent;
        if (pt->parent == nullptr)
            root = left_child;
        else if (pt == pt->parent->left)
            pt->parent->left = left_child;
        else
            pt->parent->right = left_child;
        left_child->right = pt;
        pt->parent = left_child;
    }

    void fixViolation(Node* &root, Node* &pt) {
        Node* parent_pt = nullptr;
        Node* grand_parent_pt = nullptr;

        while ((pt != root) && (pt->color != BLACK) && 
               (pt->parent->color == RED)) {
            parent_pt = pt->parent;
            grand_parent_pt = pt->parent->parent;

            // Case A: Parent is left child
            if (parent_pt == grand_parent_pt->left) {
                Node* uncle_pt = grand_parent_pt->right;

                // Case 1: Uncle is RED → recolor
                if (uncle_pt != nullptr && uncle_pt->color == RED) {
                    grand_parent_pt->color = RED;
                    parent_pt->color = BLACK;
                    uncle_pt->color = BLACK;
                    pt = grand_parent_pt;
                } else {
                    // Case 2: pt is right → rotate left
                    if (pt == parent_pt->right) {
                        rotateLeft(root, parent_pt);
                        pt = parent_pt;
                        parent_pt = pt->parent;
                    }
                    // Case 3: pt is left → rotate right
                    rotateRight(root, grand_parent_pt);
                    std::swap(parent_pt->color, grand_parent_pt->color);
                    pt = parent_pt;
                }
            }

            // Case B: Parent is right child (mirror case)
            else {
                Node* uncle_pt = grand_parent_pt->left;

                if ((uncle_pt != nullptr) && (uncle_pt->color == RED)) {
                    grand_parent_pt->color = RED;
                    parent_pt->color = BLACK;
                    uncle_pt->color = BLACK;
                    pt = grand_parent_pt;
                } else {
                    if (pt == parent_pt->left) {
                        rotateRight(root, parent_pt);
                        pt = parent_pt;
                        parent_pt = pt->parent;
                    }
                    rotateLeft(root, grand_parent_pt);
                    std::swap(parent_pt->color, grand_parent_pt->color);
                    pt = parent_pt;
                }
            }
        }
        root->color = BLACK;
    }

public:
    RedBlackTree() { root = nullptr; }

    void insert(const int &data) {
        Node* pt = new Node(data);
        root = bstInsert(root, pt);
        fixViolation(root, pt);
    }

    Node* bstInsert(Node* root, Node* pt) {
        if (root == nullptr) return pt;
        if (pt->data < root->data) {
            root->left = bstInsert(root->left, pt);
            root->left->parent = root;
        } else if (pt->data > root->data) {
            root->right = bstInsert(root->right, pt);
            root->right->parent = root;
        }
        return root;
    }
};
```

---

### ⏱️ Time & Space Complexity:

| Operation     | Time Complexity | Space Complexity |
| ------------- | --------------- | ---------------- |
| Insertion     | O(log n)        | O(1)             |
| Deletion      | O(log n)        | O(1)             |
| Lookup/Search | O(log n)        | O(1)             |

---
Got it broo 💯 — no file, no GitHub markdown, just clean **normal format** like before. You already have 1 to 10. Here's the continuation:

---

## ✅ **Question 11: Re-shuffle Linked List**

**Topic:** Linked List
**Repeated:** ❌

### 🔸 Problem:

Rearrange the linked list in the form:
`L0 → Ln → L1 → Ln-1 → L2 → Ln-2 …`

---

### 🔹 Intuition:

* Use the fast and slow pointer method to find the middle.
* Reverse the second half.
* Merge the two halves.

---

### 🔸 Optimized Code (C++):

```cpp
void reorderList(ListNode* head) {
    if (!head || !head->next) return;

    ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* prev = nullptr, *curr = slow->next;
    slow->next = nullptr;

    while (curr) {
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    ListNode *first = head, *second = prev;
    while (second) {
        ListNode* tmp1 = first->next;
        ListNode* tmp2 = second->next;
        first->next = second;
        second->next = tmp1;
        first = tmp1;
        second = tmp2;
    }
}
```

⏱ Time: O(n)
💾 Space: O(1)

🧠 **Trick:** Split → Reverse → Merge

---

## ✅ **Question 12: Swap Alternate Nodes of Linked List**

**Topic:** Linked List
**Repeated:** ✅

### 🔸 Problem:

Swap every two adjacent nodes in a linked list.

---

### 🔹 Intuition:

Use recursion or iteration to swap adjacent pairs.

---

### 🔸 Optimized Code:

```cpp
ListNode* swapPairs(ListNode* head) {
    if (!head || !head->next) return head;
    ListNode* newHead = head->next;
    head->next = swapPairs(head->next->next);
    newHead->next = head;
    return newHead;
}
```

⏱ Time: O(n)
💾 Space: O(n) recursion / O(1) iterative

🧠 **Trick:** Don’t swap values, swap links.

---

## ✅ **Question 13: Odd-Even Segregation in Linked List**

**Topic:** Linked List
**Repeated:** ✅

### 🔸 Problem:

Move all even elements after all odd elements.

---

### 🔹 Intuition:

Create two separate lists: one for odds, one for evens. Merge them at the end.

---

### 🔸 Code:

```cpp
Node* segregate(Node* head) {
    Node *oddStart = nullptr, *oddEnd = nullptr;
    Node *evenStart = nullptr, *evenEnd = nullptr;

    Node* curr = head;
    while (curr) {
        int val = curr->data;
        if (val % 2 == 0) {
            if (!evenStart) evenStart = evenEnd = curr;
            else {
                evenEnd->next = curr;
                evenEnd = curr;
            }
        } else {
            if (!oddStart) oddStart = oddEnd = curr;
            else {
                oddEnd->next = curr;
                oddEnd = curr;
            }
        }
        curr = curr->next;
    }

    if (oddEnd) oddEnd->next = evenStart;
    if (evenEnd) evenEnd->next = nullptr;

    return oddStart ? oddStart : evenStart;
}
```

⏱ Time: O(n)
💾 Space: O(1)

🧠 **Trick:** Maintain two chains and join them.

---

## ✅ **Question 14: Wave Sort of Linked List**

**Topic:** Linked List
**Repeated:** ✅

### 🔸 Problem:

Rearrange the elements in wave form:
`a < b > c < d > e ...`

---

### 🔹 Intuition:

Compare adjacent nodes and swap if condition is not satisfied.

---

### 🔸 Code:

```cpp
void waveSort(Node* head) {
    bool flag = true;
    Node* curr = head;
    while (curr && curr->next) {
        if (flag) {
            if (curr->data > curr->next->data)
                swap(curr->data, curr->next->data);
        } else {
            if (curr->data < curr->next->data)
                swap(curr->data, curr->next->data);
        }
        flag = !flag;
        curr = curr->next;
    }
}
```

⏱ Time: O(n)
💾 Space: O(1)

🧠 **Trick:** Flip condition at every node.

---

## ✅ **Question 15: (A ∪ B) - C for Linked Lists**

**Topic:** Linked List
**Repeated:** ❌

### 🔸 Problem:

You are given three linked lists A, B and C. You have to return (A ∪ B) - C.

---

### 🔹 Intuition:

Use sets to store elements and perform union & difference.

---

### 🔸 Pseudocode:

* Traverse A & B, insert into set.
* Traverse C and remove from set.
* Create result list from the set.

⏱ Time: O(n)
💾 Space: O(n)

🧠 **Trick:** Use hashsets for quick set operations.

---

## ✅ **Question 16: Rotation Count of Sorted Array**

**Topic:** Array
**Repeated:** ❌

### 🔸 Problem:

Find how many times a sorted array has been rotated.

---

### 🔹 Intuition:

The index of the minimum element is the rotation count.

---

### 🔸 Binary Search Code:

```cpp
int countRotations(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        if (arr[low] <= arr[high]) return low;

        int mid = (low + high) / 2;
        int next = (mid + 1) % n;
        int prev = (mid + n - 1) % n;

        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) return mid;

        else if (arr[mid] <= arr[high])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return 0;
}
```

⏱ Time: O(log n)
💾 Space: O(1)

🧠 **Trick:** Binary search for the smallest element.

---

## ✅ **Question 17: Single Number Appearing 3 Times**

**Topic:** Array
**Repeated:** ❌

### 🔸 Problem:

Every number occurs 3 times except one. Find that unique number.

---

### 🔹 Intuition:

Use bitwise operators to track bits that appear once and twice.

---

### 🔸 Code:

```cpp
int singleNumber(vector<int>& nums) {
    int ones = 0, twos = 0;
    for (int x : nums) {
        ones = (ones ^ x) & ~twos;
        twos = (twos ^ x) & ~ones;
    }
    return ones;
}
```

⏱ Time: O(n)
💾 Space: O(1)

🧠 **Trick:** Use `ones` and `twos` as counters for bits.

---

## ✅ **Question 18: Kruskal's Algorithm**

**Topic:** Graph
**Repeated:** ❌

### 🔸 Problem:

Find the Minimum Spanning Tree (MST) using Kruskal's Algorithm.

---

### 🔹 Intuition:

Use Disjoint Set Union (DSU). Sort all edges and greedily add the lowest-cost edge if it doesn’t create a cycle.

---

### 🔸 Code Outline:

* Sort edges
* Use DSU to include non-cyclic edges

⏱ Time: O(E log E)
💾 Space: O(V)

🧠 **Trick:** MST = Pick smallest edges without forming a cycle.

---

## ✅ **Question 19: Symmetric Binary Tree Check**

**Topic:** Tree
**Repeated:** ❌

### 🔸 Problem:

Check whether a binary tree is symmetric.

---

### 🔹 Intuition:

Use recursion to check mirror condition on left and right subtrees.

---

### 🔸 Code:

```cpp
bool isMirror(TreeNode* t1, TreeNode* t2) {
    if (!t1 && !t2) return true;
    if (!t1 || !t2) return false;
    return (t1->val == t2->val) &&
           isMirror(t1->left, t2->right) &&
           isMirror(t1->right, t2->left);
}

bool isSymmetric(TreeNode* root) {
    return isMirror(root, root);
}
```

⏱ Time: O(n)
💾 Space: O(h)

🧠 **Trick:** Left of left = Right of right.

---

## ✅ **Question 20: Split BST on Given Node**

**Topic:** Tree
**Repeated:** ❌

### 🔸 Problem:

Split a BST into two trees based on a given value.

---

### 🔹 Intuition:

Use recursion to split left and right subtrees accordingly.

---

### 🔸 Code:

```cpp
vector<TreeNode*> splitBST(TreeNode* root, int V) {
    if (!root) return {nullptr, nullptr};

    if (root->val <= V) {
        auto splitted = splitBST(root->right, V);
        root->right = splitted[0];
        return {root, splitted[1]};
    } else {
        auto splitted = splitBST(root->left, V);
        root->left = splitted[1];
        return {splitted[0], root};
    }
}
```

⏱ Time: O(h)
💾 Space: O(h)

🧠 **Trick:** Recursively divide based on root value vs. V.

---



### 🧠 Trick to Remember:

> 🔴 "**Red node can't have a red child!**"
> 🔄 "Balance the tree with **rotations** and **recoloring** when violations occur."

---

### 🔗 Resource:

[Red-Black Tree – GeeksForGeeks](https://www.geeksforgeeks.org/red-black-tree-set-1-introduction-2/)

---

Would you like me to convert all 37 questions like this into a **GitHub Markdown file** or a downloadable `README.md` file as well?


---

## Question 2: Right View of Binary Tree

**Topic:** Tree
**Repeated:** ❌

---

### 🔸 Problem Description:

Print the rightmost node at each level of a binary tree.

---

### 🔹 Intuition:

Traverse level by level and print the last node at each level.

---

### 🔸 Brute Force:

* BFS and print last node at every level.

```cpp
void rightView(Node* root) {
    if (!root) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int sz = q.size();
        for (int i = 0; i < sz; ++i) {
            Node* temp = q.front(); q.pop();
            if (i == sz - 1) cout << temp->data << " ";
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
    }
}
```

⏱️ **Time:** O(n)
💾 **Space:** O(n)

---

### 🧠 Trick:

💡 Right View = **last in level-order**

---

### 🔗 Resource:

[Right View – GFG](https://www.geeksforgeeks.org/right-view-binary-tree/)

---

## Question 3: Max Sum of Non-Adjacent Tree Nodes

**Topic:** Tree
**Repeated:** ✅

---

### 🔸 Problem:

Find maximum sum of nodes such that no two adjacent nodes (parent-child) are selected.

---

### 🔹 Intuition:

Either take this node and skip children OR skip this node and take children's value.

---

### 🔸 Brute Force:

Try all combinations → exponential.

---

### 🔹 Optimized (DP on Trees):

```cpp
pair<int, int> dfs(Node* root) {
    if (!root) return {0, 0};
    auto l = dfs(root->left);
    auto r = dfs(root->right);
    int include = root->data + l.second + r.second;
    int exclude = max(l.first, l.second) + max(r.first, r.second);
    return {include, exclude};
}
```

⏱️ **Time:** O(n)
💾 **Space:** O(h)

---

### 🧠 Trick:

🎯 Similar to **House Robber** problem on Trees

---

### 🔗 Resource:

[GFG – Max Sum No Two Adjacent](https://www.geeksforgeeks.org/maximum-sum-nodes-binary-tree-no-two-adjacent/)

---

## Question 4: Mirror Tree

**Topic:** Tree
**Repeated:** ❌

---

### 🔸 Problem:

Convert a tree to its mirror. (Left ↔ Right)

---

### 🔹 Intuition:

Postorder traversal – swap left and right recursively.

---

### 🔸 Code:

```cpp
void mirror(Node* root) {
    if (!root) return;
    mirror(root->left);
    mirror(root->right);
    swap(root->left, root->right);
}
```

⏱️ **Time:** O(n)
💾 **Space:** O(h)

---

### 🧠 Trick:

🪞“Postorder and swap children.”

---

### 🔗 Resource:

[Mirror Tree – GFG](https://www.geeksforgeeks.org/create-a-mirror-tree-from-the-given-binary-tree/)

---

## Question 5: Binary Tree Cameras

**Topic:** Tree
**Repeated:** ✅

---

### 🔸 Problem:

Place minimum cameras such that every node is covered.

---

### 🔹 Intuition:

Use greedy: place camera at parent of a leaf node.

---

### 🔸 Code (Postorder Greedy):

```cpp
int dfs(TreeNode* root, int& res) {
    if (!root) return 1;
    int l = dfs(root->left, res);
    int r = dfs(root->right, res);
    if (l == 0 || r == 0) { res++; return 2; }
    return (l == 2 || r == 2) ? 1 : 0;
}
int minCameraCover(TreeNode* root) {
    int res = 0;
    if (dfs(root, res) == 0) res++;
    return res;
}
```

⏱️ **Time:** O(n)
💾 **Space:** O(h)

---

### 🧠 Trick:

🎥 “Put camera on parent of uncovered child.”

---

### 🔗 Resource:

[Binary Tree Cameras – Leetcode](https://leetcode.com/problems/binary-tree-cameras/solution/)

---

## Question 6: Reverse Alternate Levels

**Topic:** Tree
**Repeated:** ❌

---

### 🔸 Problem:

Reverse nodes at alternate levels of perfect binary tree.

---

### 🔹 Intuition:

Store level nodes in array. Swap values at alternate levels.

---

### 🔸 Code (Efficient DFS):

```cpp
void reverseAlt(Node* a, Node* b, int lvl) {
    if (!a || !b) return;
    if (lvl % 2 == 0) swap(a->data, b->data);
    reverseAlt(a->left, b->right, lvl+1);
    reverseAlt(a->right, b->left, lvl+1);
}
```

⏱️ **Time:** O(n)
💾 **Space:** O(h)

---

### 🧠 Trick:

🔄 Reverse symmetric pairs on even levels.

---

### 🔗 Resource:

[Reverse Alternate Levels – GFG](https://www.geeksforgeeks.org/reverse-alternate-levels-binary-tree/)

---

## Question 7: Flatten BST to Linked List

**Topic:** Tree
**Repeated:** ❌

---

### 🔸 Problem:

Flatten a BST to a sorted linked list (right pointers only).

---

### 🔹 Intuition:

Inorder traversal and reconnect nodes.

---

### 🔸 Code:

```cpp
TreeNode* prev = nullptr;
void flatten(TreeNode* root) {
    if (!root) return;
    flatten(root->right);
    flatten(root->left);
    root->right = prev;
    root->left = nullptr;
    prev = root;
}
```

⏱️ **Time:** O(n)
💾 **Space:** O(h)

---

### 🧠 Trick:

🪜 Use reverse inorder for right-pointer chain.

---

### 🔗 Resource:

[Flatten BST – GFG](https://www.geeksforgeeks.org/flatten-binary-search-tree/)

---

## Question 8: Symmetric Binary Tree

**Topic:** Tree
**Repeated:** ❌

---

### 🔸 Problem:

Check if a tree is a mirror of itself.

---

### 🔹 Intuition:

Compare left of left subtree with right of right subtree.

---

### 🔸 Code:

```cpp
bool isMirror(Node* a, Node* b) {
    if (!a && !b) return true;
    if (!a || !b) return false;
    return a->data == b->data &&
           isMirror(a->left, b->right) &&
           isMirror(a->right, b->left);
}
```

⏱️ **Time:** O(n)
💾 **Space:** O(h)

---

### 🧠 Trick:

🔄 Compare cross-symmetric subtrees.

---

### 🔗 Resource:

[Symmetric Tree – GFG](https://www.geeksforgeeks.org/check-symmetric-binary-tree-iterative-approach/)

---

## Question 9: Split BST by Node

**Topic:** Tree
**Repeated:** ❌

---

### 🔸 Problem:

Split BST into two BSTs based on a value X. Left ≤ X, Right > X.

---

### 🔹 Intuition:

Recursively partition left/right.

---

### 🔸 Code:

Refer [Leetcode Split BST](https://leetcode.com/problems/split-bst/) for code (bit long).

⏱️ **Time:** O(h)
💾 **Space:** O(h)

---

### 🧠 Trick:

🪓 “Cut tree into two using BST property”

---

### 🔗 Resource:

[Split BST – Coding Ninjas](https://www.codingninjas.com/codestudio/problems/split-bst_1376434?leftPanelTab=2)

---

## Question 10: Convert Tree to Inorder Sum

**Topic:** Tree
**Repeated:** ❌

---

### 🔸 Problem:

Convert a tree so each node is replaced by sum of its inorder predecessor & successor.

---

### 🔹 Intuition:

Store inorder → compute values → modify original tree.

---

### 🔸 Brute Force:

1. Inorder traversal → vector
2. Second pass: replace node data

---

### 🔹 Optimized:

Can also be done using recursion + global prev/sum tracking.

⏱️ **Time:** O(n)
💾 **Space:** O(n)

---

### 🧠 Trick:

➕ Use inorder + index tricks

---

### 🔗 Resource:

[GFG – Inorder Sum Tree](https://www.geeksforgeeks.org/replace-every-element-in-a-binary-tree-with-the-sum-of-inorder-predecessor-and-successor/)

```

```
Here you go broo 😎 — the final set **(Questions 31 to 37)** from your list, detailed in the same clean format:

---

## ✅ **Question 31: Maximum Width of Binary Tree**

**Topic:** Tree
**Repeated:** ❌

---

### 🔸 Problem:

Find the maximum width of a binary tree. The width is the number of nodes between the leftmost and rightmost non-null nodes **at the same level**, including nulls in between.

---

### 🔹 Intuition:

Use level order traversal (BFS) while assigning **position indices** to nodes like a complete binary tree. Track leftmost and rightmost positions per level.

---

### 🔸 Code:

```cpp
int widthOfBinaryTree(TreeNode* root) {
    if (!root) return 0;
    long long ans = 0;
    queue<pair<TreeNode*, long long>> q;
    q.push({root, 0});

    while (!q.empty()) {
        long long size = q.size();
        long long left = q.front().second, right = left;
        for (int i = 0; i < size; ++i) {
            auto [node, index] = q.front(); q.pop();
            right = index;
            if (node->left) q.push({node->left, 2 * index});
            if (node->right) q.push({node->right, 2 * index + 1});
        }
        ans = max(ans, right - left + 1);
    }

    return (int)ans;
}
```

⏱ Time: O(n)
💾 Space: O(n)

🧠 **Trick:** Index nodes like a complete tree to compute width.

---

## ✅ **Question 32: All Nodes Distance K from Target**

**Topic:** Tree
**Repeated:** ❌

---

### 🔸 Problem:

Given the root of a binary tree, a target node, and an integer K, return all nodes that are distance K from the target.

---

### 🔹 Intuition:

* Convert the tree to an **undirected graph** (adjacency list).
* Use **BFS** starting from the target node.

---

### 🔸 Code:

```cpp
void buildGraph(TreeNode* node, TreeNode* parent, unordered_map<TreeNode*, vector<TreeNode*>>& graph) {
    if (!node) return;
    if (parent) {
        graph[node].push_back(parent);
        graph[parent].push_back(node);
    }
    buildGraph(node->left, node, graph);
    buildGraph(node->right, node, graph);
}

vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    unordered_map<TreeNode*, vector<TreeNode*>> graph;
    buildGraph(root, nullptr, graph);

    unordered_set<TreeNode*> visited;
    queue<TreeNode*> q;
    q.push(target);
    visited.insert(target);

    while (k-- > 0) {
        int sz = q.size();
        for (int i = 0; i < sz; i++) {
            TreeNode* node = q.front(); q.pop();
            for (TreeNode* neighbor : graph[node]) {
                if (!visited.count(neighbor)) {
                    visited.insert(neighbor);
                    q.push(neighbor);
                }
            }
        }
    }

    vector<int> res;
    while (!q.empty()) {
        res.push_back(q.front()->val);
        q.pop();
    }

    return res;
}
```

⏱ Time: O(n)
💾 Space: O(n)

🧠 **Trick:** Convert to graph and perform BFS from target.

---

## ✅ **Question 33: Find the Largest BST in Binary Tree**

**Topic:** Tree
**Repeated:** ❌

---

### 🔸 Problem:

Return the size of the largest subtree which is a BST.

---

### 🔹 Intuition:

Use postorder traversal to return info from children:

* `min`, `max`, `isBST`, and `size`.

---

### 🔸 Code:

```cpp
struct Info {
    int size;
    int min, max;
    int ans;
    bool isBST;
};

Info largestBST(TreeNode* root) {
    if (!root)
        return {0, INT_MAX, INT_MIN, 0, true};

    Info l = largestBST(root->left);
    Info r = largestBST(root->right);

    Info curr;
    curr.size = 1 + l.size + r.size;

    if (l.isBST && r.isBST && root->val > l.max && root->val < r.min) {
        curr.min = min(l.min, root->val);
        curr.max = max(r.max, root->val);
        curr.ans = curr.size;
        curr.isBST = true;
        return curr;
    }

    curr.ans = max(l.ans, r.ans);
    curr.isBST = false;
    return curr;
}
```

⏱ Time: O(n)
💾 Space: O(h)

🧠 **Trick:** Gather info bottom-up and validate BST conditions.

---

## ✅ **Question 34: Largest Subtree Sum**

**Topic:** Tree
**Repeated:** ❌

---

### 🔸 Problem:

Find the largest sum of any subtree in a binary tree.

---

### 🔹 Intuition:

Use postorder traversal and track sum at each subtree.

---

### 🔸 Code:

```cpp
int maxSum = INT_MIN;

int helper(TreeNode* root) {
    if (!root) return 0;
    int sum = root->val + helper(root->left) + helper(root->right);
    maxSum = max(maxSum, sum);
    return sum;
}

int findLargestSubtreeSum(TreeNode* root) {
    helper(root);
    return maxSum;
}
```

⏱ Time: O(n)
💾 Space: O(h)

🧠 **Trick:** Just add all nodes in subtree recursively.

---

## ✅ **Question 35: Delete Node in BST**

**Topic:** Tree
**Repeated:** ❌

---

### 🔸 Problem:

Delete a node from BST and keep it valid.

---

### 🔹 Intuition:

* If node has two children: replace with inorder successor.

---

### 🔸 Code:

```cpp
TreeNode* findMin(TreeNode* root) {
    while (root->left) root = root->left;
    return root;
}

TreeNode* deleteNode(TreeNode* root, int key) {
    if (!root) return nullptr;

    if (key < root->val)
        root->left = deleteNode(root->left, key);
    else if (key > root->val)
        root->right = deleteNode(root->right, key);
    else {
        if (!root->left) return root->right;
        else if (!root->right) return root->left;

        TreeNode* temp = findMin(root->right);
        root->val = temp->val;
        root->right = deleteNode(root->right, temp->val);
    }

    return root;
}
```

⏱ Time: O(h)
💾 Space: O(h)

🧠 **Trick:** Replace with inorder successor if two children.

---

## ✅ **Question 36: Check Balanced Tree**

**Topic:** Tree
**Repeated:** ❌

---

### 🔸 Problem:

Check if the tree is height-balanced: for every node, difference in height ≤ 1.

---

### 🔹 Intuition:

Use postorder traversal and return height if balanced, else -1.

---

### 🔸 Code:

```cpp
int check(TreeNode* root) {
    if (!root) return 0;
    int lh = check(root->left);
    int rh = check(root->right);

    if (lh == -1 || rh == -1 || abs(lh - rh) > 1) return -1;
    return max(lh, rh) + 1;
}

bool isBalanced(TreeNode* root) {
    return check(root) != -1;
}
```

⏱ Time: O(n)
💾 Space: O(h)

🧠 **Trick:** Return `-1` on imbalance to early stop.

---

## ✅ **Question 37: Merge Two BSTs into Balanced BST**

**Topic:** Tree
**Repeated:** ❌

---

### 🔸 Problem:

Merge two BSTs into a balanced BST.

---

### 🔹 Intuition:

* Convert both BSTs to sorted arrays (inorder).
* Merge arrays.
* Build BST from merged sorted array.

---

### 🔸 Code:

```cpp
void inorder(TreeNode* root, vector<int>& res) {
    if (!root) return;
    inorder(root->left, res);
    res.push_back(root->val);
    inorder(root->right, res);
}

TreeNode* buildBST(vector<int>& arr, int start, int end) {
    if (start > end) return nullptr;
    int mid = (start + end) / 2;
    TreeNode* root = new TreeNode(arr[mid]);
    root->left = buildBST(arr, start, mid - 1);
    root->right = buildBST(arr, mid + 1, end);
    return root;
}

TreeNode* mergeBSTs(TreeNode* root1, TreeNode* root2) {
    vector<int> a, b;
    inorder(root1, a);
    inorder(root2, b);

    vector<int> merged;
    merge(a.begin(), a.end(), b.begin(), b.end(), back_inserter(merged));
    return buildBST(merged, 0, merged.size() - 1);
}
```

⏱ Time: O(n + m)
💾 Space: O(n + m)

🧠 **Trick:** Inorder + Merge + Balanced Build.

---


