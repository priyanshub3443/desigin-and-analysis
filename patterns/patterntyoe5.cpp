#include <iostream>
using namespace std;

// 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// int main(){
//     int n;
//     cin>>n;
//     int num=1;
//     for(int i=1;i<=n;i++){
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;

//     }
// }

// A
// B C
// D E F
// G H I J
int main()
{
    int n;
    cin >> n;
    char ch = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}