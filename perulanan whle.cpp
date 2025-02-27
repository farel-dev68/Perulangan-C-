#include <iostream>
using namespace std;

int main(){
    cout<<"Dimas Ikhwan Farel Sulendro"<<endl;
    cout<<"24051030107"<<endl<<endl;

    int i;
    cout<<"Perulanan Menggunakan While"<<endl;

    i=-10;
    while(i>0){
        cout<<i<<endl;
        i--;
    }
    cout<<endl<<"Perulangan menggunakan do...while"<<endl;
    
    do{
        cout<<i<<endl;
        i--;    
    }while(i>0);
    
    return 0;
}