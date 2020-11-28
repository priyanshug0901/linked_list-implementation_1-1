#include <bits/stdc++.h>
#include "node.cpp"
using namespace std;
// efficient method to create linked list

node* createnode(){
int data;
node* head;
node* tail;
cin>>data;
while(data!=-1){

  node *newnode= new node(data);
  
  if(head==NULL){
  head=newnode;
  tail=newnode;  }
  else
  newnode->next=newnode;

cin>>data;
}
}
