#include <iostream>

using namespace std;

int main()
{
    int x;
    x = 1;
    do {
        if (x%5==0)
        cout << x << endl;
        x++;
    }while(x<40);
    return 0;
}
