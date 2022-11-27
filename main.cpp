#include <iostream>
#include <math.h>

/*
    Program Jarak dua titik
    Ket : Program menentukan jarak antara dua titik
    By  : Yudha Rizqia Grafer
    Tgl : 19 Oktober 2022

*/

using namespace std;

int main()
{
    //Kamus
    int x1, x2, y1, y2;
    float jarak, hasil;

    //Algoritma
    cout << "Program menghitung jarak antara 2 titik" << endl;
    cout << "=======================================" << endl;
    cout << "Nilai x1 : ";
    cin >> x1;
    cout << "Nilai x2 : ";
    cin >> x2;
    cout << "Nilai y1 : ";
    cin >> y1;
    cout << "Nilai y2 : ";
    cin >> y2;

    jarak = ( ( x2 - x1 ) * ( x2 - x1 ) ) + ( ( y2 - y1 ) * ( y2 - y1 ) );
    hasil = sqrt (jarak);

    cout << "Jarak : " << hasil << endl;

    return 0;
}
