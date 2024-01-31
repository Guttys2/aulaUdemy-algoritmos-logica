#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main(){

    double base, altura, area, perimetro, diagonal;

    cout << "Base do retangulo: ";
    cin >> base;
    cout << "Altura do retangulo: ";
    cin >> altura;

    area = 0;
    perimetro = 0;
    diagonal = 0;

    area = base * altura;
    perimetro = base * 2 + altura * 2;
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perimetro << endl;
    cout << "DIAGONAL = " << diagonal << endl;


    return 0;
}
