//
// Created by dobeye on 12/19/2021.
//

#ifndef WALKER_PROBLEM7_H

#include <math.h>
#define v7 10001

int primeByIndex(int index) {
    int con = 2;
    for (int i = 0; i < index; ++con) {
        int prime = 1;
        for (int j = 2; j <= pow(con, 0.5); ++j)
            if (con % j == 0)
                prime = 0;

        if (prime)
            ++i;
    }

    return con - 1;
}

#define WALKER_PROBLEM7_H

#endif //WALKER_PROBLEM7_H
