#include <iostream>
using namespace std;

int main(){
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int bil;
    cout<<"Menentukan Faktorisasii Bilangan"<<endl<<endl;
    cout<<"Masukkan bilangan= ";
    cin>>bil;

    for (int i=1;i<=bil;i++){
        if (bil%i==0){
            cout<<i<<endl;
        }
    }
    return 0;
}