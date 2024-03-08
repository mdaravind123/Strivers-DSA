#include<bits/stdc++.h>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* SLLTraversal(ListNode* head){
  ListNode* ptr = head;
  while(ptr!=nullptr){
    cout<<ptr->val<<" ";
    ptr = ptr->next;
  }
}

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

int main(){
  vector<int>v1={1};
  vector<int>v2={0};
  ListNode* l1 = convertarrtolinkedlist(v1);
  ListNode* l2 = convertarrtolinkedlist(v2);
  string s="";
  string s1="";
  ListNode* head =l1;
  ListNode* temp= l2;
  while(head!=nullptr){
    s+=to_string(head->val);
    head=head->next;
  } 
  reverse(s.begin(),s.end());

  while(temp!=nullptr){
    s1+=to_string(temp->val);
    temp=temp->next;
  }
  reverse(s1.begin(),s1.end());
  int num1 = stoi(s);
  int num2 = stoi(s1);
  int num3 = num1+num2;
  vector<int>v3;
  while(num3>0){
    v3.push_back(num3%10);
    num3/=10;
  }
  ListNode* tail = convertarrtolinkedlist(v3);
  SLLTraversal(tail);
}