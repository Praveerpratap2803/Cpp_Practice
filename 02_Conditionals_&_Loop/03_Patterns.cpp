// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=4){
//         int j=1;
//         while(j<=i){
//             cout<<j;
//             j=j+1;
//         }
//         i=i+1;
//         cout<<endl;
//     }

//     return 0;
// }



#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i=1,val=1;;
    while(i<=n){
        int j=1;
        int k=1;
        while(k<=(n-i)){
            cout<<" ";
            k++;
        }
        while(j<=i){
            
            cout<<val;
            val++;
            j++;
        }
        cout<<endl;
        i++;
    }


    return 0;
}



