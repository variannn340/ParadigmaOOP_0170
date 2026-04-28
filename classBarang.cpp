#include <iostream>
using namespace std;


class Barang 
{
    public:
    string nama;
    int    jumlah;
    string kategori;
    string tanggalProduksi;

    void tampilkan()
    {
        cout << "------------------------" << endl;
        cout << "Nama            : " << nama            << endl;
        cout << "Jumlah          : " << jumlah          << endl;
        cout << "Kategori        : " << kategori        << endl;
        cout << "Tanggal Produksi: " << tanggalProduksi << endl;
        cout << "------------------------" << endl;
    }
};

int main() 
{
    Barang elektronik;
    elektronik.nama            = "Laptop ASUS";
    elektronik.jumlah          = 15;
    elektronik.kategori        = "Elektronik";
    elektronik.tanggalProduksi = "10-01-2025";

    Barang nonElektronik;
    nonElektronik.nama            = "Meja Kayu";
    nonElektronik.jumlah          = 30;
    nonElektronik.kategori        = "Non-Elektronik";
    nonElektronik.tanggalProduksi = "05-03-2024";

    cout << "\n[Elektronik]" << endl;
    elektronik.tampilkan();
 
    cout << "\n[Non-Elektronik]" << endl;
    nonElektronik.tampilkan();
 
    return 0;
}