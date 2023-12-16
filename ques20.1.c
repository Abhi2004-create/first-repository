#include <stdio.h>
#include <math.h>

//int convert(long long);

int main() {
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }
  printf("Given number in decimal = %d ", dec);
  return 0;
}
// int convert(long long n) {
  
//   return 0;
// }