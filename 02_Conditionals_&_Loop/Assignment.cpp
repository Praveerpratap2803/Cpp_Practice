// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     int basicSalary;
//     char grade;
//     cout<<"Enter the Basic Salary and the Grade "<<endl;
//     cin>>basicSalary>>grade;
//     float totalSalary,hra,da,pf,allow;
//     hra=(20.0/100)*basicSalary;
//     da=(50.0/100)*basicSalary;
//     pf=(11.0/100)*basicSalary;
    
//     if(grade=='A'){
//         allow=1700;
//     }else{
//         if(grade=='B'){
//             allow=1500;
//         }else{
//             allow=1300;
//         }
//     }
//     totalSalary=round(hra+da+allow+basicSalary-pf);
//     cout<<totalSalary;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n,e=0,o=0;
//     cin>>n;

//     while(n>0){

//         if((n%10)%2==0){
//             e += n%10;
//         }else{
//             o += n%10;
//         }
//         n=n/10;
//     }
//     cout<<e<<" "<<o;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){

//     int x,n,power=1;
//     cin>>x>>n;
//     while(n>0){
//         power=x*power;
//         n--;
//     }
//     cout<<power;
//     return 0;
// }


//Pattern Assignment
// n=4
// 1
// 23
// 345
// 4567

// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cin>>n;
//     int i=1,count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<count++;
//             j++;
//         }
//         count=i;
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }



//Pattern Assignment
// n=4
//    1
//   23
//  345
// 4567

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int i=1,count=1;
    while(i<=n){
        int j=1;
        int k=1;
        while(k<=(n-i)){
            cout<<" ";
            k++;
        }
        while(j<=i){
           
            cout<<count++;
            j++;
        }
        count=i;
        i++;
        cout<<endl;
    }
    return 0;
}










