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
    std::cout << "Hello World!\n";
}

