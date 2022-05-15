#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
cout<<"\t\tArray Data Mahasiswa\t\t\n";
cout<<"====================================================\n";
int n;
cout<<"Jumlah Data = "; cin>>n;
string mahasiswa[n][3];
int nim[10];
for (int i=0; i<n; i++){
cout<<"Data ke-" <<i << endl;
for (int j=0;j<3;j++){
if (j==0){
cout<<"Nim\t= ";cin >> nim[i];
}else if(j==1)
cout<<"Nama\t= ";
else{
cout<<"Prodi\t= ";
}getline(cin,mahasiswa[i][j]);
}
}
cout<<"Data mahasiswa yang disimpan" <<endl;
cout<<"=============================" <<endl;
cout<<"No\tNim\t\tNama\t\tProdi" <<endl;
for (int i=0; i<n;i++){
cout<<i<<"\t"<<nim[i]<<"\t"<<mahasiswa[i][1]<<"\t" <<mahasiswa[i][2] <<endl;
}
getch();
}