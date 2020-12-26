#include <stdio.h>
#include <math.h>

void vratiKorijen(int broj) {
  float x;
  x = sqrt(broj);
  printf("korijen broja %d je %.2f ", broj,x);

};

int main(){
  int n;
  printf("unesite broj koji zelite pretvoriti u korijen tog broja: ");
  scanf("%d", &n);
  if(n > 0){
    vratiKorijen(n);
  }
  else{
    printf("unesi broj koji je veci od nula");
    scanf("%d", &n);
  }
  
  return 0;
}