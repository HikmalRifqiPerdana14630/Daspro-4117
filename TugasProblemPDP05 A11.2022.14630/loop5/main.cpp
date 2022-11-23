#include <iostream>

using namespace std;

int main()
{
    cout << "Soal No 5\n" << endl;
    cout << "Program Ini Akan Berhenti Jika Anda Menginputkan Angka -99" << endl;
    for (int f;;){
        cout << "Masukan Nilai Anda : ";
        cin >> f;
        if (f==-99){
        break;
        }
    }
    cout << "\nKeluar Karena Break" << endl;
    return 0;
}
