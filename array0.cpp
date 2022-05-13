#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int i,total;
    int jum_mhs[7]={40,39,41,36,38,34,50};
    total = 0;
    for(i =1 ; i <7 ; i++){
        cout<<"Jumlah Mahasiswa Kelas "<<i<< " : "<<jum_mhs[i]<<endl;
        total+=jum_mhs[i];
    }
    cout<<"\nJumlah Total Mahasiswa = "<<total;
    getch();
}