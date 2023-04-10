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
public:void input() {
    cout << "Masukkan NIM : ";
    cin >> nim;
    cout << "Masukkan Nama : ";
    cin >> nama;
};

      class Matakuliah {
      private:
          string kode;
          string namaM;
          int sks;
      public:
          void input() {
              cout << "\nMasukkan kode Matakuliah : ";
              cin >> kode;
              cout << "\nMasukkan Nama Matakuliah : ";
              cin >> namaM;
              cout << "Jumlah SKS : ";
              cin >> sks;
          }
          void tampil() {
              cout << "Kode Matakuliah : " << kode;
              cout << "\nNama Matakuliah : " << namaM;
              cout << "\nSKS : " << sks;
          }
      };

      int main()
      {
          Mahasiswa mhs1;
          Matakuliah mk;

          mhs1.input();
          mhs1.cetak();
          mk.input();
          mk.tampil();
      }
};
