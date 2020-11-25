#include <bits/stdc++.h>
#include "node.cpp"
using namespace std;

//function to create node
 void print(node *head){
 cout<<endl;
  while(head!=NULL){
  cout<<head->data<<" ";
  head=head->next;
  }
}

//function to create unknon number of nodeS

node* createNodes(){
   int data;
   cin>>data;
   


}






int main() {

//_________________________start
node n1(1);
node *head=&n1;

node n2(2);
node n3(3);
node n4(4);
node n5(5);


n1.next=&n2;
n2.next=&n3;
n3.next=&n4;
n4.next=&n5;
// ________________________end

cout
<<n1.data<<" "
<<n1.next<<" "
<<&n2<<" "
<<n2.data<<" "
<<n2.next;

print(head);   //_____function__definition__start_at_Line__07__ |


/*
dynamically creating nodes in linked list 

________________________________start

node *n3=new node(30);
n2.next=n3;

node *n4=new node(40);
n3->next=n4;       //address of n4 is stored in n4 variale(same as in n3)

 _________________________________end 
*/


}