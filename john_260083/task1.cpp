/*
Nama Program : Kasir
Nama         : John Obama Morowali Sipahutar
NPM          : 140810260083
Tanggal Buat : 13 September 2026
Deskripsi    : melakukan perhitungan diskon
*/

#include <iostream>
using namespace std;

int main()
{
    // Your code implementation here

    int totalBelanja;
    int persenDiskon = 0;

    cout << "Masukkan total belanja: ";
    cin >> totalBelanja;

    if (totalBelanja < 0)
    {
        cout << "Harga tidak valid (tidak boleh negatif)!" << endl;
        return 1;
    }

    if (totalBelanja >= 300000)
    {
        persenDiskon = 20;
    }
    else if (totalBelanja >= 100000)
    {
        persenDiskon = 10;
    }

    double potongan = totalBelanja * (persenDiskon / 100.0);
    double totalBayar = totalBelanja - potongan;

    cout << "\n--Ringkasan Pembayaran--" << endl;
    cout << "Diskon (" << persenDiskon << "%): Rp " << potongan << endl;
    cout << "Total bayar : Rp " << totalBayar << endl;

    return 0;
}