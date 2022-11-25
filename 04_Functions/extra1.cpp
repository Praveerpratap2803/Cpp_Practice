#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){//function defination
    int result=1;
    while(n>0){
        result=(result)*(n);
        n -= 1;
    }
    return result;
}
void isPrime(int n){
    int i=2,flag=0;
    while(n>i){
        if(n%i==0){
            flag=1;
            cout<<endl<<1;
        }
        i++;
    }
    if(flag==0){
        cout<<"Number is prime";
    }else{
        cout<<"Number is not prime";
    }
}
int main(){
    int n=11;
    int output = factorial(n);
    cout<<output;
    isPrime(n);
}


