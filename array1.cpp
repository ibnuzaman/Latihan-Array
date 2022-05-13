#include<iostream>
#include<conio.h>
using namespace std;
    int main()
    {
        int i, cari, data[10]={2, 3, 6, 5, 7, 8, 10, 9, 1, 4};
        cout<<"Masukkan nilai yang ingin dicari: ";
        cin>>cari;
    for (i=0; i<10; i++)
    {
            if (data[i]==cari){
            cout<<"\nData yang anda cari berada pada indeks ke-"<<i;
            break;
    }
}
            if (i==10)
        cout<<"Data yang anda cari tidak ditemukan";
        getch();
}