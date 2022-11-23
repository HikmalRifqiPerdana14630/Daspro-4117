#include <iostream>

using namespace std;

int main()
{
    cout << "Soal No 2\n" << endl;
    for(int b=1; b<=100;b++){
        if (b%2==1){
            continue;
        }
       cout << "Nilai Genap Adalah " << b << endl;
    }
    return 0;
}
