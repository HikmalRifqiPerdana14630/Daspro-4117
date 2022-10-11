#include <iostream>

using namespace std;

int main()
{
    cout << "Hikmal Rifqi Perdana \nA112214630 \n4117 \n------------------------------------------------------------------------------------------------------------------------" <<endl;

    int i=1, j=1, l=0;

    cout << "\nDeret Fibonacci Bilangan Terbesar Kurang Dari 100 : " << i << ", " << j << ", ";

    l=i+j;

    while (l < 100){
        cout << l << ", ";
        i=j;
        j=l;
        l=i+j;
    }
    cout << "\n\n------------------------------------------------------------------------------------------------------------------------" <<endl;

    return 0;
}
