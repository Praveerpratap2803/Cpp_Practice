// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;


// void increment(int &n){
//     n++;
// }
// int main(){
//     // int i=89;
//     // char p=i;
//     // cout<<p;
//     // int i=896;
//     // int *p=&i;
//     // char *pc=(char*)p;
//     // cout<<*pc;

//     // int i=10;
//     // int &j=i;
//     // j++;
//     // cout<<&i<<&j;
//     int i=10;
//     increment(i);
//     cout<<i;

//     return 0;
// }

#include <iostream>
using namespace std;

void func(int i, int& j, int p){
    i++;
    j++;
    p++;
}

int main(){
    int i = 10;
    int j = 6;
    int &p = i;
    func(i, j, p);
    cout << i << " " << j << " " << p;
}
