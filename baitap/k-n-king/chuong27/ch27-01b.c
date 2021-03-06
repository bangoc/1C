/* Tìm nghiệm của phương trình 5x**2 + 2x + 1 = 0 */

#include <complex.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
  double a = 5, b = 2, c = 1;
  printf("Nhập các hệ số: ");
  scanf("%lf%lf%lf", &a, &b, &c);
  double discriminant = b * b - 4 * a * c;
  if (discriminant < 0) {
    double complex discriminant_sqrt = csqrt(discriminant);
    double complex root1 = (-b + discriminant_sqrt) / (2 * a);
    double complex root2 = (-b - discriminant_sqrt) / (2 * a);

    printf("Nghiệm 1 = %g + %gi\n", creal(root1), cimag(root1));
    printf("Nghiệm 2 = %g + %gi\n", creal(root2), cimag(root2));
  } else if (discriminant > 0) {
    double discriminant_sqrt = sqrt(discriminant);
    double root1 = (-b + discriminant_sqrt)/2/a,
           root2 = (-b - discriminant_sqrt)/2/a;
    printf("Nghiệm 1: %lf\n", root1);
    printf("Nghiệm 2: %lf\n", root2);
  } else {
    printf("Nghiệm kép: %lf\n", -b/2/a);
  }
  return 0;
}
