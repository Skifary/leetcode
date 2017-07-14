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


vector<vector<int>> LeetCode::matrixReshape(vector<vector<int>>& nums, int r, int c) {
    
    if (nums.size() == 0 || ((nums.front()).size() <= c && nums.size() <= r)) {
        return nums;
    }
    
    vector<vector<int>> result;
    vector<int> dimensional;
    for (vector<vector<int>>::iterator itr = nums.begin(); itr < nums.end(); ++itr) {
        for (vector<int>::iterator itr2 = itr->begin(); itr2 < itr->end(); ++itr2) {
            dimensional.push_back((*itr2));
            
            if (dimensional.size() == c) {
                result.push_back(dimensional);
                dimensional.clear();
            }
            
        }
    }
    return result;
}

#include <unordered_set>
int LeetCode::distributeCandies(vector<int>& candies)
{
    unordered_set<int> sisterCandies;
    for (vector<int>::iterator itr = candies.begin(); itr < candies.end(); ++itr) {
        sisterCandies.insert(*itr);
    }
    return (int)(sisterCandies.size() < candies.size()/2 ? sisterCandies.size() : candies.size()/2);
}


string LeetCode::reverseString(string s)
{
    long i = 0, j = s.size() - 1;
    while (i < j) {
        char tmp;
        tmp = s[i];
        s[i++] = s[j];
        s[j--] = tmp;
    }
    return s;
}


vector<string> LeetCode::fizzBuzz(int n)
{
    vector<string> result(n);
    for (int i = 1; i < n + 1; ++i) {
        if (!(i%3) && !(i%5)) {
            result[i-1] = "FizzBuzz";
        } else if (!(i%3)) {
            result[i-1] = "Fizz";
        } else if (!(i%5)) {
            result[i-1] = "Buzz";
        } else {
            result[i-1] = to_string(i);
        }
    }
    return result;
}


vector<int> LeetCode::nextGreaterElement(vector<int>& findNums, vector<int>& nums)
{
    vector<int> result(findNums.size(),-1);
    for (int i = 0; i < findNums.size(); ++i) {
        vector<int>::iterator index = find(nums.begin(), nums.end(), findNums[i]);
        for (; index < nums.end(); ++index) {
            if (findNums[i] < *index) {
                result[i] = *index;
                break;
            }
        }
    }
    return result;
}


int LeetCode::islandPerimeter(vector<vector<int>>& grid)
{
    int result = 0, repeat = 0;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] == 1) {
                result++;
                if (i != 0 && grid[i-1][j] == 1) {
                    repeat++;
                }
                if (j != 0 && grid[i][j-1] == 1) {
                    repeat++;
                }
            }
        }
    }
    return 4 * result - 2 * repeat;
}


bool LeetCode::canWinNim(int n)
{
    return n%4 != 0;
}


int LeetCode::findLUSlength(string a, string b)
{
    int aSize = (int)a.size(), bSize = (int)b.size();
    if (aSize != bSize) {
        return max(aSize, bSize);
    } else if(a != b) {
        return aSize;
    }
    return -1;
}








