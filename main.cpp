#include<iostream>
#include"./stackUsingLinkedlist.cpp"
using namespace std;

int main(){
    StackUsingLinkedList sull = StackUsingLinkedList();
    sull.push(234);
    sull.push(78);
    sull.push(100);
    sull.print();
    sull.pop();
    sull.print();
    sull.peek();
    sull.isEmpty(); 
    sull.count();
    sull.push(12);
    sull.push(45);
    sull.print();
    sull.change(12,21);
    sull.print();
    return 0;
}