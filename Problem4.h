//
// Created by dobeye on 12/19/2021.
//

#ifndef WALKER_PROBLEM4_H

#include <math.h>
#define v4 3

int maxPalProdByMag(int mag) {
    int ret = 0;
    for (int i = pow(10, mag - 1); i < pow(10, mag); ++i)
        for (int j = pow(10, mag - 1); j < pow(10, mag); ++j) {
            int con = i * j;

            int len = 0;
            for (int k = con; k > 0; ++len)
                k = (int)(k / 10);

            int pal = 1;
            for (int k = 0; k < len / 2; ++k)
                if (((int)(con / pow(10, k)) - (int)(con / pow(10, k + 1)) * 10) != ((int)(con / pow(10, len - k - 1)) - (int)(con / pow(10, len - k)) * 10))
                    pal = 0;

            if (pal && (con > ret))
                ret = con;
        }

    return ret;
}
#define WALKER_PROBLEM4_H

#endif //WALKER_PROBLEM4_H
