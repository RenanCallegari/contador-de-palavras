/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char L;
  char conta;
  int n;
  int f;
  L = 0;
  conta = 0;

  while (L != '\n') {

    scanf("%L", &L);

    if (L == '.' || L == ',' || L == ':' || L == ';' || L == ' ' || L == '!' || L == '?' || L == '-' || L == '\n'){
    if ((conta >= 'a' && conta <= 'z') || conta >= 'A' && conta <= 'Z')){
    n++;
}

  }

  }

  printf("%d\n", n);
  return 0;
}
