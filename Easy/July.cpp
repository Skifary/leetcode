//
//  July.cpp
//  LeetCode
//
//  Created by Skifary on 06/07/2017.
//  Copyright © 2017 Skifary. All rights reserved.
//

#include "July.hpp"


using namespace LeetCode;


TreeNode* LeetCode::mergeTrees(TreeNode* t1, TreeNode* t2)
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


vector<double> LeetCode::averageOfLevels(TreeNode* root)
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


vector<string> LeetCode::findWords(vector<string>& words)
{
    string first = "qwertyuiop";
    string second = "asdfghjkl";
    string third = "zxcvbnm";
    
    vector<string> result;
    
    for (int i = 0; i < words.size(); ++i) {
        string row;
        
        if (first.find(tolower(words[i].front())) != string::npos) {
            row = first;
        } else if (second.find(tolower(words[i].front())) != string::npos) {
            row = second;
        } else {
            row = third;
        }
        
        for (int j = 0; j < words[i].size(); j++) {
            if (row.find(tolower(words[i][j])) == string::npos) {
                break;
            }
            if (j == words[i].size() - 1) {

                result.push_back(words[i]);
            }
        }
    }
    
    return result;
}


string LeetCode::reverseWords(string s)
{
    string::iterator start = s.begin();
    for (string::iterator itr = s.begin(); itr < s.end(); ++itr) {
        if (' ' == *(itr + 1) || itr == s.end() - 1) {
            reverse(start, itr + 1);
            start = itr + 2;
        }
    }
    return s;
}
