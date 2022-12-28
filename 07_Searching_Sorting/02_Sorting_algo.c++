#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[]={1,5,9,12,20},b[]={2,3,8};
    
    int c[100];
    int i=0,j=0,k=0;
    while(i+j<8){
        if(a[i]<b[j] && i<5){
            c[k]=a[i];
            i++;
            k++;
        }else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    for(int i=0;i<8;i++){
        cout<<c[i];
    }
    return 0;
}






