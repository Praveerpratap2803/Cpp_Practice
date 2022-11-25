#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string a="Praveer";
    string b;
    ofstream outz;
    outz.open("sample_file.txt");
    outz<<a;
    
    // ifstream inz("sample_file.txt");
    // getline(inz,b);
    // cout<<b;

    return 0;
}





