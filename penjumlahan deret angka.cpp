#include <iostream>
using namespace std;

int main() {
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int i, n, bilangan;
    float jumlah;
    
    cout << "Penjumlah Deret Bilangan" << endl;
    cout << "Masukkan banyaknya bilangan= ";
    cin >> n;
    
    jumlah = 0;
    i = 1;
    do {
        cout << "Masukkan bilangan ke-" << i << "= ";
        cin >> bilangan;
        jumlah = jumlah + bilangan;
        i++;
    } while (i <= n);
    
    cout << "Jumlah deret bilangan tersebut = " << jumlah << endl;
  
  return 0;
}