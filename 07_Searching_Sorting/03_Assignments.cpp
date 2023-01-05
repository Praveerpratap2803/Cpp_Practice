#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    vector<int>c;
    int i=n-1,j=m-1,carry=0;
    for(int k=max(n,m);k>0;k--){
        int num = a[i]+b[j]+carry;
        carry = (a[i]+b[i])/10;
        c.push_back(num%10);
        i--;
        j--;
    }
    for(int i=0;i<max(n,m);i++){
        cout<<c[i];
    }
    return c;
}

int main(){
    vector<int> a={7,6,2,4};
    vector<int> b={7,5,6};
    findArraySum(a,4,b,3);
    return 0;
}



