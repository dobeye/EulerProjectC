//
// Created by dobeye on 12/19/2021.
//

#ifndef WALKER_PROBLEM3_H

#define v3 600851475143
#define MAX(a,b) (((a) > (b)) ? (a) : (b))

int maxPrimeFactor(long long inp) {
    if (inp == 1)
        return 1;

    int factor = 0;
    for (int i = 2; i <= inp; ++i)
        if (inp % i == 0) {
            factor = i;
            break;
        }

    return MAX(factor, maxPrimeFactor(inp / factor));

}
#define WALKER_PROBLEM3_H

#endif //WALKER_PROBLEM3_H
