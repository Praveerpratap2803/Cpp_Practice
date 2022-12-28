#include<iostream>
using namespace std;

int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int start=0,end=n-1;
    while(start<=end){
        int mid = (start + end)/2;
        if(val==input[mid]){
            return mid;
        }
        else if(val>input[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){

    int a[]={1,2,3,4,5};
    int val;
    cin>>val;
    int n = sizeof(a)/sizeof(int);
    int output = binarySearch(a,n,val);
    cout<<output;

}


