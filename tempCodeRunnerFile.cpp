#include <iostream>

#define MAX_SIZE 100  // Maximum capacity of the queue

class Queue {
private:
    int items[MAX_SIZE];
    int front = -1, rear = -1;

public:
    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == MAX_SIZE - 1;
    }

    void enqueue(int item) {
        if (isFull()) {
            std::cout << "Queue overflow\n";
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear++;
        items[rear] = item;
        std::cout << item << " enqueued to queue\n";
    }

    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue underflow\n";
            return -1;  // Or throw an exception
        }
        int item = items[front];
        if (front == rear) {
            front = rear = -1;  // Reset for empty queue
        } else {
            front++;
        }
        return item;
    }
};
int main(){
Queue q;
    q.isEmpty();
    q.enqueue(10);
    q.dequeue();
    q.dequeue();
    q.isFull();
}