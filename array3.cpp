#include <iostream>
#include <array>

using namespace std;

int main(){
    // membuat array dengan menggunakan standar library
    // array<int, jumlah array> nama array

    array < int, 5 > nilai;
    
    for(int i = 0 ; i<=4 ; i++ ){
        nilai[i]=i;
        cout << "Nilai [ " << i << "] = "<<nilai[i];
        cout << "Addes : " << &nilai[i] << endl;
    }
    cout<<endl;
    //ukuran array
    cout << "Ukuran "<<nilai.size()<<endl;
    //addres awal dari array
    cout << "Addres awal = " << nilai.begin() << endl;
    //addres akhir dari array
    cout << "Addres akhir = " << nilai.end() << endl;
    //nilai dengan indeks
    cout << "Nilai ke 4 = " << nilai.at(4) << endl;
    cin.get();
    return 0; 
    
}