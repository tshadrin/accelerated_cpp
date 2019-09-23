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
    const int l_pad = 6, r_pad = 9, t_pad = 7, b_pad = 5;
    const int rows = t_pad + b_pad + 3;
    const string::size_type cols = greeting.length() + l_pad + r_pad + 2;
    for(int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        while(c != cols) {
            if(r == t_pad + 1 && c == l_pad + 1) {
                cout << greeting;
                c += greeting.length();
            } else {
                if(r == 0 || r == rows - 1 ||
                   c == 0 || c == cols -1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }
        cout << endl;
    }
}
