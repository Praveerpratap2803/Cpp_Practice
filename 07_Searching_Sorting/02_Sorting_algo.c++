#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minimum(int a[],int b){
    int c = INT_MAX;
    for(int i=0;i<b;i++){
        if(c>a[i]){
            c=a[i];
        }
    }
    return c;
}
int main(){

    // int a[]={1,5,9,12,20},b[]={2,3,8};
    
    // int c[100];
    // int i=0,j=0,k=0;
    // while(i+j<8){
    //     if(a[i]<b[j] && i<5){
    //         c[k]=a[i];
    //         i++;
    //         k++;
    //     }else{
    //         c[k]=b[j];
    //         j++;
    //         k++;
    //     }
    // }
    // for(int i=0;i<8;i++){
    //     cout<<c[i];
    // }

    int a[]={7,6,5,4,3,2,1};
    for(int i=0;i<7;i++){
        // int *b = min_element(a+i,a+7);
        int b = minimum(a+i,7);
        int temp = a[i];
        a[i] = b;
        b = temp;
    }
    for(int i=0;i<7;i++){
        cout<<a[i];
    }


    return 0;
}






