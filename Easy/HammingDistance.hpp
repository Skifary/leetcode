//
//  HammingDistance.hpp
//  LeetCode
//
//  Created by Skifary on 16/05/2017.
//  Copyright © 2017 Skifary. All rights reserved.
//

/*
 *  461. Hamming Distance
 *
 *  The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
 *
 *  Given two integers x and y, calculate the Hamming distance.
 *
 *  Note:
 *  0 ≤ x, y < 231.
 *
 */

/*
 *  汉明距离就是同等长度字符串不同字符的个数，或者是二进制数中 不同位数的个数
 *  
 *  例子：
 *
 *  0001 和 0000 汉明距离为1
 *  0010 和 1101 汉明距离为4
 *  0000 和 0000 汉明距离为0
 */

#ifndef HammingDistance_hpp
#define HammingDistance_hpp

#include <stdio.h>

namespace LeetCode {
    
    int hammingDistance(int x, int y);
    
}

#endif /* HammingDistance_hpp */
