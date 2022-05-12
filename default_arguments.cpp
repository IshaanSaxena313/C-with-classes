/*DEFAULT ARGUMENTS*/
/*
How to use default arguments:- 
    1. Same function will be called even if different number of arguments is passed from main function.
    2. Default values should be assigned to the arguments from right to left.
    3. Passing values to the arguments which are default is optional.
    4. Assigning default value is compulsory at DECLARATION not DEFINITION of function.
*/
#include<iostream>
using namespace std;

/* Function with default argument*/
int sum(int a=0,int b=0,int c=0,int d=0){
    return a+b+c+d;
}
/*-------------------------------*/

int main(){
    int a,b,c,d;
    cout<<"Enter 4 numbers:- "<<endl;
    cin>>a>>b>>c>>d;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b,c)<<endl;
    cout<<sum(a,b,c,d)<<endl;
    cout<<sum(a,c,d)<<endl;
}