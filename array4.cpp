#include <iostream>
#include <array>

using namespace std;

int main(){
    cout << endl;
    cout << "Menampilkan nilai mahasiswa \n" << endl;
    array < int,10 > nilai;
    
    for(int i = 0; i <= nilai.size(); i++){
        cout << "Jumlah mahasiswa dengan nilai ";
        if(i==0){
            cout << i*10 << " -" << "9\t= "; 
        }else if(i==10){
            cout << "100\t= ";
        }else{
            cout << i*10 << "-" << (i*10)+9 << "\t= ";
        }
        cin >> nilai[i];
    }
    cout << endl << endl;
    cout << "Grafik Nilai Mahasiswa \n";

    for(int i = 0; i <= nilai.size(); i++){
        cout << "Grafik nilai mahasiswa ";
        if(i==0){
            cout << i*10 << " -" << "9\t= "; 
        }else if(i==10){
            cout << "100\t= ";
        }
        else {
            cout << i*10 << "-" << (i*10)+9 << "\t= ";
        }
        for( int star = 0; star < nilai[i]; star++){
            cout << "*";
        }
        cout << endl;
    }
    cin.get();
    return 0;
}

