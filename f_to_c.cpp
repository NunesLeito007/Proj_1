//Prog simples para conversão de graus Fahrenheit (Fº) para graus Celcius (Cº) com casa decimal

// Inclusão das bibliotecas
#include <iostream>
#include <iomanip>

// Namespace
using namespace std;

// Variáveis globais para Fº e Cº
double fahre, celci;

// Func que pergunta ao usuário quantos graus Fº está fazendo
void fahre_and_celci() {
   
    cout << "Quantos graus Fº está fazendo?\n";
    cin >> fahre;

}

// Func de conversão 
void fahre_to_celci(){

    fahre = fahre - 32;
    fahre = fahre * 5;
    celci = fahre / 9;

}

// Func de print com set de precisão 
void show_celci(){

    cout << "Está fazendo " << fixed << setprecision(1) << celci << " Cº!!\n";

}

// Main
int main() {
    
    fahre_and_celci();
    fahre_to_celci();
    show_celci();
    
    return 0;
}