#include <stdio.h>

int isPrime(int x) {
  for (int i = 2; i < x; i++) {
    if (x % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int x;
  scanf("%d", &x);
  if (isPrime(x)) {
    printf("true\n");
  } else {
    printf("false\n");
  }
}