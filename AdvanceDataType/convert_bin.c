#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int convertBinToDec(long long binNum);
double pow(double x, double y);

int main () {
    long long bin;
    printf("input bin: ");
    scanf("%lld", &bin);

    int ans = convertBinToDec(bin);

    printf("%d", ans);
}

int convertBinToDec(long long binNum) {
    int dec = 0, rem = 0;
    double i = 0;
    while (binNum != 0) {
        rem = binNum % 10;
        binNum /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

