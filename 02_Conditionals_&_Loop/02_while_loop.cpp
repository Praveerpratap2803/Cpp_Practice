#include<iostream>
using namespace std;

int main(){

    // Number from 1 to n
    // int n,i=1;
    // cin>>n;
    // while(i<=n){
    //     cout<<i<<endl;
    //     i=i+1;
    // }

    // prime no. check
    // int n,i=2,flag=0;
    // cin>>n;
    // while(i<n){
    //     if(n%i==0){
    //         flag=1;
    //     }
    //     i++;
    // }
    // if(flag==0){
    //     cout<<"number is prime";
    // }else{
    //     cout<<"number is not prime";
    // }


    int n,i=2;
    bool divided=false;
    cin>>n;
    while(i<n){
        if(n%i==0){
            divided=true;
        }
        i++;
    }
    if(divided==false){
        cout<<"number is prime";
    }else{
        cout<<"number is not prime";
    }

    return 0;
}





