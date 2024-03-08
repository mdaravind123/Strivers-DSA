#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
   ListNode* convertarrtolinkedlist(vector<int>v){
        ListNode* head = new ListNode(v[0]);
        ListNode* ptr = head;
        for(auto i=1;i<v.size();i++){
            ListNode* temp = new ListNode(v[i]);
            ptr->next = temp;
            ptr = temp;
        }
        return head;
    }

    ListNode* reverseList(ListNode* head) {
        vector<int>lst;
        ListNode* ptr = head;
        while(ptr!=nullptr){
            lst.push_back(ptr->val);
            ptr = ptr->next;
        }
        reverse(lst.begin(),lst.end());
        if(lst.size()==0){
            return {};
        }else if(lst.size()==1){
            ListNode* head1 = new ListNode(lst[0]);
            return head1;
        }else{
            ListNode* head1 = convertarrtolinkedlist(lst);
            return head1;
        }

    }
};