/*REFERENCE*/
/*
Reference works as nickname for any variable,function or array.
Rules for reference:- 
    1. No extra memory is allocated for reference.
    2. A variable is called reference only when both declaration and initilisation is together.
    int &r=a; (here 'r' is reference of 'a')
    int (&r)(int,int)=swap; (here 'r' is nickname for function 'swap')
    const int &r=5; ('r' is nickname for constant '5')
    int (&r)[5]=arr; (reference to complete array)
    int *swap(int,int); (return by reference function)
*/
#include<iostream>
using namespace std;
/*Function containing reference of arguments*/
void swap(int &a,int &b){                   //a and b will act as nickname for variables passed from main function.
    int t=a;
    a=b;
    b=a;
}
/*------------------------------------------*/
int main(){
    int a,b;
    cout<<"Enter the value of a & b:- "<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"a and b are:- "<<a<<","<<b;
}