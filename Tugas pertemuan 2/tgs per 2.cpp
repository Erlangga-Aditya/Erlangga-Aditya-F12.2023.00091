#include <iostream>

using namespace std;

int main()
{
   string Nama,Nim;
   int Usia;
   //menginput namanya mahasiswa,nim sama usia
   cout << "masukin nama :";
   cin >>Nama;
   cout << "masukan nim  :";
   cin >>Nim;
   cout << "Usia:";
   cin >> Usia;

   cout <<"-----------------" <<endl;
   //output semua nama,nim usia

   cout <<"Nama:"<<Nama <<endl;
   cout <<"Nim:"<<Nim <<endl;
   cout <<"Usia:"<<Usia <<endl;

   //looping atau perulangan
    cout <<"--------lopp dengan for---------" <<endl;

    for(int i = 0; i< Usia; i++){
         cout <<Nama<<endl;
    }
    cout <<"-------ini yang pake do -----" <<endl;
    int y = 0;
    do {
        cout << Nama << "\n";
        y++;
    }
    while(y < Usia );


    return 0;
}
