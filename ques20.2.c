#include <stdio.h>
#include <math.h>

int main() {
  int long long n;
  printf("Enter a decimal number: ");
  scanf("%lld", &n);
  long long bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }
  printf("Number in binary =  %lld ", bin);
  return 0;
}
