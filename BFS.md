#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Binary Tree Node Definition
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = right = NULL;
    }
};

// BFS / Level Order Traversal
vector<int> levelOrder(TreeNode* root) {
    vector<int> result;
    if (root == NULL) return result;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        result.push_back(current->data);

        if (current->left) q.push(current->left);
        if (current->right) q.push(current->right);
    }

    return result;
}

int main() {
    // Creating this binary tree:
    //         1
    //        / \
    //       2   3
    //      / \   \
    //     4   5   6

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    // Call BFS
    vector<int> bfs = levelOrder(root);

    // Print the result
    cout << "Level Order Traversal (BFS): ";
    for (int val : bfs) {
        cout << val << " ";
    }

    return 0;
}
