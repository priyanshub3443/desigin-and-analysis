#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {12, 34, 56, 78, 56, 89};

    // Printing the size of the vector
    cout << "Size of the vector: " << vec.size() << endl;

    // Printing the elements of the vector
    cout << "Elements of the vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
