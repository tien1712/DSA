#include <iostream>
#include <vector>

using namespace std;
class Stack {
private:
    vector<int> stack;
    
public:
    Stack() {}
    
    bool isEmpty() const {
        return stack.empty();
    }
    
    void push(int value) {
        stack.push_back(value);
    }
    
    void pop() {
        if (!isEmpty()) {
            stack.pop_back();
        } else {
            cout << "Empty" << endl;
        }
    }
    
    int top() const {
        if (!isEmpty()) {
            return stack.back();
        } else {
            cout << "Empty" << endl;
            return -1;
        }
    }
    
    void printStack() const {
        for (const auto& element : stack) {
            cout << element << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack;
    
    stack.push(10);
    stack.push(20);
    stack.push(30);
    
    cout << "Stack elements: ";
    stack.printStack();
    
    stack.pop();
    
    cout << "Top element after pop: " << stack.top() <<endl;
    
    return 0;
}