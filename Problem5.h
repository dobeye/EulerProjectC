//
// Created by dobeye on 12/19/2021.
//

#ifndef WALKER_PROBLEM5_H

#define v5 20

long long int smallestDivUpTo(int max) {
    for (long long int i = 1; i < 9223372036854775807; ++i) {
        int div = 1;
        for (int j = 1; j <= max; ++j)
            if (i % j != 0) {
                div = 0;
                break;
            }

        if (div)
            return i;
    }

    return -1;
}

#define WALKER_PROBLEM5_H

#endif //WALKER_PROBLEM5_H
