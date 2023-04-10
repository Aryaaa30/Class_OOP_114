#include <iostream>
using namespace std;

class Mahasiswa {
public:
    string nim;
    string nama;
public: void cetak() {
    cout << "NIM = " << nim;
    cout << "\nNama = " << nama;
    } 
};

class Matakuliah {
private:
    string kode;
    string namaM;
    int sks;
public:
    void input() {
        cout << "Masukkan kode Matakuliah : ";
        cin >> kode;
        cout << "Masukkan Nama Matakuliah : ";
        cin >> namaM:
        cout << "Jumlah SKS : ";
        cin >> sks;
    }
    void tampil() {
        cout << "Kode Matakuliah : " << kode;
        cout << "Nama Matakuliah : " << namaM;
        cout << "SKS : " << sks;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}


