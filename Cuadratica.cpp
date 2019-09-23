#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a=5;
    int b=20;
    int c=5;

    float pos;
    float neg;
    float discriminante;

    discriminante = pow(b,2)-(4*a*c);
    //cout << discriminante;

    if(discriminante <0){
        cout << "No tiene solucion";
    }
    else    
    {
        //cout << sqrt(discriminante);
        discriminante=sqrt(discriminante);
        //cout << discriminante;
        pos = (-b + discriminante)/(2*a);
        neg = (-b - discriminante)/(2*a);
        
        cout << pos <<endl;
        cout << neg;
    }
    return 0;
}