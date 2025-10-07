#include <queue>
using namespace std;

class MyStack
{
private:
    queue<int> queue{};

public:
    MyStack()
    {
    }

    void push(int x)
    {
        queue.push(x);
    }

    int pop()
    {
        int size = queue.size();
        while (size > 1)
        {
            queue.push(queue.front());
            queue.pop();
            --size;
        }
        int temp = queue.front();
        queue.pop();
        return temp;
    }

    int top()
    {
        int size = queue.size();
        while (size > 1)
        {
            queue.push(queue.front());
            queue.pop();
            --size;
        }
        int temp = queue.front();
        queue.push(queue.front());
        queue.pop();
        return temp;
    }

    bool empty()
    {
        return queue.empty();
    }
};
