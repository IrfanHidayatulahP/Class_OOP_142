#include <iostream>
using namespace std;

class Mahasiswa {
public:
    string nim;
    string nama;
public: void Cetak() {
    cout << "NIM = " << nim;
    cout << "Nama = " << nama;
    }
};

class Matakuliah {
private:
    string kode;
    string namaM;
    int sks;
public:
    void input() {
        cout << "Masukkan Kode Matakuliah : ";
        cin >> kode;
        cout << "Masukkan Nama Matakuliah : ";
        cin >> namaM;
        cout << "SKS : ";
        cin >> sks;
    }
    void Tampil() {
        cout << "Kode Matakuliah : " << kode;
        cout << "Nama Matakuliah : " << namaM;
        cout << "SKS : " << sks;
    }
};


int main()
{
    Mahasiswa mhs1;
    Matakuliah mk;

    cout << "Masukkan NIM : ";
    cin >> mhs1.nim;
    cout << "Masukkan Nama : ";
    cin >> mhs1.nama;
    mhs1.Cetak();
    mk.input();
    mk.Tampil();
}

