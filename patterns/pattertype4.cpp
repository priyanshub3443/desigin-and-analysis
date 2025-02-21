#include<iostream>
using namespace std;
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// int main(){
//     int n;
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j < i+1; j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// 1
// 21
// 321
// 4321

// int main(){
//     int n;
//     cin>>n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j > 0; j--)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// A 
// BA 
// CBA 
// DCBA

int main(){
    int n;
    cin>>n;
    
    for (int i = 1; i <=n; i++)
    {
        for (int j = i; j >=1 ; j--)
        {
            char ch='A'+j-1;
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    
}