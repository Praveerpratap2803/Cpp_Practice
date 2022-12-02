#include<iostream>
using namespace std;
void fun(int b[],int n){
    cout<<sizeof(b)<<endl;
    //cout<<b;
    for(int i=0;i<n;i++){
        cout<<b[i];
    }
  
}
int main(){


    int b[5]={1,2,3,4,5};
    // cout<<b[1]<<endl;
    // cout<<b[0]<<endl;
    // cout<<b<<endl;
    // cout<<&b[0]<<endl;
    // cout<<&b[1]<<endl;
    int n=sizeof(b)/sizeof(int);
    cout<<sizeof(b)<<endl;
    fun(b,n);
    return 0;
}


