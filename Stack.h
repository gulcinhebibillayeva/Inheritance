#pragma once
#define MAX 100

template<typename T>
class Stack {
    T _container[MAX]{};
    int _top = -1;

public:
    Stack() = default;

    void push(const T& element) {
        if (isFull())
            throw "Stack overflow";
        _container[++_top] = element;
    }

    void pop() {
        if (isEmpty())
            throw "Stack underflow";
        _top--;
    }

    T& peek() {
        if (isEmpty())
            throw "Stack is Empty";
        return _container[_top];
    }

    bool isEmpty() const { return _top == -1; }
    bool isFull() const { return _top + 1 == MAX; }
    int size() const { return _top + 1; }

    const T* getContainer() const {
        return _container;
    }

    void showAll()  {
        for (int i = 0; i <= _top; i++) {
            _container[i].show();  
        }
    }
};