//
//  July.cpp
//  LeetCode
//
//  Created by Skifary on 06/07/2017.
//  Copyright © 2017 Skifary. All rights reserved.
//

#include "July.hpp"


using namespace LeetCode;


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


vector<double> AverageOfLevels::averageOfLevels(TreeNode* root)
{
    vector<double> result;
    double sum = 0.0;
    int count = 0;
    vector<TreeNode *> tmp;
    tmp.push_back(root);
    tmp.push_back(nullptr);
    while (!tmp.empty()) {
        TreeNode *node = tmp.front();
        tmp.erase(tmp.begin());
        if (node == nullptr) {
            result.push_back(sum/count);
            sum = 0.0;
            count = 0;
            if (!tmp.empty()) {
                tmp.push_back(nullptr);
            }
        }
        else
        {
            ++count;
            sum += node->val;
            if (node->left) {
                tmp.push_back(node->left);
            }
            if (node->right) {
                tmp.push_back(node->right);
            }
        }
    }
    return result;
}
