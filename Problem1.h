//
// Created by dobeye on 12/19/2021.
//

#ifndef WALKER_PROBLEM1_H

#define v1 1000

int divThreeOrFive(int x) {
    if (x % 3 == 0 || x % 5 == 0)
        return 1;
    return 0;
}

int sumByDivTOF(int stop) {
    int ret = 0;
    for (int i = 0; i < stop; ++i)
        if (divThreeOrFive(i))
            ret += i;

    return ret;
}
#define WALKER_PROBLEM1_H

#endif //WALKER_PROBLEM1_H
