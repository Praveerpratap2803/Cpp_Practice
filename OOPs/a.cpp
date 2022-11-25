#include<iostream>
using namespace std;
int main(){

    // int a[5]={1,2,3,4,5};
    // cout<<sizeof(a)/sizeof(int)<<endl;
    // for(int i=0;i<sizeof(a)/sizeof(int);i++){
    //     cout<<a[i];
    // }
    // for(int i:a){
    //     cout<<a[i];
    // }
    cout<<endl;
    struct{
        int a;
        char b;
        string c;
    }alpha1,alpha2;
    alpha1.a=2;
    alpha2.a=4;
    alpha1.b='r';
    alpha2.c="abcde";
    cout<<alpha2.c;

    struct beta{
        int d;
        char e[2]="a";
    };
    beta beta1;
    beta1.d=2;
    cout<<beta1.e<<beta1.d;
    return 0;
}




