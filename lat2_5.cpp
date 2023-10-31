#include<iostream>
using namespace std;

int main(){

    long beli, disc, total;

    cout << "Masukkan pembelian: "; cin >> beli;

    if(beli >= 10000){
        disc = 0.1 * beli;
        total = beli - disc;
        cout << "Jadi pembelian adalah: " << beli << endl;
        cout << "Jadi Discount adalah: " << disc << endl;
      cout << "Jadi total pembayaran adalah: " << total << endl;
    }else{
        disc = 0.05 * beli;
        total = beli - disc;
        cout << "Jadi pembelian adalah: " << beli << endl;
        cout << "Jadi Discount adalah: " << disc << endl;
     cout << "Jadi total pembayaran adalah: " << total << endl;
    }

    cin.get();
    return 0;
}
