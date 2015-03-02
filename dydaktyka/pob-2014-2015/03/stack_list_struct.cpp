#include <iostream>


class Stack {
private:
    struct Element {
        int val;
        Element* prev;
    };

    Element* top;
    int count;

public:
    Stack() {
        top = NULL;
        count = 0;
    }
    ~Stack() {
        while (!empty()) pop();
    }

    void push(int x) {
        Element* e = new Element;
        e->val = x;
        e->prev = top;
        top = e;
        count++;
    }
    int pop() {
        int result = top->val;
        count--;

        Element* e = top;
        top = e->prev;
        delete e;

        return result;
    }
    bool empty() {
        return !top;
    }
};

int main() {
    Stack s;

    s.push(5);
    s.push(10);
    s.push(15);

    while (!s.empty())
        std::cout << s.pop() << std::endl;

    return 0;
}
