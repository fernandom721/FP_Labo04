#include <iostream>

using namespace std;

int main (){

    int x;
    float y=0;
    
    for(int i=0;i<3;i++){
        cout << "Ingrese su nota: ";
        cin >> x;
        y += x;
        
    }
    y=y/3;
    cout << "Su promedio es: " << y << endl;
    
    if((y)>=6){
        cout << "Pasa la materia";
    }
    else
    {
        cout << "No pasa la materia";
    }

    return 0;
}