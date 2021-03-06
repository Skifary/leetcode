//
//  July.hpp
//  LeetCode
//
//  Created by Skifary on 06/07/2017.
//  Copyright © 2017 Skifary. All rights reserved.
//



/**
 *  七月 LeetCode
 *
 */


#ifndef July_hpp
#define July_hpp

#include <stdio.h>


#include <vector>
using namespace std;


#include <string>

namespace LeetCode {
    
    /**
     tree
     */
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };
    

    /**
     *   617. Merge Two Binary Trees
     */
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2);

    
    /**
     *   637. Average of Levels in Binary Tree
     */
    vector<double> averageOfLevels(TreeNode* root);
    
    
    /**
     *   500. Keyboard Row
     */
    vector<string> findWords(vector<string>& words);
    
    
    /**
     *   557. Reverse Words in a String III
     */
    string reverseWords(string s);
    
    
    /**
     *   566. Reshape the Matrix
     */
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c);
    
    
    /**
     *   575. Distribute Candies
     */
    int distributeCandies(vector<int>& candies);
    
    
    /**
     *   344. Reverse String
     */
    string reverseString(string s);

    
    /**
     *   412. Fizz Buzz
     */
    vector<string> fizzBuzz(int n);
    
    
    /**
     *   496. Next Greater Element I
     */
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums);
    
    
    /**
     *   463. Island Perimeter
     */
    int islandPerimeter(vector<vector<int>>& grid);
    
    
    /**
     *   292. Nim Game
     *
     *      这个题不考编程考脑子
     *
     */
    bool canWinNim(int n);
    
    
    /**
     *   521. Longest Uncommon Subsequence I
     *
     *      这个题有点蠢
     *
     */
    int findLUSlength(string a, string b);
    
    
    /**
     *   485. Max Consecutive Ones
     */
    int findMaxConsecutiveOnes(vector<int>& nums);
    
    
    /**
     *   104. Maximum Depth of Binary Tree
     */
    int maxDepth(TreeNode* root);
}



#endif /* July_hpp */
