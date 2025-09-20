#include <stdio.h>

void dump (void *p, int n) {
  unsigned char *p1 = p;
  while (n--) {
    printf("%p - %02x\n", p1, *p1);
    p1++;
  }
}

int main() {
    signed char sc = -1;  // -1 em signed char
    unsigned int ui = sc; // Atribuindo signed char a unsigned int

    printf("Representação binária de ui: ");
    dump(&ui, sizeof(ui));  // Exibe a representação binária de ui

    printf("Valor decimal de ui: %u\n", ui); // Exibe o valor decimal de ui
    return 0;
}