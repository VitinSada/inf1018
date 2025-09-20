#include <stdio.h>

char S2[] = {65, 108, 111, 32, 123, 103, 97, 108, 101, 114, 97, 125, 33, 0};

int main (void) {
  char *pc = S2;
  while (*pc)
    printf ("%c", *pc++);
  printf("\n");
  return 0;
}
.data
#char S2[] = {65, 108, 111, 32, 123, 103, 97, 108, 101, 114, 97, 125, 33, 0};
S2: .byte 65, 108, 111, 32, 123, 103, 97, 108, 101, 114, 97, 125, 33, 0

.text
globl main
main:

movq $S2, %rbx
cmpb $0, (%rbx)
je fora_while

movsbl (%rbx), %eax
/*************************************************************/
/* este trecho imprime o valor de %eax (estraga %eax)  */
  movq    $Sf, %rdi    /* primeiro parametro (ponteiro)*/
  movl    %eax, %esi   /* segundo parametro  (inteiro) */
  movl  $0, %eax
  call  printf       /* chama a funcao da biblioteca */
/*************************************************************/
incq