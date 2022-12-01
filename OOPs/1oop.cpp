#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

     class Student{
        public:
            int rollNumber;
            int age;
            int display(){
                cout<<age;
                cout<<a;
            }
            int set(int b){
                a=b;
            }
        private:
        int a=9;
        
     };
    Student s1,s2;
    Student *s3 = new Student;//dynamic allocation
    s1.age=10;
     (*s3).rollNumber=10; 
       s3->age=10;
    s1.display();
    // (*s3).display();
    s3->display();
    return 0;
} 




