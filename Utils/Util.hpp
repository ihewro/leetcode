#pragma once
/**
 * Copyright (c) 2020, SeekLoud Team.
 * Date: 2021/1/8
	* Main Developer: hewro
	* Developer:
 * Description: 
 * Refer:
 */

#include <iostream>
#include <utility>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <list>
#include <thread>
#include <algorithm>
#include<math.h>
#include <queue>
#include <stack>
#include <numeric>
#include <array>
using std::queue;
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
            : val(_val), left(_left), right(_right), next(_next) {}
};

//#include <stream.h>
using std::vector;
using std::list;
using std::string;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class vector_util{
public:
    template<typename T>
    static void print(const vector<T>& input){
        std::cout << "[";
        for (auto item:input){
            std::cout << item << ",";
        }
        std::cout << "]" << std::endl;

    }

    template<typename T>
    static void print2D(vector<vector<T>> vectors) {
        for (auto vector: vectors) {
            vector_util::print(vector);
        }
    }
};

class MAP_VALUE{
    int num;
public:
    MAP_VALUE(int num) : num(num) {}

    virtual string print() const {return "nothing";};
};
class map_util{
public:
    template<typename T,typename U>
    static void print(const std::unordered_map<T,U>& input){
        std::cout << "[";
        for (auto &item:input){
            std::cout << "key:" << item.first << "value:" << item.second<<"," << std::endl;
        }
        std::cout << "]" << std::endl;

    }
};

class link_util{
public:
    static ListNode* getRootNode(vector<int> nodeList){
        ListNode* root = nullptr;
        ListNode* next = nullptr;

        for (auto item: nodeList) {
            if (root == nullptr){
                root = new ListNode(item);
                next = root;
            }else{
                next->next = new ListNode(item);
                next = next->next;
            }
        }
        next->next = nullptr;
        return root;
    }

    static void print(ListNode* head){
        while (head!= nullptr){
            std::cout << head->val <<" " ;
            head= head->next;
        }

        std::cout << std::endl;
    }
};

class tree_util{
public:

    //-1表示 null,nodeList 是层次序列
    static TreeNode* createTree(vector<int> nodeList){
        if (nodeList.empty()){
            return nullptr;
        }

        auto* root = new TreeNode(nodeList[0]);

        std::queue<TreeNode*> q;
        q.push(root);
        int index = 0;
        while (!q.empty()){
            auto front = q.front();q.pop();

//            std::cout << "tmp_root" << front->val << std::endl;
            int left_v = (index + 1 < nodeList.size())  ? nodeList[index + 1] : INT_MIN;
            int right_v = (index + 2 < nodeList.size())  ? nodeList[index + 2] : INT_MIN;

            if (left_v == INT_MIN){
                front->left = nullptr;
            }else{
                front->left = new TreeNode(left_v);
                q.push(front->left);
            }

            if (right_v == INT_MIN){
                front->right = nullptr;
            }else{
                front->right = new TreeNode(right_v);
                q.push(front->right);
            }
            index +=2;

        }


        return root;
    }

    static void print_preorder(TreeNode* root){
        if (root == nullptr){
            return;
        }
        std::cout << root->val << ",";
        if (root->left == nullptr && root->right == nullptr){
            return ;
        }else{
            if (root->left == nullptr){
                std::cout << "null" << ",";
                print_preorder(root->right);
            }else if (root->left== nullptr){
                print_preorder(root->left);
                std::cout << "null" << ",";
            }else{
                print_preorder(root->left);
                print_preorder(root->right);
            }
        }
    }
};