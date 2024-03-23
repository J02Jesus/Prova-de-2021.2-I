#include <stdio.h>

int main() {
  int cartao, hora, u, i, o, p;
  printf("quatro digitos do cartao:\n\n");
  scanf("%d", &cartao);
  printf("digite horas e minutos sem pontos:\n\n");
  scanf("%d", &hora);
  cartao-=hora;

  u=cartao/1000;
  i=(cartao/100)%10;
  o=(cartao/10)%10;
  p=(cartao/1)%10;

  printf("%d%d%d%d", p, o, i, u);
  
  return 0;
}