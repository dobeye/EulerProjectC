//
// Created by dobeye on 12/19/2021.
//

#ifndef WALKER_PROBLEM6_H

#include <math.h>

#define v6 2

double squareSumSumSquareByMag(int mag) {
    double sum_square = 0;
    for (int i = 1; i <= pow(10, mag); ++i)
        sum_square += i;
    sum_square = pow(sum_square, 2);

    double square_sum = 0;
    for (int i = 1; i <= pow(10, mag); ++i)
        square_sum += pow(i, 2);


    return sum_square - square_sum;
}

#define WALKER_PROBLEM6_H

#endif //WALKER_PROBLEM6_H
