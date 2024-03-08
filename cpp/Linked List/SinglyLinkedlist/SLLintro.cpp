#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* next;
  
  public:
  Node(int data1, Node* next1){
    data=data1;
    next=next1;
  }

  public:
  Node(int data1){
    data=data1;
    next=nullptr;
  }
};

Node* converttoLinkedList(vector<int> arr){
  Node* head=new Node(arr[0]);
  Node* ptr=head;
  for(int i=1;i<arr.size();i++){
    Node* temp=new Node(arr[i]);
    ptr->next = temp;
    ptr=temp;
  }
  return head;
}

int main(){
  vector<int>arr = {12,2,3,4};
  Node* head=converttoLinkedList(arr);
  cout<<head->data<<endl;
}