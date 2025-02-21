#include<iostream>
using namespace std;
// * 
// * * 
// * * *
// * * * *


// int main(){
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i+1; j++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
        
//     }
    
// }

// 1
// 22
// 333
// 4444

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i+1; j++)
//         {
//             cout<<i+1<<" ";
//         }
//         cout<<endl;
        
//     }
    
// }

// A
// BB
// CCC
// DDDD

int main(){
    int n;
    cin>>n;
    
    for (int i = 1; i < n+1; i++)
    {
        char ch='A'+i-1;
        
        for (int j = 1; j < i+1; j++)
        {
            cout<<ch<<" ";
            
            
        }
        cout<<endl;
        
    }
    
}