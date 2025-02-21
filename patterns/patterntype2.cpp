// 123
// 456
// 789

#include<iostream>
using namespace std;

// int main(){

//     int n;
//     cin>>n;
//     int num=1;
//     for (int i = 0; i <n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
        
//     }
    
// }

// A B C 
// D E F 
// G H I


int main(){

    int n;
    cin>>n;
    char ch='A';
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
        
    }
    
}