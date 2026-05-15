#include <iostream>
using namespace std;

int main (){
    int hora;
    cout<<"ingrese la hora de (0-23): ";
    cin >> hora;

    if (hora >= 6 && hora <=11){
        cout<<"mañana"<<endl;
    }
    else if (hora >= 12 && hora <=17){
        cout<<"tarde"<<endl;
    }
    else if (hora >= 18 && hora <=23){
        cout<<"noche"<<endl;
    }
    else if (hora >= 0 && hora <=5){
        cout<<"madrugada"<<endl;
    }
    else {
        cout<<"error"<<endl;
    }
    
}