#include <iostream>
#include <string>

using std::cin; using std::endl;
using std::cout; using std::string;
int main()
{
    cout << "Enter your name: ";
    string name;
    cin >> name;
    const string greeting = "Hello, " + name + "!";

    const int pad = 1;
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.length() + pad * 2 + 2;
    cout << endl;

    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        while (c != cols) {
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.length();
            } else {
                if(r == 0 || r == rows - 1 || c == 0 || c == cols -1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
                ++c;
            }
        }
        cout << endl;
    }
}
