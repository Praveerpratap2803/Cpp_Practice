#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(char *a,char *b){
    char temp=*a;
    *a=*b;
    *b=temp;
}
int main(){

    // int a[10];
    // char b[10];
    // cin>>b;//abc
    // //cout<<b;//abc
    // int length=0,i=0;
    // while(b[i]!='\0'){
    //     i++;
    // }
    // length=i;
    // cout<<length;

    // char a[100];
    // cin>>a;
    // cout<<a<<endl;
    // int i=0;
    // while(a[i]!='\0'){
    //     if(a[i]=='a'){
    //         a[i]='x';
    //     }
    //     i++;
    // }
    // cout<<a;


    //more on character array

    // char input[10];
    // // cin>>input;
    // // cout<<input;
    // // cin.getline(input,100);
    // // cout<<input;
    // // cin.getline(input,4);
    // // cout<<input;
    // cin.getline(input,4,'0');
    // cout<<input;

    
    // char input[100];
    // cin.getline(input,100);
    // cout<<input<<endl;
    // int len = strlen(input);
    // for(int i=0;i<=(len/2)-1;i++){
    //     swap(input[i],input[len-i-1]);
    // }
    // cout<<input;

    char input[100];
    cin.getline(input,100);
    cout<<input<<endl;
    int i=0;
    while (input[i]!='\0')
    {
        if(input[i]==' '){
            input[i]='8';
        }
        i++;
    }
    cout<<input;
    
    return 0;
}