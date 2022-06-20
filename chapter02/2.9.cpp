#include <iostream>

using std::cout; using std::endl;
using std::cin;

int main()
{
    int a = 0 ,b = 0;
    cout << "Введите два числа: ";
    cin >> a;
    cin >> b;
    if (a > b) {
        cout << "a > b && a = " << a << endl;
    } else if (a < b) {
        cout << "b > a && b = " << b << endl;
    } else {
        cout << "a = b" << endl;
    }
}
