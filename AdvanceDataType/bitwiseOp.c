#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long decToBin (int decNum);

int main () {
    int n_1, n_2;
    printf("Enter an integer: ");
    scanf("%d", &n_1);
    printf("Enter another integer: ");
    scanf("%d", &n_2);

    printf("The result of applying the ~ operator on number %d (%lld) is: %lld\n", n_1, decToBin(n_1), ~decToBin(n_1));
    printf("The result of applying the ~ operator on number %d (%lld) is: %lld\n", n_2, decToBin(n_2), ~decToBin(n_2));

    printf("The result of applying the & operator on number %d (%lld) and number %d (%lld) is: %lld\n", n_1, decToBin(n_1), n_2, decToBin(n_2), decToBin(n_1&n_2));
}

long long decToBin(int decNum)
{
    long long binarynum = 0;
    int rem, temp = 1;

    while (decNum!=0)
    {
        rem = decNum%2;
        decNum = decNum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    return binarynum;
}

