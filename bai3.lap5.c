#include <stdio.h>

void hoanVi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Truoc hoan vi: x = %d, y = %d\n", x, y);

    hoanVi(&x, &y);   

    printf("Sau hoan vi: x = %d, y = %d\n", x, y);

    return 0;
}

