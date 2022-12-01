#include <iostream>
using namespace std;
 
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
 
struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)
        malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return node;
}
 
void inorder(Node* root)
{
    if (root == NULL)
        return;
 
    inorder(root->left);
 
    cout << root->data << " ";
 
    inorder(root->right);
}
 

int isIdentical(Node* root1, Node* root2)
{
    if (root1 == NULL && root2 == NULL)
        return 1;
    else if (root1 == NULL || root2 == NULL)
        return 0;
    else { 
        if (root1->data == root2->data && isIdentical(root1->left, root2->left)
            && isIdentical(root1->right, root2->right))
            return 1;
        else
            return 0;
    }
}
 
int main()
{
    struct Node* root1 = newNode(10);
    struct Node* root2 = newNode(10);
    root1->left = newNode(5);
    root1->right = newNode(14);
    root1->left->left = newNode(1);
    root1->left->right = newNode(6);
    root1->right->left=newNode(12);
    root1->right->right=newNode(15);

    root2->left = newNode(5);
    root2->right = newNode(14);
    root2->left->left = newNode(1);
    root2->left->right = newNode(6);
    root2->right->left=newNode(12);
    root2->right->right=newNode(15);

    cout<<isIdentical(root1, root2);
    
    return 0;
}
