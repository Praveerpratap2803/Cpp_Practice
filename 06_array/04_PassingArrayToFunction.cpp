#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void reverseArray(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        int temp = arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        i++;
        j--;
    }

}

int main(){
    int input[100]={1,2,3,4,5};
    reverseArray(input,5);
    printArray(input,5);
    // int input[100]={1,2,3};
    
    return 0;
}