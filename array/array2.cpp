#include<iostream>
using namespace std;
int linearSearch(int arr[], int sz, int target){
    for (int i = 0; i < sz; i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
        
    }
    return -1;
    
}
int main(){
    int arr[] = {11, 12, 45, 1, 54, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 1;

    int result = linearSearch(arr, size, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}