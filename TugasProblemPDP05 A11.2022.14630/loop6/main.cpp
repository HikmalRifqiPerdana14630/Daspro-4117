#include <iostream>

using namespace std;

int main()
{
    cout << "Soal No 6\n" << endl;
    int maxx,minn;
    for(int h;;){
        cin >> h;
        if (h > maxx){
            maxx=h;
        }
        if (h < minn && h!=-99){
            minn=h;
        }
        if (h==-99){
            cout << "Max : " << maxx << endl;
            cout << "Min : " << minn << endl;
            break;
        }
    }

    return 0;
}
