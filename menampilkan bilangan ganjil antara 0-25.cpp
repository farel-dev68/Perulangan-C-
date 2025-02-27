#include <iostream>
using namespace std;

int main(){
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int i;
    cout<<"Menampilkan bilangan ganjil antara 0-25 yang tidak habis dibagi 5"<<endl<<endl;

    i=1;
    while(i<=25){
        if(i%5!=0){
            cout<<i<<endl;
        }
        i+=2;
    }

    return 0;
}