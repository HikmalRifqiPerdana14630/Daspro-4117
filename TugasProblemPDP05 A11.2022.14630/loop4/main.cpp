#include <iostream>

using namespace std;

int main()
{
    cout << "Soal No 4\n" << endl;
    float total,rata;
    for(int e=1;e<=20;e++){
        cout << e << endl;
        total = total + e;
        rata = total/20;
    }
        cout << "Total : "<< total << endl;
        cout << "Rata-Rata : " << rata << endl;
    return 0;
}
