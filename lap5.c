#include <stdio.h>

float TimSoLonNhat(float a , float b , float c) {
    float max = a;
    if(b > max) {
        max = b;
    }
    if(c > max) {
        max = c;
    }
    return max;
}

int main() {
    float a, b, c;
    printf("Nhap 3 so: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("So lon nhat trong 3 so la: %.2f\n", TimSoLonNhat(a, b, c));

    return 0;
}