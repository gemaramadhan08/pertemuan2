#include<iostream>
using namespace std;

int main(){

    int panjang, lebar, luas, keliling;

    cout << "Masukkan panjang: ";cin >> panjang;
    cout << "Masukkan lebar: ";cin >> lebar;

    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);

    cout << "\nLuas persegi panjang adalah: " << luas << endl;
    cout << "Keliling persegi panjang adalah: " << keliling << endl;

    cin.get();
    return 0;
}