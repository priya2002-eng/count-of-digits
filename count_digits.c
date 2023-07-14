#include <stdio.h>
int digit(int n);
int main(){
  long long n;
  int res;

  printf("Enter the input in numbers: ");
  scanf("%lld", &n);

  res = digit(n);
  printf("%d", res);
}

int digit(int n){
  int count = 0;
  do{
    n /= 10;
    count++;
  } while(n != 0);

  return count;
}
