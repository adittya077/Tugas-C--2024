#include <iostream>
using namespace std;

// Fungsi untuk menampilkan biodata
void tampilkanBiodata() {
    string nama = "Nama kammu";
    int umur = 20;
    string alamat = "Alamat Anda";

    cout << "=== Biodata ===" << endl;
    cout << "Nama   :  "<< nama << endl;
    cout << "umur   :  "<< umur << " tahun" << endl;
    cout << "Alamat :  "<< alamat << endl;
}

// Fungsi untuk penjumlahan dua bilangan
void penjumlahan() {
    int a, b;
    cout << "\nMasukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua : ";
    cin >> b;
    cout << "Hasil penjumlahan: " << a + b << endl;
}

// Fungsi untuk menghitung luas segitiga
void luasSegitiga() {
    const float PI = 3.14159;
    float jariJari;
    cout << "\nMasukkan jari-jari lingkaran: ";
    cin >> jariJari;
    cout << " Luas lingkaran:  " << PI * jariJari * jariJari << endl;
}


// Fungsi untuk menghitung luas lingkaran
void luasLingkaran() {
    const float PI = 3.14159;
    float jariJari;
    cout << "\nMasukkan jari-jari lingkaran: ";
    cin >> jariJari;
    cout << "Luas lingkaran: " << PI * jariJari * jariJari << endl;
}

// Fungsi untuk konversi detik ke menit
void konversiDetikKeMenit() {
    int detik;
    cout << "\nMasukkan jumlah detik: ";
    cin >> detik;
    int menit = detik / 60;
    int sisaDetik = detik % 60;
    cout << " Hasil konversi: " << menit << " menit dan " << sisaDetik << " detik" <<endl;
}


int main() {
    int pilihan;
    do {
        cout << "\n=== Menu program ===" << endl;
        cout << "1. Tampilkan Biodata" << endl;
        cout << "2. penjumlahan Dua Bilangan" << endl;
        cout << "3. Menghitung Luas Segitiga" << endl;
        cout << "4. Menghitung Luas Lingkaran" << endl;
        cout << "5. Konversi Detik Ke Menit"  << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1: tampilkanBiodata(); break;
            case 2: penjumlahan(); break;
            case 3: luasSegitiga(); break;
            case 4: luasLingkaran(); break;
            case 5: konversiDetikKeMenit(); break;
            case 6: cout << "Keluar dari program." <<  endl; break;
            default: cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan !=6);

    return 0;

}
