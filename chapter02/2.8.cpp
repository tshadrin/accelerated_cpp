//по идее верное решение
#include <iostream>

using std::cout; using std::endl;

int main()
{
    int result = 1;
    for(int i = 1; i != 10; ++i)
        result = result * i;
    cout << result << endl;
}
