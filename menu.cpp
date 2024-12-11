#include <iostream>
using namespace std;

// Variabel global
int n;

// Fungsi untuk menampilkan menu
void dMenu() {
    system("cls");
    cout << "Aplikasi Sorting Bubble" << endl;
    cout << "1. Masukan Data" << endl;
    cout << "2. Tampilkan Data" << endl;
    cout << "3. Sorting ASC" << endl;
    cout << "4. Sorting DSC" << endl;
    cout << "5. Exit" << endl;
    cout << "Masukkan angka : ";
}

// Fungsi untuk menampilkan pesan di Menu Pertama
void mPertama(string pesan) {
    system("cls");
    cout << "Hallo, saya 
