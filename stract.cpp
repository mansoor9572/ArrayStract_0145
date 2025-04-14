#include <iostream>
using namespace std;
struct Buku{
    string judul;
    string jumlahHalaman;
    string pengarang;
};




int main(){

Buku bk;

cout<<"masukan judul = ";
cin>>bk.judul;
cout<<" masuka jumlahHalaman = ";
cin>>bk.jumlahHalaman;
cout<<"masukan pengarang";
cin>>bk.pengarang;

cout<<endl;
cout <<"tambilikan dat buku"<<endl;
cout<<endl;

cout <<"judul buku "<<bk.judul<<endl;
cout <<"jumlah Halaman buku  "<<bk.jumlahHalaman<<endl;
cout <<"pengarang buku "<<bk.pengarang<<endl;



};