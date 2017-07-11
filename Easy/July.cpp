//
//  July.cpp
//  LeetCode
//
//  Created by Skifary on 06/07/2017.
//  Copyright © 2017 Skifary. All rights reserved.
//

#include "July.hpp"


using namespace LeetCode;


using namespace MergeTrees;


TreeNode* MergeTrees::mergeTrees(TreeNode* t1, TreeNode* t2)
{
    if (!t1) {
        return t2;
    }
    if (!t2) {
        return t1;
    }
    TreeNode* result = new TreeNode(t1->val + t2->val);
    
    result->left = mergeTrees(t1->left, t2->left);
    result->right = mergeTrees(t1->right, t2->right);
    return result;
}

