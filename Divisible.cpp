#include <iostream>

using namespace std;

int main(){

    int x;
    int y;

    cout << "Ingrese dividendo: ";
    cin >> x;
    cout << "Ingrese divisor: ";
    cin >> y;

    if(x%y == 0){
        cout << "Es divisble";
    }
    else
    {
        cout << "No es divisible";
    }
    
    return 0;
}