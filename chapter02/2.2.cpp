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
    const int w_pad = 6, h_pad = 7;
    const int rows = h_pad * 2 + 3;
    const string::size_type cols = greeting.length() + w_pad * 2 + 2;
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        while (c != cols) {
            if (r == h_pad + 1 && c == w_pad + 1) {
                cout << greeting;
                c += greeting.length();
            } else {
                if (r == 0 || r == rows - 1 || c == 0 || c == cols -1) {
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
