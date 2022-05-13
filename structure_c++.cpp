/* STRUCTURE in C++ */
/*
Functions are allowed in structure of c++.
Data members of structure can be initialised inside structure in c++.
Structure is by default public.
"struct" keyword is not required everytime in main function.
*/
#include<iostream>
using namespace std;
/*Creating structure Student*/
struct Student{
    private:                                    //access specifier
    string name;
    int age;
    public:                                     //access specifier
    /*Function to take input*/
    void input(){
        cout<<"Enter name of student:- ";
        cin>>name;
        cout<<"Enter age of student:- ";
        cin>>age;
    }
    /*Function for output*/
    void display(){
        cout<<"Name:- "<<name<<endl;
        cout<<"Age:- "<<age<<endl;
    }
};
int main(){
    int n;
    Student *s;                                 //Creating object pointer.
    cout<<"Enter the nuber of student:- ";
    cin>>n;
    s=new Student[n];                           //Allocating memory to array of objects.
    for(int i=0;i<n;i++)
        s[i].input();
    for(int i=0;i<n;i++)
        s[i].display();
    delete []s;                                 //Delete dynamically allocated memory. 
}