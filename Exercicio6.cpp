#include <iostream>

using namespace std;

int *intercala(int *vetor1, int tam1, int *vetor2, int tam2) {
    int resultado[tam1+tam2];
    int i = 0, j = 0;

    while (i < tam1 && j < tam2) {
        resultado[i++];
        resultado[j++];
    }

    
    while (i < tam1) {
        resultado[i++];
    }

    while (j < tam2) {
        resultado[j++];
    }

    return resultado;
}

int main() {

    int tamanho1, tamanho2;
    int vetor1[tamanho1];
    int vetor2[tamanho2];


    cout << "Digite o tamanho do primeiro vetor: ";
    cin >> tamanho1;

    cout << "Digite os elementos do primeiro vetor:" << endl;
    for (int i = 0; i < tamanho1; i++) {
        int elemento;
        cin >> elemento;
        vetor1[i] = elemento;
    }

    cout << "Digite o tamanho do segundo vetor: ";
    cin >> tamanho2;

    cout << "Digite os elementos do segundo vetor:" << endl;
    for (int i = 0; i < tamanho2; i++) {
        int elemento;
        cin >> elemento;
        vetor2[i] = elemento;
    }

    
    int *resultado = intercala(vetor1, tamanho1, vetor2, tamanho2);

    cout << "Vetor intercalado:" << endl;
    for (int i = 0; i < tamanho1 + tamanho2; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    return 0;
}
