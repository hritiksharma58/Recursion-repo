#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(struct Node* root) {
    if (root == NULL) {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return 1 + max(lh, rh);
}

int diameter(struct Node* root) {
    if (root == NULL) {
        return 0;
    }

    // Heights of left and right subtrees
    int lh = height(root->left);
    int rh = height(root->right);

    // Diameter passing through the root
    int currDiameter = lh + rh + 1;

    // Diameter of left subtree
    int leftDiameter = diameter(root->left);

    // Diameter of right subtree
    int rightDiameter = diameter(root->right);

    // Return the maximum of the three
    return max(currDiameter, max(leftDiameter, rightDiameter));
}

int main() {
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->left->left = new Node(9);

    cout << "Height of tree: " << height(root) << endl;
    cout << "Diameter of tree: " << diameter(root) << endl;

    return 0;
}
