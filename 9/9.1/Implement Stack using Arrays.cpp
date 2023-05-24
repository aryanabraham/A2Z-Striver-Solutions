/* 

The structure of the class is
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
*/

void MyStack :: push(int x)
{
    // Your Code
    arr[top++]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code
    return top==-1?-1:arr[top--];
}
