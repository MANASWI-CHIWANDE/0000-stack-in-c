#include <iostream>
using namespace std;
#define n 10

//STACK - linear data type with LIFO property

class Stack
{
public:
    int *arr;
    int top;

public:
    Stack()
    {
        top = -1;
        arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i]=0;
        }
    }
    void push(int data)
    {
        if (top == n - 1)
        {
            cout << "STACK IS OVERFLOW..............." << endl;
        }
        else
        {
            top++;
            arr[top] = data;
            cout << "Element pushed successfully in the Stack" << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "STACK IS UNDERFLOWED..............." << endl;
        }
        else
        {
            cout << "Element poped successfully from the Stack" << endl;
            arr[top] = 0;
            top--;
        }
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "STACK IS UNDERFLOWED..............." << endl;
            return 0;
        }
        else
        {
            cout << "Top ELEMENT in the Stack is : " << arr[top] << endl;
            ;
            return arr[top];
        }
    }
    bool isEmpty()
    {
        return (top == -1);
    }
    bool isFull()
    {
        return (top == n - 1);
    }
    int count()
    {
        cout << "NO. OF ELEMENTS IN THE STACK IS : " << (top + 1) << endl;
        return (top + 1);
    }
    void change(int position, int value)
    {
        arr[position] = value;
        cout << "VALUE OF STACK AT POSITION " << position << " is CHANGED............." << endl;
    }
    void print()
    {
        cout << "VALUES STORED IN THE STACK ARE :  " << endl;
        ;
        for (int i = n - 1; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack obj;

    int option;
    int data1;
    int pos;
    int val;

    do
    {
        cout << "\nWhat do you want to perform ?  Select option number. Else enter '0' to exit" << endl;
        cout << "1. push()" << endl;
        cout << "2. pop()" << endl;
        cout << "3. peek()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. isEmpty()" << endl;
        cout << "6. count()" << endl;
        cout << "7. print()" << endl;
        cout << "8. change()" << endl;
        cout << "9. clear screen " << endl;

        cout << "\nEnter option no. to be performed : " << endl;
        cin >> option;
        cout << endl;

        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "\n\nEnter new element's data : ";
            cin >> data1;
            obj.push(data1);
            cout << endl;
            break;
        case 2:
            cout << "\n " << endl;
            obj.pop();
            break;
        case 3:
            cout << "\n " << endl;
            obj.peek();
            break;

        case 4:
            cout << "\n ";
            if (obj.isFull())
                cout << "Stack is Full" << endl;
            else
                cout << "Stack is not Full" << endl;
            break;
        case 5:
            cout << "\n";
            if (obj.isEmpty())
                cout << "Stack is Empty" << endl;
            else
                cout << "Stack is not Empty" << endl;
            obj.isEmpty();
            break;

        case 6:
            cout << "\n " << endl;
            obj.count();

            break;
        case 7:
            obj.print();
            break;
        case 8:
            cout << "\nEnter position number and data to be changed int the stack : " << endl;
            cin >> pos;
            cin >> val;
            obj.change(pos, val);
            break;
        case 9:
            system("cls");
            break;
        default:
            cout << "--------------------ENTER PROPER OPTION NUMBER--------------------" << endl;
        }
    } while (option != 0);

    return 0;
}
