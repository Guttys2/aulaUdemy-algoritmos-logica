#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, i, j, contagem;
    double media, porcentagem, soma;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    string nome[N];
    int idade[N];
    double altura[N];

    contagem = 0;
    soma = 0;

    for (i = 0; i < N; i++){
        cout << "Dados da " << i + 1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];

        if (idade[i] < 16){
            contagem = contagem + 1;
        }
        soma = soma + altura[i];
    }

    media = 0;
    media = soma / N;

    porcentagem = 0;
    porcentagem = contagem * 100.0 / N;

    cout << endl;
    cout << fixed << setprecision(2) << "Altura media: " << media << endl;
    cout << fixed << setprecision(1) << "Pessoas com menos de 16 anos: " << porcentagem << "%" << endl;

    for (i = 0; i < N; i++){
        if (idade[i] < 16){
            cout << nome[i] << endl;
        }
    }

    return 0;
}
