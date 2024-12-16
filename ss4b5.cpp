#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("nhap vao so thu nhat: ");
    scanf("%d", &num1);
    printf("nhap vao so thu 2: ");
    scanf("%d", &num2);
    printf("nhap vao so thu 3: ");
    scanf("%d", &num3);

    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        printf("so %d nam trong khoang giua %d va %d.\n", num3, num1, num2);
    } else {
        printf("so %d kkhong nam trong khoang giua %d va %d.\n", num3, num1, num2);
    }

    return 0;
}
