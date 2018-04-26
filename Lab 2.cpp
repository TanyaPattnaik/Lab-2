#include <iostream>
using namespace std;
class node{
  public:
int data;
node *next;
};

class List{
private:
node *head;
node *tail;
  //constructor
List(){
head=NULL;
tail=NULL;
}
  
void insert(int data){     //Adds a new element to the end of the linked list.
node *temp=new node();     //temp pointer points to new node with data
temp->data=data;
temp->next=NULL;
if(head==NULL){            //check if there exists any linked list
head=temp;
tail=temp;
}
else{
tail->next=temp;
tail=temp;
}
}

void insertAt(int pos, int data){   //Adds a new element at specific position
node *temp=new node();              //Creates a pointer temp that points to nodes till we reach desired node
node *t1=new node();                //nodes created for storing data and adding to linked list
node *t2=new node();
t1->data=data;
t1->next=NULL;
temp=head;
for(int i=1; i<pos; i++){           //loop to reach specific position in linked list
temp=temp->next;
if(temp==NULL){cout<<"Not enough elements";
}
}
t2=temp->next;
temp->next=t1;
t1->next=t2;
}

void deletee(){              //deletes element at the  end
node *temp=new node;
temp=head;
while(1){                      //loop till second last element is reached
temp=temp->next;
if(temp->next->next==NULL){tail=temp;
break;
}
}

  void deleteNode(int pos)
   {
      int count=0;
      Node* temp, *temp1;
      temp = head  ;
      if(head==NULL)
      {
        cout<<"\nLinked List Empty ";
      }
      else if(pos == 0)
      {
        head = head->next;
        delete temp;
      }
      else
      {
      while(count!= pos-1)
      {
         temp = temp->next;
         count++;
      }
      temp1 = temp->next;
      temp->next = temp1->next;
      temp1->next=NULL;
      delete temp1;
   }
}

int countItems(){
int c=0;
node *temp=new node();
temp=head;
while(temp!=NULL){
temp=temp->next;
c++;
}
return c;

void display()
 {
  if(head==NULL)
  {
   cout << "Nothing";
  }
  else
  {
   node *temp = head;
   while(temp != NULL)
   {
    cout << temp->data;
    cout<<" ";
    temp = temp->next;
   }
  }
 }
};

int main(){
int d1,d2,d3,d4,d5,d,n1,n2;
List l;
cout<<"Please enter data to be added\n";
cin>>d1;
l.insert(d1);
cin>>d2;
l.insert(d2);
cin>>d3;
l.insert(d3);
cin>>d4;
l.insert(d4);
cin>>d5;
l.insert(d5);
l.display();
cout<<"Please enter the data to be inserted\n";
 cin>>d;
 cout<<"The position where you want to insert it\n";
 cin>>n1;
 l.insertNode(d,n1);
 l.displayList();
 cout<<"Please enter the node which you want to delete\n";
 cin>>n2;
 l.deleteNode(n2);
 l.displayList();
}
