#include<iostream>

using namespace std;
int main(){

    // char c;
    // int count=0;
    // cin>>c;
    // while(c!='$'){
    //     count++;
    //     cin>>c;
    // }
    // cout<<count;


    char c;
    int count=0;
    c=cin.get();
    while(c!='$'){
        count++;
        c=cin.get();
    }
    cout<<count;

    return 0;
}














