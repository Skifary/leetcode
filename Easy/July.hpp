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
    
    namespace MergeTrees{

        /*
         *   617. Merge Two Binary Trees
         */
        
        TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2);
    }
    
    namespace AverageOfLevels {
        
        /*
         *   637. Average of Levels in Binary Tree
         */

        vector<double> averageOfLevels(TreeNode* root);
    };
    
}



#endif /* July_hpp */
