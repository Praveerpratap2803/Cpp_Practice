#include<iostream>
using namespace std;
int factorial(int n){
    int i=1,o=1;
    while(n>0){
        o=o*i;
        i++;
        n--;
    }
    return o;

}
int main(){

    int n,r;
    cin>>n>>r;
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n-r);
    int output = fact_n/(fact_r*fact_n_r);
    cout<<output;

    return 0;
}











