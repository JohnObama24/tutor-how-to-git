/*
Nama Program : vending machine
Nama         : John Obama Morowali Sipahutar
NPM          : 140810260083
Tanggal Buat : 13 September 2026
Deskripsi    : vending machine
*/

#include <iostream>
using namespace std;

int main()
{
    // Your code implementation here
    int pilihan;
    int harga = 0;
    int uang, kembalian;
    string namaMinuman;

    cout << "=== VENDING MACHINE OTOMAT ===" << endl;
    cout << "Pilihan Minuman:" << endl;
    cout << "1. Air Mineral (Rp 4000)" << endl;
    cout << "2. Teh Botol (Rp 6000)" << endl;
    cout << "3. Kopi Susu (Rp 10000)" << endl;

    cout << "Pilih kode minuman (1-3): ";
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
        namaMinuman = "Air Mineral";
        harga = 4000;
        break;
    case 2:
        namaMinuman = "Teh Botol";
        harga = 6000;
        break;
    case 3:
        namaMinuman = "Kopi Susu";
        harga = 10000;
        break;
    default:
        cout << "Kode minuman tidak valid! Silakan pilih 1-3." << endl;
        return 0; 
    }

    cout << "Masukkan uang Anda (Rp): ";
    cin >> uang;

    cout << "\n--- DETAIL TRANSAKSI ---" << endl;

    if (uang < harga)
    {
        int kekurangan = harga - uang;
        cout << "Uang Anda kurang Rp " << kekurangan << "." << endl;
    }
    else
    {
        kembalian = uang - harga;
        cout << "Minuman: " << namaMinuman << endl;
        cout << "Total Kembalian: Rp " << kembalian << endl;

        int lembar5k = kembalian / 5000;
        int sisa = kembalian % 5000;
        int lembar1k = sisa / 1000;

        cout << "Rincian Pecahan:" << endl;
        cout << "- Lembar Rp 5.000 : " << lembar5k << endl;
        cout << "- Lembar Rp 1.000 : " << lembar1k << endl;
    }
    return 0;
}