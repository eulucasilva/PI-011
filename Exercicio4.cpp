#include <iostream>

using namespace std;

void calcularSomaSubtracao(int &X, int &Y) {
    int soma = X + Y;
    int subtracao = X - Y;

    X = soma;
    Y = subtracao;
}

int main() {
    int x, y;

    cout << "Digite dois números inteiros: ";
    cin >> x >> y;

    calcularSomaSubtracao(x, y);

    cout << "A soma dos números é: " << x << endl;
    cout << "A subtração dos números é: " << y << endl;

    return 0;
}
