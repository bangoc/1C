/* Kiểm tra số xem có chữ số lặp lại hay không */
#include <stdbool.h>  // C99
#include <stdio.h>

int main() {
  bool digit_seen[10] = {0};
  int digit;
  long n;
  printf("Nhập một số: ");
  scanf("%ld", &n);
  bool repeated = false;
  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit]) {
      repeated = true;
      break;
    }
    digit_seen[digit] = true;
    n /= 10;
  }
  if (repeated) {
    printf("Có chữ số lặp lại.\n");
  } else {
    printf("Không có chữ số lặp lại.\n");
  }
  return 0;
}