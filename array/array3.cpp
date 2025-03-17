#include<iostream>
using namespace std;

void reveseAnAarry(int arr[], int size){
    int start=0;
    int end=size-1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

int main(){
    int arr[] = {11, 12, 45, 1, 54, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 1;

    reveseAnAarry(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
}