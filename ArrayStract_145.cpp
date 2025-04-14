#include <iostream>
using namespace std;

string nama[]= {"joko,","bejo","bejo"};
float kecepatan[3] ={75.3,83.7,99.9};
float waktu [4];



int main(){
cout<<"tata ke_2 "<<nama[1]<<endl;
nama[1]="gibran"; 
cout<<"tata ke_2 "<<nama[1]<<endl;

for (int i=0; i<3; i++)
{

    cout<<"kecepatan ke_ " << i+1 <<"="<< kecepatan[i]<<endl;
}
for (int i=0; i<4; i++)
{
    cout <<"data ke-"<<i+1<<endl;

    cout<<"masukan waktu ";
    cin>>waktu[i];
}
  
    

cout<<endl;
cout<<"show thw time"<<endl;
cout<<endl;


for(int i=0; i<4; i++)
{
    cout<<"waktu ke_"<<i+1<<"="<<waktu[i]<<endl;
}


}