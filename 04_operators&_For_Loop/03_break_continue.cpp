#include<iostream>
using namespace std;

int main(){
    int n=18;
    bool flag=false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=true;
            break; 
        }
    }
    if(flag==true){
        cout<<"Number is not prime";
    }else
        cout<<"Number is prime";


    return 0;
}










