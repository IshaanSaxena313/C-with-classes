/*NEW and DELETE operator*/
/*
"new" and "delete" is both keyword and operator in c++.
"new" and "delete" are used for dynamic memory allocation.
*/
#include<iostream>
using namespace std;
int main(){
    int *arr,n;
    cout<<"Enter the number of elements in array:- ";
    cin>>n;
    /*Dynamic memory allocation for array using "new operator"*/
    arr=new int[n];
    /*Input for array*/
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<":- ";
        cin>>arr[i];
    }
    /*Array output*/
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    /*sorting(selection sort)*/
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    /*Array output(sorted)*/
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    /*Deleting allocated memory*/
    delete []arr;                 //it will delete complete array
                                  //delete arr; it will delete only first element of array
}