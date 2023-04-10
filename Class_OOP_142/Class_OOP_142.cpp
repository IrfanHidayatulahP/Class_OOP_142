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
};


int main()
{
    std::cout << "Hello World!\n";
}

