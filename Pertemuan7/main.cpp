#include <iostream>

using namespace std;

int main()
{
    cout << "Hikmal Rifqi Perdana \nA11.2022.14630 \n4117" << endl;
    int a;
    cout << "\nMasukkan Bilangan Genap Antara 25 Sampai 50 : ";
    cin >> a;

    if (a%2==0 && 25<=a && a<=50) {
        cout << "Benar" << endl;
    }
    else {
        cout << "Salah" << endl;
    }

    int b;
    cout << "\nMasukkan Bilangan Ganjil Antara Lebih Dari 13 Atau Kurang Dari 5 : ";
    cin >> b;

    if (b%2==1 && 13<b || b%2==1 && b<5) {
        cout << "Benar" << endl;
    }
    else {
        cout << "Salah" << endl;
    }

    int c;
    cout << "\nMasukkan Bilangan Bulat Antara 25 Sampai 50 Atau Bilangan Ganjil Antara 3 Sampai 15 : ";
    cin >> c;

    if (25<=c && c<=50 || c%2==1 && 3<=c && c<=15) {
        cout << "Benar" << endl;
    }
    else {
        cout << "Salah" << endl;
    }

    int d;
    cout << "\nJurusan : \n1. Teknik Informatika \n2. Teknik Informasi \n3. DKV";
    cout << "\nMasukkan Jurusan Anda : ";
    cin >> d;

    if (d<=1 && d>=1) {
        cout << "Jurusan Anda Adalah Teknik Informatika"<< endl;
    }
    if (d<=2 && d>=2) {
        cout << "Jurusan Anda Adalah Teknik Informasi"<< endl;
    }
    if (d<=3 && d>=3) {
        cout << "Jurusan Anda Adalah DKV"<< endl;
    }
    if (d<1 && d>3) {
        cout << "Jurusan Tidak Diketahui" << endl;
    }

    return 0;
}
