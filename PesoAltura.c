#include <stdio.h>
typedef struct{
    int peso; //peso em quilogramas
    int altura; // altura em centimetros
} PesoAltura;

int main(){
    PesoAltura pessoa;
    pessoa.peso = 82;
    pessoa.altura = 172;
    printf("Peso: %i\n Altura: %i\n" , pessoa.peso, pessoa.altura);
    return 0;
}