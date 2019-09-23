#include <iostream>
#include <string>

using std::cin; using std::endl;
using std::cout; using std::string;
int main()
{
    cout << "Enter your name: ";
    string name;
    cin >> name;
    cout << "Enter num spaces: ";
    unsigned pad;
    cin >> pad;
    const string greeting = "Hello, " + name + "!";
    const unsigned rows = pad * 2 + 3;
    const string::size_type cols = greeting.length() + pad * 2 + 2;
    cout << endl;

    for(unsigned r = 0; r != rows; ++r) {
        string::size_type c = 0;
        while(c != cols) {
            if(r == pad + 1U && c == pad + 1U) {
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
