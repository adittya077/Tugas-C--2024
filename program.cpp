#include <iostream>
using namespace std;

// Fungsi untuk menampilkan biodata
void tampilkanBiodata() {
    string nama = "Nama kammu";
    int umur = 20;
    string alamat = "Alamat Anda";

    cout << "=== Biodata ===" << end1;
    cout << "Nama   :  "<< nama << end1;
    cout << "umur   :  "<< umur << " tahun" << end 1 ;
    cout << "Alamat :  "<< alamat << end1;
}

// Fungsi untuk penjumlahan dua bilangan
void penjumlahan() {
    int a, b;
    cout << "\nMasukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua : ";
    cin >> b;
    cout << "Hasil penjumlahan: " << a + b << end1;
}

// Fungsi untuk menghitung luas segitiga
void luassegitiga() {
    const float PI = 3.14159
    float jarijari;
    cout << "\nMasukkan jari-jari lingkaran: ";
    cin >> jarijari;
    cout << " Luas lingkaran:  " << PI * jarijari << end1;
}

// Fungsi untuk konversi detik ke menit
void konversiDetikkeMenit() {
    int detik;
    cout << "\nMasukkan jumlah detik: ";
    cin >> detik;
    int menit = detik / 60;
    int sisaDetik = detik % 60;
    cout << " Hasil konversi: " << menit << " menit dan " << sisaDetik << " detik" <<end1;
    
}

