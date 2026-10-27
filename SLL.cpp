#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data){
     this->data=data;
     this->next=nullptr;
    }
};
class SLL{
    Node* head=nullptr;
    Node* tail=nullptr;
public:
    void insertatstart(int data){
        Node* newNode=new Node(data);
        if (head==nullptr && tail==nullptr){
            head=newNode;
            tail=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
        
    }

    void insertAtEnd(int data){
          Node* newNode=new Node(data);
            if (head==nullptr && tail==nullptr){
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }
    



    void DeleteAtStart(){
        Node* temp=nullptr;
         if (head==nullptr && tail==nullptr){
            cout<< "List is Empty";
            return;
        }
        if (head==tail)
        {   
            temp=head;
            head=nullptr;
            tail=nullptr;

            delete temp;
            return;
        }temp=head;
        head=head->next;
        delete temp;
    }


    void DeleteAtEnd(){
    Node* temp=nullptr;    
    Node* current=head;
   if (head==nullptr && tail==nullptr){
            cout<< "List is Empty";
            return;
        }
           if (head==tail)
        {   
            temp=head;
            head=nullptr;
            tail=nullptr;
            delete temp;
            return;
        }
        while (current->next->next!=nullptr)
        {          
            current=current->next;
        }
        temp=current->next;
        current->next=nullptr;
        tail=current;
        delete temp;
        
    }
    void display(){
        Node* current=head;

        while (current!=nullptr)
        {
            cout<< current->data;

            current=current->next;
        }
        
    }

};
    int  main(){
        SLL* list =new SLL();
        list->insertatstart(9);
        list->insertatstart(4);
        list->insertatstart(3);
        list->insertatstart(1);
        list->insertatstart(8);

        list->insertAtEnd(4);

        list->DeleteAtStart();
        list->DeleteAtEnd();

        list->display();



        return 0;
    }