#include<iostream>
using namespace std;

int main(){

    float r, volume, luas;

    cout << "Masukkan jari-jari: ";
    cin >> r;

    luas = 4 * 3.14 * r * r;
    volume = (4.0 / 3.0) * 3.14 * r * r * r;

    cout << "Maka luas bola adalah: " << luas << endl;
    cout << "Maka volume bola adalah: " << volume << endl;




    cin.get();
    return 0;
}
