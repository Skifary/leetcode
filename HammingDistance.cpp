//
//  HammingDistance.cpp
//  LeetCode
//
//  Created by Skifary on 16/05/2017.
//  Copyright © 2017 Skifary. All rights reserved.
//

#include "HammingDistance.hpp"


int hammingDistance(int x, int y)
{
    int res = 0, exc = x ^ y; //异或得到不同位数 例如 0010 ^ 0000 = 0010
    while (exc) {
        ++res;
        exc &= (exc - 1); //快速移调左右边的一位 例如   0010 & 0010-1 = 0000    1110 & 1110-1 = 1100    这样循环多少次就代表有不同位
    }
    return res;
}
