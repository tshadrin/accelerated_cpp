//Надеюсь, я правильно понял автора
#include <iostream>

using std::cout; using std::endl;
int main()
{
    int l = 5;
    for (int i = 0; i<l; ++i) {
        for (int k = 0; k<l; ++k) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    int j = 10;
    for (int i = 0; i<l; ++i) {
        for(int k = 0; k<j; ++k) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i<l+j; i+=2) {
        const std::string stars(i, '*');
        const std::string spaces(((l+j) - i)/ 2, ' ');
        cout << spaces << stars << spaces << std::endl;
    }
}
