#include <iostream>
#include <fstream>  // Untuk operasi file
#include <cmath>    // Untuk fungsi matematika tambahan

using namespace std;

int main() {
    // Deklarasi variabel
    double angka1, angka2, hasil;
    int pilihan;

    cout << "===Pilihlah operasi===" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. pembagian" << endl;
    cout << "Masukkan pilihan (1, 2, 3, atau 4) : ";
    cin >> pilihan;
    
    cout << "" << endl;

    // Input
    cout << "===Masukkanlah dua angka yang akan dihitung===" << endl;
    cout << "Angka pertama: ";
    cin >> angka1;
    cout << "Angka kedua: ";
    cin >> angka2;


    // Proses dengan conditional statement
    if (pilihan == 1) {
        hasil = angka1 + angka2;
    } else if (pilihan == 2) {
        hasil = angka1 - angka2;
    } else if (pilihan == 3) {
        hasil = angka1 * angka2;
    } else if (pilihan == 4) {
        hasil = angka1 / angka2;
    } else {
        cout << "" << endl;
        cout << "Pilihan operasi hitung tidak valid!" << endl;
        return 1; // Keluar dari program dengan kode kesalahan
    }

    // Output ke terminal
    cout << "Hasil dari operasi adalah: " << hasil << endl;

    return 0;
}
