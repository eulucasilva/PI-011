#include <iostream>

using namespace std;


void ordenarFloats(float &a, float &b, float &c, float &d) {
    float temp;
    bool troca;

    do {
        troca = false;
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
            troca = true;
        }
        if (b > c) {
            temp = b;
            b = c;
            c = temp;
            troca = true;
        }
        if (c > d) {
            temp = c;
            c = d;
            d = temp;
            troca = true;
        }
    } while (troca);
}

int main() {
    float num1, num2, num3, num4;

    cout << "Digite quatro números float: ";
    cin >> num1 >> num2 >> num3 >> num4;

    ordenarFloats(num1, num2, num3, num4);

    cout << "Números ordenados em ordem crescente: " << num1 << " " << num2 << " " << num3 << " " << num4 << endl;

    return 0;
}
