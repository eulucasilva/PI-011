#include <iostream>

float calc_serie(int N) {
    int numerador = 1;
    int denominador = N;
    float resultado = 0.0;

    for (int i = 0; i <= N; i++) {
        resultado += numerador / denominador - i ;
        denominador ++;
    }

    for (int i = N; i <= 1; i++) {
        resultado += denominador / numerador - i ;
        denominador ++;
    }

    return resultado;
}

int main() {
    int N;

    std::cout << "Digite um número inteiro N: ";
    std::cin >> N;

    float resultado = calc_serie(N);

    std::cout << "O valor da série para N = " << N << " é: " << resultado << std::endl;

    return 0;
}
