#include <stdio.h>

int odd_ones(unsigned int x){
  int cont=0;
  while (x){
    x = x & (x - 1);
    cont++;
  }
  return cont;
}

unsigned char switch_byte (unsigned char x){
  unsigned char f=x;
  x=x<<4;
  f=f>>4;
  unsigned nv=x+f;
  return nv;
}

unsigned char rotate_left(unsigned char x, int n){
  unsigned char masc = x;
  x = x << n;
  masc = masc >> (8 - n);
  x = x | masc;
  return x;
}

int main(void) {
  unsigned int x =  0x87654321;
  unsigned int y, z;
  unsigned char w = 0xAB;
  unsigned char lf = 0x61;

  unsigned char nv=rotate_left(lf,7);

  int cont=odd_ones(x);
  unsigned char c=switch_byte(w);

  printf("0x%02x\n" , nv);

  printf("0x%02x\n",c);

  if((cont&1)==1){
    printf("os bits sao impares\n");
  }
  else{
    printf("os bits sao pares\n");
  }

  
  y = x & 0x000000FF;

  
  z = x | 0xFF000000;

  printf("%08x %08x\n", y, z);
  return 0;
}