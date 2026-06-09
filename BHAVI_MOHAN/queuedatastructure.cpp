#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int arr[10];
    int rear, front;

    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int value)
    {
        if (rear == 9)
        {
            cout << "Queue Overflow" << endl;
            return;
        }

        if (front == -1)
            front = 0;

        rear++;
        arr[rear] = value;
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow" << endl;
            return;
        }

        cout << "Deleted: " << arr[front] << endl;
        front++;

        if (front > rear)
        {
            front = rear = -1;
        }
    }

    void peek()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Front element: " << arr[front] << endl;
    }

    void display()
    {
        cout << "Queue elements:" << endl;
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.enqueue(90);
    q.enqueue(100);
    q.enqueue(110);

    q.display();
    q.peek();
    q.dequeue();
    q.display();

    return 0;
}
/*insert, display, delete using structure for queue

*/
