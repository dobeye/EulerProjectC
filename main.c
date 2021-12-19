#include <stdio.h>
#include "Problem1.h"
#include "Problem2.h"
#include "Problem3.h"
#include "Problem4.h"
#include "Problem5.h"
#include "Problem6.h"
#include "Problem7.h"

int main() {

    printf("1.The sum of all numbers below %d divisible by 3 or 5 is %d\n", v1, sumByDivTOF(v1));
    printf("2.The sum of all even Fibbonaci numbers smaller than %d is %d\n", v2, sumByFibIfEven(v2));
    printf("3.The largest prime factor of %lld is %d\n", v3, maxPrimeFactor(v3));
    printf("4.The largest palindrome number which is a product of two %d digit numbers is %d\n", v4, maxPalProdByMag(v4));
    printf("5.The largest number divisible by every natural number up to %d is %lld\n", v5, smallestDivUpTo(v5));
    printf("6.The difference between summed squares and squared sums up to %d is %d\n", (int)pow(10, v6), (int)squareSumSumSquareByMag(v6));
    printf("7.The %d prime is %d\n", v7, primeByIndex(v7));

    return 0;
}
