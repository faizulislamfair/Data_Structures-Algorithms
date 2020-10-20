#include<bits/stdc++.h>
using namespace std;

class Node{

  public:
      int key;
      int data;
      Node* next;
      Node* previous;

      Node()
      {
          key=0;
          data=0;
          next=NULL;
          previous=NULL;
      }
      Node(int k, int d)
      {
          key=k;
          data=d;
      }

};

class DoublyLinkedList{

   public:
       Node* head;

       DoublyLinkedList()
       {
           head=NULL;
       }
       DoublyLinkedList(Node *n)
       {
           head=n;
       }

       // 1. Check if node exists using key value

       Node* nodeExists(int k)
       {
           Node* temp = NULL;
           Node* ptr = head;

           while(ptr!=NULL)
           {
               if(ptr->key==k)
               {
                   temp=ptr;
               }
               ptr=ptr->next;
           }

           return temp;
       }

       // 2. Append a node to the list

       void appendNode(Node* n)
       {
           if(nodeExists(n->key)!=NULL)
           {
               cout << "Node Already exists with Key value : " << n->key << ". Append another node with different Key value "<<endl;
           }
           else
           {
               if(head==NULL)
               {
                   head = n;
                   cout<<"Node Appended as Head Node"<<endl;
               }
               else
               {
                   Node* ptr = head;
                   while(ptr->next!=NULL)
                   {
                       ptr = ptr->next;
                   }
                   ptr->next=n;
                   n->previous = ptr;
                   cout << "Node Appended" <<endl;
               }
           }
       }

       // 3. Prepend Node - Attach a node at the start
       void prependNode(Node* n)
       {
           if(nodeExists(n->key)!=NULL)
              {
                  cout << "Node Already exists with Key value : "<<n->k". Append another node with different Key value"<<endl;
              }
           else
             {
                 if(head==NULL)
                 {
                     head = n;
                     cout<<"Node Prepended as Head Node"<<endl;
                 }
                 else
                 {
                    head->previous=n;
                    n->next=head;
                    head=n;
                    cout<<"Node Prepended"<<endl;
                 }
             }
          }

          // 4. Insert a Node after a particular node in the list

          void insertNodeAfter (int k,Node *n)
          {
              Node* ptr = nodeExists(k);
              if(ptr==NULL)
              {
                  cout<<"No node exists with key value : "<<k<<endl;
              }
              else
              {
                  if(nodeExists(n->key)!=NULL)
                  {
                      cout<<"Node Already exists with Key value : "<<n->key<<".Append another node with different Key value"<<endl;
                  }
              }
          }


};

int main()
{


    return 0;
}
