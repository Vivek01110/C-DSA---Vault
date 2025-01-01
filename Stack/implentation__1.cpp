#include <iostream>
using namespace std;

class stakk{
public:
    int top;
    int *arr;
    int size;

    stakk(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    bool empty(){
        if (this->top == -1)
            return true;
        else
            return false;
    }

    void push(int val){
        if (top == size - 1)
            cout << "stack is overFlow for : " << val << endl;

        else{
            top++;
            arr[top] = val;
        }
    }

    void pop(){
        if (top >= 0)
            top--;
        else
            cout << "stack underFlow" << endl;
    }
    int peek(){
        if (this->empty())
            cout << "stack is empty" << endl;
        return arr[top];
    }
};

int main(){
    stakk s(5);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    cout << s.peek() << endl;
    s.pop();

    cout << s.peek() << endl;
    s.pop();

    cout << s.peek() << endl;
    s.pop();

    cout << s.peek() << endl;
    s.pop();

    cout << s.peek() << endl;
    s.pop();

  
}
