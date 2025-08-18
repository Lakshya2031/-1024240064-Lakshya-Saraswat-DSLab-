//Q5. Write a program to find the circumference of a circle with radius 10 in C++.

#include<iostream>
using namespace std;
int main(){
    float radius;
    cout<<"Enter the radius:";
    cin>>radius;
    float circumference=2*3.1415*radius;
    cout<<"The circumference is:"<<circumference;
    return 0;
}