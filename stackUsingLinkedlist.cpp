#include <iostream>
#include "./node.cpp"
using namespace std;

class StackUsingLinkedList
{
private:
    int length=0;
    Node *top=NULL;
    Node *head=NULL;

public:
    StackUsingLinkedList();
    Node* getHead();
    Node* getTop();
    void print();
    int push(int);
    int pop();
    void peek();
    void count();
    int change(int, int);
    bool isEmpty();
};

StackUsingLinkedList::StackUsingLinkedList(){
    head=NULL;
    top = NULL;
}


Node* StackUsingLinkedList::getHead(){

    cout<<"\nHEAD pointer is : "<<head<<"\n"<<endl;
    return head;
}


Node* StackUsingLinkedList::getTop(){
    Node*ptr =head;
    while(ptr->getNextPtr()!=NULL){
        ptr= ptr->getNextPtr();
    }
    top = ptr;

    return top;
}


void StackUsingLinkedList::print(){

    
    if(getTop()==NULL){
        cout<<"\nSTACK is EMPTY\n"<<endl;
    }
    else{
        cout<<"\nPRINTING STACK \n"<<endl;
        Node*temp =head;
        while(temp->getNextPtr()!= NULL){
        cout<<"( "<<temp->getData()<<" , "<<temp->getNextPtr()<<" ) ==> ";
        temp = temp->getNextPtr();}
        cout<<"( "<< temp->getData()<<" , " << temp->getNextPtr() << " )  = x "<<endl;

        cout<<"\nFinished printing "<<endl;
    }
}


int StackUsingLinkedList::push(int data1){
    Node* newNode = new Node(data1);

    if(head == NULL){
        head = newNode;
    }

    else{
        Node* ptr = getTop();
        ptr->setNextPtr(newNode);
    }
    top = newNode;
    length++;
    return 0;
}


int StackUsingLinkedList::pop(){

    if(getTop()==NULL){
        cout<<"\nSTACK is EMPTY\n"<<endl;
    }
    else{
    Node*prevPtr =head;
    Node* currentPtr = head->getNextPtr();
    while(currentPtr->getNextPtr()!=NULL){
        currentPtr=currentPtr->getNextPtr();
        prevPtr= prevPtr->getNextPtr();
    }
    currentPtr = NULL;
    prevPtr->setNextPtr(NULL);
    top = prevPtr;
    length--;}
}


void StackUsingLinkedList::peek(){
    cout<<"\nTOP pointer is : "<<top<<"\n"<<endl;
}


bool StackUsingLinkedList::isEmpty(){
    if (top==NULL){
        cout<<"\nSTACK is EMPTY\n"<<endl;
        return true ;
    }
    else{
        cout<<"\nSTACK is NOT EMPTY\n"<<endl;
        return false;
    }
}


int StackUsingLinkedList::change(int data1 ,int data2){
    Node*ptr =head;
    while(ptr->getData()!=data1){
        ptr= ptr->getNextPtr();
    }
    ptr->setData(data2);
    return 1;
} 


void StackUsingLinkedList::count(){
    cout<<"Number of ELEMENTS in the STACK are : "<<length<<"\n"<<endl;
}