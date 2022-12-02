#include<iostream>
#include<climits>

#include<bits/stdc++.h>
using namespace std;
int main(){

    // int n;
    // cin>>n;
    // int input[100];

    // for(int i=0;i<n;i++){
    //     cin>>input[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<input[i];
    // }

    //Largest Element
    int n;
    cin>>n;
    int input[100];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(input[i]>max){
            max=input[i];
        }
    }
    cout<<"Maximum number is "<<max;
    return 0;
}









