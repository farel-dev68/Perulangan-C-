#include <iostream>
using namespace std;

int main() {
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int m, n;
    cout<<"Mencari FPB dengan do...while"<<endl;
    cout << "Masukan bilangan pertama= ";
    cin >> m;
    cout << "Masukan bilangan kedua= ";
    cin >> n;

    do {
        m = m * n;
        n--;
    } while (n != 0);

    cout << "FPB dari bilangan tersebut= " << m << endl;
    return 0;
}