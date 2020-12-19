#ifndef LAB3_STACK_H
#define LAB3_STACK_H
#include <exception>
#include <iostream>
#include <new>

using namespace std;

template<class T>
class Stack
{
    class node {
    public:
        node(T v) {
            value = v;
            next = nullptr;
        };

        T getValue() {
            return value;
        }

        void setValue(T v) {
            value = v;
        }

        node* getNext() {
            return next;
        }
        void setNext(node* n) {
            next = n;
        }

    private:
        T value;
        node* next;
    };

private:
    node* head;
public:
    Stack() {
        head = nullptr;
    }

    void push(T val) {

        if (head == nullptr) {

            head = new node(val);
            return;
        }

        node* tmp = head;

        try
        {
            head = new node(val);
            head->setNext(tmp);
        }
        catch (std::bad_alloc& ba)
        {
            std::cerr << "bad_alloc caught: " << ba.what() << '\n';
        }




    }

    T pop() {
        try
        {
            if (head == nullptr)
                throw - 1;
            node* tmp = head;
            head = head->getNext();
            T retval = tmp->getValue();
            delete tmp;
            return retval;
        }
        catch (int a)
        {
            std::cerr << "Stack is empty" << std::endl;
        }
    }

    T top() {
        try
        {
            if (head == nullptr)
                throw - 1;
            return head->getValue();
        }
        catch (int a)
        {
            std::cerr << "Stack is empty" << std::endl;
        }
    }
    bool isempty() {
        return (head == nullptr);
    };
};


#endif //LAB3_STACK_H
