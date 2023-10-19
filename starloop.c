#include <stdio.h>
int main() {
int i, j, n;
printf("Enter a number: \n");
scanf("%d", &n);
// Upper half of the pattern
for (i = 1; i <= n; i++) {
// Print spaces
for (j = 1; j <= n - i; j++) {
printf(" ");
}
// Print asterisks and numbers
for (j = 1; j <= 2 * i - 1; j++) {
if (j == 1 || j == 2 * i - 1) {
printf("1");
} else {
printf("*");
}
}
printf("\n");
}
// Lower half of the pattern
for (i = n - 1; i >= 1; i--) {
// Print spaces
for (j = 1; j <= n - i; j++) {
printf(" ");
}
// Print asterisks and numbers
for (j = 1; j <= 2 * i - 1; j++) {
if (j == 1 || j == 2 * i - 1) {
printf("1");
} else {
printf("*");
}
}
printf("\n");
}
return 0;
}
