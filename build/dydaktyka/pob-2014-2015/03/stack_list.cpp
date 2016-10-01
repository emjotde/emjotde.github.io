#include <iostream>

class Element {
public:
    Element(int x, Element* p) { 
        val = x; 
        prev = p;
    }

    int get_val() {
        return val;
    }
    Element* get_prev() {
        return prev;
    }

private:
    int val;
    Element* prev;
};

class Stack {
public:
    Stack() {
        top = NULL;
        count = 0;
    }
    ~Stack() {
        while (!empty())
            pop();
    }

    void push(int x) {
        top = new Element(x, top);
        count++;
    }
    int pop() {
        int result = top->get_val();
        count--;

        Element* old_top = top;
        top = old_top->get_prev();
        delete old_top;

        return result;
    }
    bool empty() {
        return !top;
    }

private:
    Element* top;
    int count;
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
