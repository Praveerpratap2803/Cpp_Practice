#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class Student{
    public:
        int age;
        int roll_number;
        Student(){
            cout<<"Constructor called";
        }
        Student(int age){
            // (*this).age=age;
            this->age=age;
        }
};
int main(){

    Student s1(1),s2(3);
    Student *s3= new Student(3);
    cout<<s1.age;
    cout<<s2.age;
    cout<<s3->age;
    return 0;
}


