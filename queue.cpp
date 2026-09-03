#include <iostream>
using namespace std;

class MyQueue {
    int capacity;
    int *arr;
    int front;
    int rear;

public:

    MyQueue(int n) {
        capacity = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    bool isempty() {
        return front == -1 || front > rear;
    }

    bool isfull() {
        return rear == capacity - 1;
    }

    int peek() {
        if (isempty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return arr[front];
    }

    void push(int x) {
        if (isfull()) {
            cout << "Queue Overflow" << endl;
            return;
        }

        if (front == -1) {
            front = 0;
        }

        rear++;
        arr[rear] = x;

        cout << "Pushed element: " << x << endl;
    }

    void pop() {
        if (isempty()) {
            cout << "Queue Underflow" << endl;
            return;
        }

        cout << "Popped element: " << arr[front] << endl;

        front++;

        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
};

int main() {

    MyQueue q(5);

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.peek() << endl;

    q.pop();
    cout << "Front element: " << q.peek() << endl;

    q.pop();
    q.pop();

    cout << "Front element: " << q.peek() << endl;

    return 0;
}
