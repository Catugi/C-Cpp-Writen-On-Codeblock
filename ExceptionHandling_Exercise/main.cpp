#include <iostream>

using namespace std;

class StackOverFlow:exception
{
public:
    // StackOverFlow();
    const char * what()
    {
        return string("Stack Overflow").c_str();
    }
    //~StackOverFlow() {}
protected:
private:
};
class StackUnderFlow:exception
{
public:
    //StackUnderFlow(){}
    const char * what()
    {
        return string("Stack Underflow").c_str();
    }
    //~StackUnderFlow() {}
protected:
private:
};

class Stack
{
public:
    Stack(int p_size)
    {
        m_size = p_size;
        m_stk = new int[m_size];
    }
    void push(int p_member)
    {
        if(m_top == (m_size - 1))
            throw StackOverFlow();
        m_top++;
        m_stk[m_top] = p_member;
    }
    int pop()
    {
        if(m_top==-1)
            throw StackUnderFlow();
        return m_stk[m_top--];
    }
    ~Stack()
    {
        delete m_stk;
    }
protected:
private:
    int *m_stk;
    int m_top = -1;
    int m_size;
};

int main()
{
    Stack s(5);
    try
    {

        s.push(2);
        s.push(3);
        s.push(4);
        s.push(10);
        s.push(9);
        s.push(8);

        s.pop();
        s.pop();
        s.pop();
        s.pop();
        s.pop();
        s.pop();
    }
    catch(StackOverFlow &e)
    {
        cout<<e.what()<<endl;

    }
    catch(StackUnderFlow &e)
    {
        cout<<e.what()<<endl;
    }
    cout<<"Bom trabalho"<<endl;
    return 0;
}

