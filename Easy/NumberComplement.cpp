//
//  NumberComplement.cpp
//  LeetCode
//
//  Created by Skifary on 24/05/2017.
//  Copyright © 2017 Skifary. All rights reserved.
//

#include "NumberComplement.hpp"


int LeetCode::findComplement(int num)
{
    unsigned mask = ~0; //取反 11111111
    while (num & mask) mask <<= 1; 
    return num ^ ~mask;
}
