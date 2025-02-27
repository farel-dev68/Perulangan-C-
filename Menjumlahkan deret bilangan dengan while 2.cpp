#include <iostream>
using namespace std;

int main() {
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int i, jumlah;
    cout << "Menjumlahkan deret bilangan dengan while" << endl << endl;
    
    i = 1;
    jumlah = 0;
    while (i <= 10) {
        cout << "Deret ke " << i << " = " << i << endl;
        jumlah+=i;
        i++;
    }

    cout << "Jumlah deret bilangan = " << jumlah << endl;
    return 0;
}
