#include <stdio.h>
#include <math.h>

int vratiMean(int sumOfNumbers, int allNumbers){
  float result;
  result = (float)sumOfNumbers/allNumbers;
  return result;
}

int main(){
  int suma = 0;
  int n;
  int numbers;
  printf("enter the number of numbers: ");
  scanf("%d", &n);
  for (int i=0; i<n; i++){
      printf("enter number %d ", i+1);
      scanf("%d", &numbers);
      suma+=numbers;
  }
  float aritmetMean;
  aritmetMean = vratiMean(suma, n);
  printf("arithmetic mean is %.2f: ", aritmetMean );
}