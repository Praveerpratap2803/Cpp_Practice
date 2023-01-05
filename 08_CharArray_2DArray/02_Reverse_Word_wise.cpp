#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(char *a,char *b){
    char temp=*a;
    *a=*b;
    *b=temp;
}
int main(){

    char input[100];
    cin.getline(input,100);
    cout<<input<<endl;
    int i=0;
    int j = strlen(input);

    while (i<j)
    {
        swap(input[i],input[j-1]);
        i++;
        j--;
    }
    
    
    cout<<input;

    return 0;
}



