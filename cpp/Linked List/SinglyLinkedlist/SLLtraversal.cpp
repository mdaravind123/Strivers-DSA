#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* next;
  public:
  Node(int data1){
    data=data1;
    next=nullptr;
  }
};

Node* converttolinkedlist(vector<int>arr){
  Node* head = new Node(arr[0]);
  Node* ptr = head;
  for(int i=1;i<arr.size();i++){
    Node* temp = new Node(arr[i]);
    ptr->next=temp;
    ptr=temp;
  }
  return head;
}

int lengthoflinkedlist(Node* head){
  int length=0;
  Node* temp = head;
  while(temp!=nullptr){
    length++;
    temp = temp->next;
  }
  return length;
}

bool searchElement( Node* head, int search){
  Node* temp = head;
  while(temp!=nullptr){
    if(temp->data==search){
      return true;
    }
    temp = temp ->next;
  }
  return false;
}

Node* insertatbeginning(Node* head, int val){
  Node* ptr = new Node(val);
  ptr->next = head;
  head = ptr;
  return head;
}

int main(){
  int length = 0;
  int search = 9;
  vector<int>arr = {2,5,3,8};
  Node* head = converttolinkedlist(arr);
  Node* temp = head;
  while(temp!=nullptr){
    cout<<temp->data<<" ";
    length++;
    temp = temp->next;
  }
  cout<<endl;
  cout<<lengthoflinkedlist(head)<<endl;
  cout<<searchElement(head , search)<<endl;
  head = insertatbeginning(head, 10);
}