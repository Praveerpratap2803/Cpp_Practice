#include<iostream>
using namespace std;

int main(){

    int f=(5.0/9);
    cout<<f<<endl;
    float g=(5.0/9);
    cout<<g<<endl;
    cout<<10%3<<endl;
    int a,b;
    cout<<"Enter two values";
    cin>>a>>b;
    bool c=(a==b);
    cout<<a<<" and "<<b<<" is equal "<<c<<endl;
    bool d=(a>b);
    bool e = c && d;
    cout<<e;

    return 0;
}
