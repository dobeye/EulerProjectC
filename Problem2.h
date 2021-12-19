//
// Created by dobeye on 12/19/2021.
//

#ifndef WALKER_PROBLEM2_H

#define v2 4000000

int checkEven(int x) {
    return (1 - (x % 2));
}

int fibNumByIndex(int stop) {
    int x = 1, y = 1;
    for (int i = 2; i < stop; ++i) {
        if (checkEven(i))
            y += x;
        else x += y;
    }

    if (checkEven(stop))
        return x;
    else return y;
}

int sumByFibIfEven(int lim) {
    int ret = 0, x = 0;
    for (int i = 1; x < lim; ++i) {
        x = fibNumByIndex(i);
        if (checkEven(x))
            ret += x;
    }

    return ret;
}
#define WALKER_PROBLEM2_H

#endif //WALKER_PROBLEM2_H
