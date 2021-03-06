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

    //5->4->3->2->1
    Node* reverse(Node* head) {
        auto current = head;
        auto prev = nullptr;
        while(current!=nullptr){
            auto next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        return prev;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* next;
        while (curr!= nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

};

int main(){
    Solution solution;
    ListNode* root = link_util::getRootNode({1,2,3,4,5});
    std::cout << solution.reverse(root)->val << std::endl;
}
