#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int n, nth, setN, bitStatus;
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Enter nth bit to check and set (0-31):");
    scanf("%d", &nth);

    bitStatus = (n >> nth) & 1;
    printf("The %d bit is set to %d\n", nth, bitStatus);

    setN = (1 << nth) | n;

    printf("Bit set successfully\n");

    printf("Number before setting %d bit: %d (in decimal)\n", nth, n);
    printf("Number after setting %d bit: %d (in decimal)\n", nth, setN);

    return 0;
}