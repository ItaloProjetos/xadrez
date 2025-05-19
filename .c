#include <stdio.h>

// ===== Funções Recursivas =====
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ===== Função com Loops Aninhados: Cavalo =====
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 3; i++) {  // tenta até 3 movimentos
        for (int j = 0; j < 2; j++) {
            if (i == j) continue;  // exemplo de uso de continue
            printf("Cima\n");
}

        if (i == 2) break; // exemplo de uso de break
        printf("Direita\n");
}
}

// ===== Bispo com Loops Aninhados =====
void moverBispoLoops(int casas) {
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    for (int i = 0; i < casas; i++) { // movimento vertical
        for (int j = 0; j < 1; j++) { // movimento horizontal por passo
            printf("Cima Direita\n");
} 
}
}

int main() {
    // Movimento da Torre (Recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do Bispo (Recursivo)
    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(5);

    // Movimento da Rainha (Recursivo)
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do Cavalo (Loops Aninhados)
    moverCavalo();

    // Movimento do Bispo com Loops Aninhados
    moverBispoLoops(5);

    return 0;
}
