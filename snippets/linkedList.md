---
title: Linked List
tags: utility
expertise: intermediate
# firstSeen: 2022-10-01T05:00:00-04:00
cover: https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png
---

Basic operations of linked list.

- Linked List is type of dynamic data structure which consists of many nodes.
- Node contain two thingds - data and address of next node.
- This snippet provides code to basic operations of linked list.

```cpp
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

class Node{
    public:
        int data;
        Node *next;

};

class LinkedList{
    private:
        Node *first;
        Node *last;
    public:
        LinkedList(){
            first=NULL;
        }
        LinkedList(int A[],int n);
        ~LinkedList();
        void Display();
        int Length();
        int Sum();
        int max();
        void insertAtHead(int x);
        void insertAtTail(int x);
        void insert(int index,int x);
        int Delete(int index);
        void reverseList();
};

int main()
{
    int A[]={1,2,3,4,5};
    LinkedList L(A,5);
    // L.insert(4,4);
    // cout<<"Delete :"<<L.Delete(6)<<endl;
    L.reverseLink();
    L.Display();
    cout<<"Length is:"<<L.Length()<<endl<<"Sum is:"<<L.max()<<endl;
    return 0;
}

LinkedList::LinkedList(int A[],int n){
    Node *t;
    int i=0;

    first= new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

    }

LinkedList::~LinkedList(){
            Node *temp=first;
            while(temp!=NULL){
                first=first->next;
                delete temp;
                temp=first;
            }
        };

void LinkedList::Display(){
            Node *temp=first;
            cout<< first->data<<" "<<last->data<<endl;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        };

int LinkedList::Length(){
            Node *temp=first;
            int count=0;
            while(temp!=NULL){
                count++;
                temp=temp->next;
            }
            return count;
        };

int LinkedList::Sum(){
            Node *temp=first;
            int sum=0;
            while(temp!=NULL){
                sum+= temp->data;
                temp=temp->next;
            }
            return sum;
        };

int LinkedList::max(){
            Node *temp=first;
            int max=0;
            while(temp!=NULL){
                if(temp->data>max)
                    max=temp->data;
                temp=temp->next;
            }
            return max;
        };

void LinkedList::insertAtHead(int x){
            Node *temp=new Node;
            temp->data=x;
            temp->next=first;
            first=temp;
        };

void LinkedList::insertAtTail(int x){
            Node *temp=new Node;
            if(first==NULL){
                temp->data=x;
                first=temp;
                last=temp;
            }
            else{
                temp->data=x;
                last->next=temp;
                last=temp;
                temp->next=NULL;
            }
            }

void LinkedList::insert(int index,int x){

    if(index==1){
        insertAtHead(x);
        return;
    }
    Node* temp=first;
    int i=1;
    while(i<index-1){
        temp=temp->next;
        i++;
    }
    if(temp->next==NULL){
        insertAtTail(x);
        return ;
    }

        Node* element= new Node;
        element->data=x;
        element->next=temp->next;
        temp->next = element;

};

int LinkedList::Delete(int index){
    Node *p,*q=NULL;
    if(index<1 || index>Length()){return 0;}
    int x=0;
    if(index==1){
        p=first;
        first=p->next;
        x=p->data;
        p->next=NULL;
        delete p;
        return x;
    }else{
        p=first;
        for(int i=1;i<index;i++){
            q=p;
            p=p->next;
        }
        if(p->next==NULL){
            q->next=p->next;
            x=p->data;
            last=q;
            p->next=NULL;
            delete p;
            return x;
        }
            q->next=p->next;
            p->next=NULL;
            x=p->data;
            delete p;

    }
    return x;

}


void LinkedList::reverseList(){
    Node* p=first;
    Node* q=NULL;
    Node* r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    last=first;
    first=q;
}
```

Initialisation

```cpp
 int a[5]=[1,2,3,4,5];
 LinkedList L(a,5)
```

Display linked list

```cpp
  L.Display();
```

Length of linked list

```cpp
  int l= L.Length();
  cout<<"Length of List"<<l<<endl;
```

Sum of List

```cpp
int sum = L.Sum();
  cout<<"Sum of List"<<sum<<endl;
```

Maximum element

```cpp
int max= L.max();
  cout<<"Maximum element of List"<<max<<endl;
```

Insert in linked list

```cpp
L.insert(6,3);
# element is 6 and position is 3
# resulting list [1,2,6,3,4,5]
```

Delete an element in linked list

```cpp

int del = L.delete(3);
cout<< "Deleted element is "<< del << endl;
# position of element to be deleted is 3
# resulting list [1,2,3,4,5]
```

Reversing the list

```cpp
L.reverse();
```
