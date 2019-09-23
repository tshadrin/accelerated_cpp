#include <iostream>
#include <string>

using std::cout; using std::endl;

int main()
{
    int result = 1;
    for(int i = 0; i<10; ++i)
        if(i>0)
            result =result * i;
    cout << result << endl;
}
