#include<iostream>
using namespace std;

int main(){

    int panjang, lebar, tinggi, luas, volume;

    cout << "Masukkan panjang: ";cin >> panjang;
    cout << "Masukkan lebar: ";cin >> lebar;
    cout << "Masukkan tinggi: ";cin >> tinggi;

    luas = (2 * panjang * lebar)+(2 * panjang * tinggi)+(2 * tinggi * lebar);
    volume = panjang * lebar * tinggi;

    cout << "\nLuas balok adalah: " << luas << endl;
    cout << "volume balok adalah: " << volume << endl;


    cin.get();
    return 0;
}