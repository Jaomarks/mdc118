
#include <stdio.h>

int main() {
  /*entrada*/
  float n_a1 = 0.0f;
  float n_a2 = 0.0f;

  printf("Digite sua nota de 0 a 10, para calcular o valor ");
  scanf("%f", &n_a1);

  printf("digite a nota da sua A2 entre 0 a 10 ");
  scanf("%f", &n_a2);
  /*processamento*/
  float media_final = (0.4f * n_a1) + (0.6f * n_a2);
  printf("a media final %f\n", media_final);

  return 0;
}