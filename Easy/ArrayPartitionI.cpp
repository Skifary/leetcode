//
//  ArrayPartitionI.cpp
//  LeetCode
//
//  Created by Skifary on 20/05/2017.
//  Copyright © 2017 Skifary. All rights reserved.
//

#include "ArrayPartitionI.hpp"


int LeetCode::arrayPairSum(vector<int> &nums)
{
    int sum = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i += 2) {
        sum += nums[i];
    }
    return sum;
}
