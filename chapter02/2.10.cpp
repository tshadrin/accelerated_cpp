#include <iostream>

int main()
{
    int k = 0, n = 20;
    while(k != n) {
        using std::cout;
        cout << "*";
        ++k;
    }
    std::cout << std::endl;
}
