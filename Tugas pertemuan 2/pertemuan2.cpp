#include <iostream>

using namespace std;

//tipe data fungsi,nama fungsi (parameter)
int max (int a,int b){
    if (a>b){
        cout << a << endl;//outputnya bisa diganti
        return a;
    }else {
    cout <<b<<endl;
    return b;
    }
}
int main()
{
   /* int x;//deklarasi
    cout << "Isi nilai perulangan: ";
    cin >> x;

    /*int i = 0;
    while(i < x){
        cout << "Hello world!" << endl;
        i++;

    for(int i = 0; i < x; i++){
        cout << "Hello world!" << endl;
    }

    /*int i = 0;
    while(i < x) {
         cout << "Hello world!" << endl;
         i++;
    }
    }

    int y;
    y=5;

    if (x>y){
        cout << "x lebih dari y" << endl;
    }else if (x<y){
    cout << "x kurang dari y"<< endl;
    }else{ //bisa juga dengan else if (x==y)
    cout << "x sama  dengan y" << endl;
    }
*/

    int x=5;
    int y=20;

/*
if(x > y){
    cout << x << "lebih dari"<< y <<endl;
}else if (x<y){
cout<<x << "kurang dari" <<y<<endl;
}else {
cout<< x <<"sama dengan"<<y <<endl;
}
*/
for(int i =0; i<10; i++){
    x++;//5
    y++;//20
    max(x,y);
}


    return 0;

}
