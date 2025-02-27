#include <iostream>
using namespace std;

int main(){
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int m,n,r;
    cout<<"Menentukan FPB dari 2 bilangan"<<endl<<endl;
    cout<<"Masukkan bilangan peratma= ";
    cin>>m;
    cout<<"Masukkan bilangan kedua= ";
    cin>>n;

    while (n!=0){
        r=m%n;
        m=n;
        n=r;
    }
    cout<<"FPB dari bilangan tersebut adalah "<<m<<endl;
    return 0;
}