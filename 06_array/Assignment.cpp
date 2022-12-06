#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n,sum=0;
    // cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++){
    //     sum=sum+a[i];
    // }
    // cout<<sum;



    int arr[7]={3,2,6,2,3,1,1};
    int size=7,count=0;
    int value,flag=0;

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]&&i!=j){
                count++;
                value = arr[i];
            }
        }
    }


    // for(int i=0;i<size;i++){
    //     for(int j=0;i<size;j++){
    //             if(arr[i]==arr[j]&&i!=j){
    //                 flag=1;
    //                 cout<<arr[i];
    //             }
    //     }
    //     if(flag==0){
    //         index=i;
    //         cout<<index;
    //     }
    // }
    
    cout<<arr[index];
    

    return 0;
}