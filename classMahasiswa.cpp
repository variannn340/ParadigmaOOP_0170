#include <iostream>
using namespace std;

class Mahasiswa 
{


    public: // Akses Modifier
    int NIM;
    string nama;
    float nilai;

    void pirntdata()
    {
        cout << "NIM = " << NIM << endl;
        cout << "Nama = " << nama << endl;
        cout << "Nilai = " << nilai << endl;
    }

};