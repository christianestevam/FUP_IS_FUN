#include <iostream>

using namespace std;
int main(){
    
    int velocidadeKm{}, tempoMinutos{}, consumoLitros{};
    
    cin >> velocidadeKm >> tempoMinutos >> consumoLitros;
    
    float distancia = velocidadeKm * tempoMinutos / 60.0;
    
    float desempenho = distancia / consumoLitros;
    
    printf("%.2f\n", desempenho);
    
    return 0;
    
    
}