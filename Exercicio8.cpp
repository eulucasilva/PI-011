#include <iostream>

using namespace std;

bool isPrimo(int num) {

    int contador = 0;

    for (int i = 1; i <= num; i++) {
        if(num % i == 0){
            contador++;
        }
    }
        
    if (contador == 2) {
        return true;
    }

    return false;
}

int conta_primos(int *vet, int qtde) {
    int contador = 0;

    for (int i = 0; i < qtde; i++) {
        if (isPrimo(vet[i])) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int tamanho;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;

    int vetor[tamanho];

    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor[i];
    }

    int quantidade_primos = conta_primos(vetor, tamanho);

    cout << "Quantidade de números primos no vetor: " << quantidade_primos << endl;

    return 0;
}
