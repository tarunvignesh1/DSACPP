#include <iostream>
#include <vector>

using namespace std;
//create a class for tree data structure
class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//implement a function to get the depth of the tree
int getDepth(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    int leftDepth = getDepth(root->left);
    int rightDepth = getDepth(root->right);
    return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
}
//implement a function to check if a tree is balanced
bool isBalanced(TreeNode* root) {
    if(root == NULL) return true;
    int left = 0;
    int right = 0;
    if(root->left != NULL) left = getDepth(root->left);
    if(root->right != NULL) right = getDepth(root->right);
    if(abs(left - right) > 1) return false;
    return isBalanced(root->left) && isBalanced(root->right);
}
//implement a function to insert a node into a tree
TreeNode* insert(TreeNode* root, int val) {
    if(root == NULL) {
        root = new TreeNode(val);
        return root;
    }
    if(val < root->val) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}
//implement a function to print a tree
void printTree(TreeNode* root) {
    if(root == NULL) return;
    printTree(root->left);
    cout << root->val << " ";
    printTree(root->right);
}

//implement a function to delete a node from a tree
TreeNode* deleteNode(TreeNode* root, int val) {
    if(root == NULL) return NULL;
    if(val < root->val) {
        root->left = deleteNode(root->left, val);
    } else if(val > root->val) {
        root->right = deleteNode(root->right, val);
    } else {
        if(root->left == NULL) {
            TreeNode* temp = root->right;
            delete root;
            return temp;
        } else if(root->right == NULL) {
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        TreeNode* temp = root->right;
        while(temp->left != NULL) {
            temp = temp->left;
        }
        root->val = temp->val;
        root->right = deleteNode(root->right, temp->val);
    }
    return root;
}
};

//implement a driver function to test the tree
int main() {
    TreeNode* root = NULL;
    root = root->insert(root, 5);
    root = root->insert(root, 3);
    root = root->insert(root, 7);
    root = root->insert(root, 2);
    root = root->insert(root, 4);
    root = root->insert(root, 6);
    root = root->insert(root, 8);
    root = root->insert(root, 1);
    root = root->insert(root, 9);
    root = root->insert(root, 0);
    root = root->insert(root, 10);
    root = root->insert(root, 11);
    root = root->insert(root, 12);
    root = root->insert(root, 13);
    root = root->insert(root, 14);
    root = root->insert(root, 15);
    root = root->insert(root, 16);
    root = root->insert(root, 17);
    root = root->insert(root, 18);
    root = root->insert(root, 19);
    root = root->insert(root, 20);
    root = root->insert(root, 21);
    root = root->insert(root, 22);
    root = root->insert(root, 23);

    cout << "The tree is: ";   
    root->printTree(root);
    cout << endl;
    cout << "The depth of the tree is: " << root->getDepth(root) << endl;

    cout << "The tree is balanced: " << root->isBalanced(root) << endl;
    
    root = root->deleteNode(root, 5);
    root = root->deleteNode(root, 3);
    root = root->deleteNode(root, 7);
    root = root->deleteNode(root, 2);
    root = root->deleteNode(root, 4);

return 0;
}