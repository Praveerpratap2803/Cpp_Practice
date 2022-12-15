// // #include <iostream>
// // using namespace std;
 

// // void sortArray(int arr[], int n)
// // {
// //     int i, count0 = 0, count1 = 0, count2 = 0;
// //     for (i = 0; i < n; i++) {
        
// //         if(arr[i]==0){
// //             count0++;
// //         }else{
// //             if(arr[i]==1){
// //                 count1++;
// //             }else{
// //                 count2++;
// //             }
// //         }
// //     }
    
 
// //     i = 0;
 
// //     while (count0 > 0) {
// //         arr[i++] = 0;
// //         count0--;
// //     }
 
// //     while (count1 > 0) {
// //         arr[i++] = 1;
// //         count1--;
// //     }
 
// //     while (count2 > 0) {
// //         arr[i++] = 2;
// //         count2--;
// //     }
 
// //     for (int i = 0; i < n; i++)
// //         cout << arr[i] << " ,";}
 
// // int main()
// // {
// //     int array[] = { 0, 2, 1, 2, 1, 0, 0, 2, 0, 1, 1, 0};
// //     int n = sizeof(array) / sizeof(int);
 
// //     sortArray(array, n);
 
// //     return 0;
// // }





// // #include <iostream>
// // using namespace std;
 
// // int searchElement(int matrix[4][4], int n, int number)
// // {
    
// //     for (int i = 0; i < n; i++) {
// //         for (int j = 0; j < n; j++)
// //             if (matrix[i][j] == number) {
// //                 cout << "Found at (" << i << ", "
// //                      << j << ")\n";
// //                 return 1;
// //             }
// //     }
 
// //     cout << " Element not found";
// //     return 0;
// // }
 
// // // Driver code
// // int main()
// // {
// //     int matrix[4][4] = { { 10, 20, 30, 40 },
// //                       { 15, 25, 35, 45 },
// //                       { 27, 29, 37, 48 },
// //                       { 32, 33, 39, 50 } };
 
// //     searchElement(matrix, 4, 29);
// //     searchElement(matrix, 4, 100);
 
// //     return 0;
// // }
 



// // C++ program to check if two BSTs
// // are identical
 
// // #include <iostream>
// // using namespace std;
 
// // struct Node {
// //     int data;
// //     struct Node* left;
// //     struct Node* right;
// // };
 
// // struct Node* newNode(int data)
// // {
// //     struct Node* node = (struct Node*)
// //         malloc(sizeof(struct Node));
// //     node->data = data;
// //     node->left = NULL;
// //     node->right = NULL;
 
// //     return node;
// // }
 
// // // void inorder(Node* root)
// // // {
// // //     if (root == NULL)
// // //         return;
 
// // //     inorder(root->left);
 
// // //     cout << root->data << " ";
 
// // //     inorder(root->right);
// // // }
 

// // int isIdentical(Node* root1, Node* root2)
// // {
// //     if (root1 == NULL && root2 == NULL)
// //         return 1;
// //     else if (root1 == NULL || root2 == NULL)
// //         return 0;
// //     else { 
// //         if (root1->data == root2->data && isIdentical(root1->left, root2->left)
// //             && isIdentical(root1->right, root2->right))
// //             return 1;
// //         else
// //             return 0;
// //     }
// // }
 
// // int main()
// // {
// //     struct Node* root1 = newNode(10);
// //     struct Node* root2 = newNode(10);
// //     root1->left = newNode(5);
// //     root1->right = newNode(14);
// //     root1->left->left = newNode(1);
// //     root1->left->right = newNode(6);
// //     root1->right->left=newNode(12);
// //     root1->right->right=newNode(15);

// //     root2->left = newNode(5);
// //     root2->right = newNode(14);
// //     root2->left->left = newNode(1);
// //     root2->left->right = newNode(6);
// //     root2->right->left=newNode(12);
// //     root2->right->right=newNode(15);

// //     cout<<isIdentical(root1, root2);
    
// //     return 0;
// // }


// #include <iostream>
// using namespace std;
 
// class Node {
//     int data;
//     class Node* left;
//     class Node* right;
// };
 
// class Node* newNode(int data)
// {
//     class Node* node = new newNode;
//     // (struct Node*)
//     //     malloc(sizeof(struct Node));
//     node->data = data;
//     node->left = NULL;
//     node->right = NULL;
 
//     return node;
// }
 
// // void inorder(Node* root)
// // {
// //     if (root == NULL)
// //         return;
 
// //     inorder(root->left);
 
// //     cout << root->data << " ";
 
// //     inorder(root->right);
// // }
 

// int isIdentical(Node* root1, Node* root2)
// {
//     if (root1 == NULL && root2 == NULL)
//         return 1;
//     else if (root1 == NULL || root2 == NULL)
//         return 0;
//     else { 
//         if (root1->data == root2->data && isIdentical(root1->left, root2->left)
//             && isIdentical(root1->right, root2->right))
//             return 1;
//         else
//             return 0;
//     }
// }
 
// int main()
// {
//     class Node* root1 = newNode(10);
//     class Node* root2 = newNode(10);
//     root1->left = newNode(5);
//     root1->right = newNode(14);
//     root1->left->left = newNode(1);
//     root1->left->right = newNode(6);
//     root1->right->left=newNode(12);
//     root1->right->right=newNode(15);

//     root2->left = newNode(5);
//     root2->right = newNode(14);
//     root2->left->left = newNode(1);
//     root2->left->right = newNode(6);
//     root2->right->left=newNode(12);
//     root2->right->right=newNode(15);

//     cout<<isIdentical(root1, root2);
    
//     return 0;
// }






// #include <bits/stdc++.h>



// template <class T>
// class Stack {
// private:
//   vector<T> data;
// public:
//   void push(const T &item) {data.push_back(item);}
//   T pop(void) {return data.pop_back();}
// };

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//   // int i=10;
//   // // cout<<&i<<endl;
//   // int *p;
//   // (*p)++;
//   // // cout<<*p;
//   // int a[10]={1,2,3};
//   // cout<<*(a+1);

//   // int a=10;
//   // int &b=a;
//   // b++;
//   // cout<<a;

//   // int *p = new int;// new keyword is used to store the memory in heap // stack - 4or 8 byte memory and 4byte for int
//   // *p=10;
//   // cout<<*p;
//   // int n;
//   // cin>>n;
//   // int *q=new int[n];
//   // *q=1;
//   // delete []q;
//   // cout<<*q;

//   const int i=10;
//   int const j=9;

//   return 0;
// }
// Classes all the data are private by default but in structure all are public
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex{
  int a,b;
  public:
    void sum(){
      cout<<a+b;
    }
};

int main(){

  Complex c1;
  Complex *c2=new Complex;
  // c1.sum();

  return 0;
}






