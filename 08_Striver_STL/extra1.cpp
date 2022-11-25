#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //pair container
    // pair<int,int> p = {1,3}; 
    // cout<<p.first<<p.second;
    // pair<pair<int,int>,pair<int,int>> p1={{1,2},{3,4}};
    // cout<<p1.second.second;

    // pair<int,int> arr[]={{1,2},{5,7},{23,67}};
    // cout<<arr[1].first;

    //vector container
    // vector<int> v1;
    // v1.push_back(1);
    // v1.push_back(2);
    // v1.push_back(3);
    // vector<pair<int,int>> v2={{1,2}};
    // v2.push_back({2,3});
    // vector<int> v(5,100);
    // vector<int> v3(v);
    // for(int i=0;i<v3.size();i++){
    //     //cout<<v[i];
    // }
    // //cout<<*(v1.begin()+1);
    // vector<int>::iterator it=v.begin();
    // //cout<<*(it);

    // for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    //     //cout<<*(it);
    // }
    // //v.erase(v.begin()+1,v.begin()+3);
    // v.insert(v.begin()+2,4,300);
    // for(auto a:v){
    //     cout<<a;
    // }



    //map
    // map<int,int> mp;
    // mp[1]=2;
    // mp.insert({3,6});
    // mp.insert({8,6});
    // mp.insert({2,9});
    // for(auto it:mp){
    //     cout<<it.first;
    // }
    int a[]={7,5,3,6,9};
    vector<int> v={7,5,3,6,9};
    // sort(v.begin(),v.end());
    // for(auto it:v){
    //     cout<<it;
    // }
    sort(a,a+4);
    for(auto it:a){
        cout<<it;
    }
    bool b=binary_search(a,a+4,3);
    cout<<b;


    return 0;
}









