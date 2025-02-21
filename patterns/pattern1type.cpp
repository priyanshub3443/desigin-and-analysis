// square patterns
// 1234
// 1234
// 1234
// 1234

#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int  i=1;i <= n;i++){
//         for (int j = 1; j <= n; j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
        
//     }
// }

// ****
// ****
// ****
// ****

// int main(){
//     int n;
//     cin>>n;

//     for(int  i=1;i <= n;i++){
//         for (int j = 1; j <= n; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
        
//     }
// }

// A B C D
// A B C D
// A B C D
// A B C D

int main(){
    int n;
    cin>>n;

    for(int  i=1;i <= n;i++){
        char ch='A';
        for (int j = 1; j <= n; j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
        
    }
}