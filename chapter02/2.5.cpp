#include <iostream>

using std::cout; using std::endl;
int main()
{
    int l = 5;
    for(int i = 0; i<l; ++i) {
        for(int k = 0; k<l; ++k)
            cout << "*";
        cout << endl;
    }
    int j = 10;
    for(int i = 0; i<l; ++i) {
        for(int k = 0; k<j; ++k)
            cout << "*";
        cout << endl;
    }
    for(int i = 0; i<l; ++i) {
        for(int k = 0; k<i+1; ++k)
            cout << "*";
        cout << endl;
    }

}
