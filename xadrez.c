#include <stdio.h>

// ── TORRE ──────────────────────────────────────
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// ── BISPO ──────────────────────────────────────
void moverBispo(int casas) {
    if (casas == 0) return;

    for (int v = 0; v < 1; v++) {        // loop externo (vertical)
        for (int h = 0; h < 1; h++) {    // loop interno (horizontal)
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// ── RAINHA ─────────────────────────────────────
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverRainha(casas - 1);
}

// ── CAVALO ─────────────────────────────────────
void moverCavalo() {
    int v = 0, h = 0;

    for (v = 0; v < 2; v++) {
        for (h = 0; h < 2; h++) {
            if (h == 0) {
                printf("Cima\n");
                continue;
            }
            if (h == 1) {
                break;
            }
        }
    }
    printf("Direita\n");
}

// ── MAIN ───────────────────────────────────────
int main() {
    int casas = 5;

    printf("=== Torre ===\n");
    moverTorre(casas);

    printf("\n=== Bispo ===\n");
    moverBispo(casas);

    printf("\n=== Rainha ===\n");
    moverRainha(casas);

    printf("\n=== Cavalo ===\n");
    moverCavalo();

    return 0;
}   


 


 


