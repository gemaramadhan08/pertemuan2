#include<iostream>
using namespace std;

int main(){

    int nilai1, nilai2, hasil;

    cout << "Masukkan nilai pertama: ";cin >> nilai1;
    cout << "Masukkan nilai kedua: ";cin >> nilai2;

    hasil = nilai1 + nilai2;
    cout << nilai1 << " + " << nilai2 << " = " << hasil << endl;

    hasil = nilai1 - nilai2;
    cout << nilai1 << " - " << nilai2 << " = " << hasil << endl;

    hasil = nilai1 * nilai2;
    cout << nilai1 << " * " << nilai2 << " = " << hasil << endl;

    hasil = nilai1 / nilai2;
    cout << nilai1 << " / " << nilai2 << " = " << hasil << endl;


    cin.get();
    return 0;
}
