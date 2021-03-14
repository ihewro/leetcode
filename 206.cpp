//
// Created by hewro on 2021/3/13.
//

#include "Util.hpp"
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }
        return reverse(head);
    }

    ListNode* reverse(ListNode* head){
        if (head->next == nullptr){
            return head;
        }

        auto next = head->next;
        auto ret = reverse(next);
        next->next = head;
        head->next = nullptr;

        return ret;
    }
};

int main(){
    Solution solution;
    ListNode* root = link_util::getRootNode({1,2,3,4,5});
    std::cout << solution.reverse(root)->val << std::endl;
}
