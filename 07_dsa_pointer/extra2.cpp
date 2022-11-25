#include<iostream>
using namespace std;

// void print(int* q){
//     cout<<*q;
// }
// void sum(int *b){
//     cout<<b[1];
// }
int main(){
    // int i=10;
    // int* p=&i;
    // print(p);
    // int a[]={1,2,3};
    // sum(a+1);

    int i=10;
    int* p=&i;
    int**q=&p;
    cout<<i<<*p<<**q;
    return 0;
}



