#include <iostream>
using namespace std;


//    1
//   121
//  12321
// 1234321


int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < i + 1; j++)
        {
            cout << j;
        }

        for (int j = i+1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}