//
//  my.c
//  demo_c
//
//  Created by David Zhang on 2021/10/7.
//

#include "my.h"
//计算从m加到n的和
int sum(int m, int n) {
    int i, sum = 0;
    for (i = m; i <= n; i++) {
        sum += i;
    }
    return sum;
}
