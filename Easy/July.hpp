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



namespace LeetCode {
    
    namespace MergeTrees{

        /*
         *   617. Merge Two Binary Trees
         */
        
        struct TreeNode {
            int val;
            TreeNode *left;
            TreeNode *right;
            TreeNode(int x) : val(x), left(NULL), right(NULL) {}
        };
        
        TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2);
    }
    
}



#endif /* July_hpp */
