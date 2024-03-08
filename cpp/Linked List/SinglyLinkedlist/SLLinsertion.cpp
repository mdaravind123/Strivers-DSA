#include<bits/stdc++.h>
using namespace std;

struct Node{
  int val;
  Node* next;
  Node(int data){
    val = data;
    next = nullptr;
  }
};

Node* SLLTraversal(Node* head){
  Node* ptr = head;
  while( ptr != nullptr){
    cout<<ptr->val<< " ";
    ptr = ptr->next;
  }
  cout<<endl;
}

Node* convertArraytoLinkedlist(vector<int>arr){
  Node* head = new Node(arr[0]);
  Node* ptr = head;
  for(int i=1;i<arr.size();i++){
    Node* temp = new Node(arr[i]);
    ptr ->next = temp;
    ptr = temp;
  }
  return head;
}

int lengthoflinkedlist(Node* head){
  int length = 0;
  Node* ptr = head;
  while(ptr != nullptr){
    length++;
    ptr = ptr->next;
  }
  return length;
}

Node* InsertatBeginning(Node* head, int val){
  Node* ptr = new Node(val);
  ptr->next = head;
  head = ptr;
  return head;
}

Node* InsertionatEnd(Node* head, int val){
  Node* ptr = head;
  Node* temp = new Node(val);
  for(int i=0;i<lengthoflinkedlist(head)-1;i++){
    ptr = ptr->next;
  }
  ptr->next = temp;
  return head;
}

Node* Insertatanypos(Node* head,int val, int pos){
  Node* temp = head;
  Node* ptr = new Node(val);
  if(lengthoflinkedlist(head)<pos){
    cout<<"Insertion Not possible"<<endl;
  }else{
    if(pos==0){
      head = InsertatBeginning(head, val);
      return head;
    }
    if(pos==lengthoflinkedlist(head)){
      head = InsertionatEnd(head, val);
      return head;
    }
    if(lengthoflinkedlist(head)>pos){
      for(int i=0;i<pos-1;i++){
        temp = temp->next;
      }
      ptr->next = temp ->next;
      temp->next = ptr;
      return head;
    }
  }
}

int main(){
  vector<int>arr={4,10,8,12};
  Node* head = convertArraytoLinkedlist(arr);
  SLLTraversal(head);
  head = Insertatanypos(head, 15, 3);
  head = Insertatanypos(head, 7, 1);
  head = Insertatanypos(head, 30, 0);
  head = Insertatanypos(head, 25, 7);
  SLLTraversal(head);

}