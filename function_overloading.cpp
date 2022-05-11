/*FUNCTION OVERLOADING*/
/* 
Ways to Overload a function:- 
    1. Different number of arguments.
    2. Different type of arguments.
    3. Different order of arguments.
Note:- Different return type is not considered as function overloading
*/
#include<iostream>
using namespace std;
/*Function SUM for addition of 2 numbers*/
int sum(int a,int b){
    return a+b;
}
/*--------------------------------------*/

/*Function SUM with different number of arguments*/
int sum(int a,int b,int c){
    return a+b+c;
}
/*--------------------------------------*/

/*Function SUM with different type of arguments*/
float sum(float a,float b){
    return a+b;
}
/*--------------------------------------*/

/*Function SUM with different order of arguments*/
float sum(int a,float b){
    return a+b;
}
float sum(float b,int a){
    return a+b;
}
/*--------------------------------------*/
int main(){
    cout<<sum(5,6)<<endl;
    cout<<sum(5,6,7)<<endl;
    cout<<sum(5.3f,6.4f)<<endl;
    cout<<sum(5,6.4f)<<endl;
    cout<<sum(5.3f,6)<<endl;
    return 0;
}
