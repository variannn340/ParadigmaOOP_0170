#include <iostream>
using namespace std;

class Mahasiswa 
{


    public: // Akses Modifier
    int NIM;
    string nama;
    float nilai;

    void pirntData()
    {
        cout << "NIM = " << NIM << endl;
        cout << "Nama = " << nama << endl;
        cout << "Nilai = " << nilai << endl;
    }

};

int main()
{
   Mahasiswa.mhs; // deklarasi objek mhs dari class Mahasiswa 

   mhs.NIM = 2024;
   mhs.nama = "Sule";
   mhs.nilai = 75.5;
   
   mhs.printData();