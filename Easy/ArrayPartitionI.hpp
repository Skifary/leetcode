//
//  ArrayPartitionI.hpp
//  LeetCode
//
//  Created by Skifary on 20/05/2017.
//  Copyright © 2017 Skifary. All rights reserved.
//


/*
 *  561. Array Partition I
 *
 *  Given an array of 2n integers, your task is to group these integers into n pairs of integer,
 *
 *  say (a1, b1), (a2, b2), ..., (an, bn) which makes sum of min(ai, bi) for all i from 1 to n as large as possible.
 *
 */



#ifndef ArrayPartitionI_hpp
#define ArrayPartitionI_hpp

#include <stdio.h>
#include <vector>

using namespace std;

namespace LeetCode {
    
    int arrayPairSum(vector<int>& nums);
    
}


#endif /* ArrayPartitionI_hpp */
