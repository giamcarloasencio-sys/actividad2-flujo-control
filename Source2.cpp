#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double sueldoMensual;
    double sueldoAnual;
    double isrAnual = 0;
    double isrMensual;

    cout << "======================================" << endl;
    cout << "      CALCULADORA DE ISR (DGII)" << endl;
    cout << "======================================" << endl;

    cout << "Ingrese el sueldo mensual: RD$ ";
    cin >> sueldoMensual;

    sueldoAnual = sueldoMensual * 12;

    if (sueldoAnual <= 416220.00)
    {
        isrAnual = 0;
    }
    else if (sueldoAnual <= 624329.00)
    {
        isrAnual = (sueldoAnual - 416220.01) * 0.15;
    }
    else if (sueldoAnual <= 867123.00)
    {
        isrAnual = 31216.00 + ((sueldoAnual - 624329.01) * 0.20);
    }
    else
    {
        isrAnual = 79776.00 + ((sueldoAnual - 867123.01) * 0.25);
    }

    isrMensual = isrAnual / 12;

    cout << fixed << setprecision(2);

    cout << "\n========== RESULTADOS ==========" << endl;
    cout << "Sueldo mensual : RD$ " << sueldoMensual << endl;

    if (isrMensual == 0)
        cout << "ISR mensual    : RD$ 0.00 (No aplica)" << endl;
    else
        cout << "ISR mensual    : RD$ " << isrMensual << endl;

    cout << "Sueldo neto    : RD$ " << sueldoMensual - isrMensual << endl;

    return 0;
}
