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
    cout << "Hallo, saya menu " << pesan << endl;
    system("pause");
}

int main() {
    char pl;
    int data[100]; // Variabel lokal

    // Looping menu
    do {
        dMenu();
        cin >> pl;

        switch (pl) {
            case '1':
                system("cls");
                cout << "Masukkan jumlah data: ";
                cin >> n; // Set variabel n
                cout << "Masukkan data:\n";
                for (int i = 0; i < n; i++) {
                    cout << "Data ke-" << i + 1 << ": ";
                    cin >> data[i];
                }
                cout << "Data berhasil dimasukkan.\n";
                system("pause");
                break;
            case '2':
                system("cls");
                if (n == 0) {
                    cout << "Belum ada data yang dimasukkan.\n";
                } else {
                    cout << "Data yang telah dimasukkan:\n";
                    for (int i = 0; i < n; i++) {
                        cout << "Data ke-" << i + 1 << ": " << data[i] << endl;
                    }
                }
                system("pause");
                break;
            case '3':
                mPertama("Ke-3");
                break;
            case '4':
                mPertama("Ke-4");
                break;
            case '5':
                break;  // Keluar dari loop
            default:
                system("cls");
                cout << "Pilihan Tidak Tersedia" << endl;
                system("pause");
                break;
        }

    } while (pl != '5');

    return 0;
}
