#include<iostream>
using namespace std;


int increment(int);
int main(){
    int a=2;
    int b=increment(a);
    cout<<b;
    return 0;
}
int increment(int n){//copying the value in n i.e pass by value
    n += 1;
    return n;
}






