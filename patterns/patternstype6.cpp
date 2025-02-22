#include<iostream>
using namespace std;

// 1111
//  222
//   33
//    4

// int main(){
// int n;
// cin>>n;

// for (int i = 0; i <n; i++)
// {
//     for (int j = 0; j < i; j++)
//     {
//         cout<<" ";
//     }
//     for (int j = 0; j < n-i; j++)
//     {
//         cout<<i+1;
//     }
//     cout<<endl;
    
    
// }


// }

int main(){
int n;
cin>>n;

for (int i = 0; i <n; i++)
{
    char ch= 'A';
    for (int j = 0; j < i; j++)
    {
        cout<<" ";
    }
    for (int j = 0; j < n-i; j++)
    {
        cout<<ch;
        ch++;
    }
    cout<<endl;
    
    
}


}