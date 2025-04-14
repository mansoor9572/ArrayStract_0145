#include <iostream>
using namespace std;
#include <string>;

struct Pengaran
{
    string nama;
    string almat;


};


struct Buku
{
    string judul;
    string jumlahHalaman;
    Pengaran pengarang;
};

int main()
{

    Buku bk[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "masukan judul = ";
        getline(cin, bk[i].judul);
        cout << " masuka jumlahHalaman = ";
        cin >> bk[i].jumlahHalaman;
        cin.ignore();
        cout << "masukan pengarang ";
        getline(cin, bk[i].pengarang.nama);
        cout<<"masukan alamat Pengaran = ";
        getline(cin, bk[i].pengarang.almat);

    }

    cout << endl;
    cout << "tambilikan dat buku" << endl;
    cout << endl;

    for (int i = 0; i < 2; i++)
    {
    cout << "judul buku " << bk[i].judul << endl;
    cout << "jumlah Halaman buku  " << bk[i].jumlahHalaman << endl;
    cout << "pengarang buku " << bk[i].pengarang.nama << endl;
    cout << "pengarang buku " << bk[i].pengarang.almat << endl;
    }

    
};