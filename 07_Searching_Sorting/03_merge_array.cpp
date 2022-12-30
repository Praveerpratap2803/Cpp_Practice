#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int i=0,j=0;                 
    vector<int> c; 
    while(i+j<m+n){ // m=3 n=2
        if(i<m && j<n  && arr1[i]<arr2[j]){
            c.push_back(arr1[i]);
            i++;
        }else{ 
                if( j<n && i<m && arr1[i]>arr2[j]){
                    c.push_back(arr2[j]);
                    j++;
                }else{ 
                        if(i<m){
                            c.push_back(arr1[i]);
                            i++;
                        }else{
                            c.push_back(arr2[j]);
                            j++;
                        }
                 }
        }
        
    }
    return c;
}
int main(){
    vector<int>a,b={1,2,12},c={7,9,10,11};
    a=ninjaAndSortedArrays(b,c,3,4);
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
    return 0;
}