#include <stdio.h>

void rei() {
    printf("Rei anda 1 casa para qualquer direcao.\n");
}

void rainha() {
    printf("Rainha anda para qualquer direcao, quantas casas quiser.\n");
}

void torre() {
    printf("Torre anda em linha reta.\n");
}

void bispo() {
    printf("Bispo anda na diagonal.\n");
}

void cavalo() {
    printf("Cavalo anda em formato de L.\n");
}

void peao() {
    printf("Peao anda para frente, uma casa por vez.\n");
}

int main() {
    rei();
    rainha();
    torre();
    bispo();
    cavalo();
    peao();

    return 0;
}
