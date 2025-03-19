#include<iostream>
using namespace std;

int main() {
    int arr[]={2, 4, 5, 7, 8, 9};
    int size=5;
    int sum=0;
    int mul=0;

    for (int i = 0; i < size; i++)
    {
        sum=arr[i]+sum;
        
    }
    cout<<"Addition of array"<<sum<<endl;
    
    for (int i = 0; i < size; i++)
    {
        mul=mul +arr[i];
        
    }
    cout<<"Multipication of array"<<mul<<endl;
    
}