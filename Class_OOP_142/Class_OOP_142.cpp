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
};


int main()
{
    std::cout << "Hello World!\n";
}

