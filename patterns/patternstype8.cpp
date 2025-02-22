#include <iostream>
using namespace std;

// *   
// *    *
//  *  * 
//   *   
//  * *  
// *    *
//  *  *
//   *
// *   *
// *    *
//  *  *
//   *
// *     *
// *    *
//  *  *

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
        cout << "*";
        if (i != 0)
        {
            for (int J = 0; J < 2 * i - 1; J++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j >0 ; j--)
            {
                cout << " ";
            }
            cout << "*";
            if (i != n - 2)
            {
                for (int J = 2 * (n - 2 - i); J >0; J--)
                {
                    cout << " ";
                }
                cout << "*";
            }
            cout << endl;
        }
        }
    }