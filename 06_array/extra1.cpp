// #include<iostream>
// #include<bits/stdc++.h>
// #include<climits>
// using namespace std;

// // void printArray(int input[],int n){
// //     for(int i=0;i<n;i++){
// //         cout<<input;
// //     }
// // }



// int main(){

//     // int n=4;
//     // int input[100];
//     // for(int i=0;i<n;i++){
//     //     cin>>input[i];
//     // }
//     // for(int i=0;i<9;i++){//extra is garbage
//     //     cout<<input[i];
//     // }

//     // int max;
//     // int a[]={7,3,9,5,23,45,23,543,-3,0};
//     // // cout<<sizeof(a);
//     // max=INT_MIN;//this is inside climits 
//     // for(int i=0;i<sizeof(a)/sizeof(int);i++){
        
//     //     if(max<a[i]){
//     //         max=a[i];
//     //     }
//     // }
//     // cout<<max;


//     // int n=4;
//     // int input[100]={1,2,3,4};
//     // cout<<sizeof(input)<<endl;
//     // cout<<*(input+(1*sizeof(int)))<<endl;
//     // // cout<<input<<endl;//address of 1st element of array
//     // // cout<<input[0]<<endl;
//     // // cout<<&input[2]<<endl;
//     // printArray(input,n);
     

//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverseArray(int b[],int n){
    // cout<<n;
    for(int i=0;i<n/2;i++){
        
        int temp=b[n-i];
        b[n-i]=b[i];
        b[i]=temp;
    }
    // for(int i=0;i<n;i++){
    //     cout<<b[i];
    // }
}
int main(){

    int a[5]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    reverseArray(a,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}







