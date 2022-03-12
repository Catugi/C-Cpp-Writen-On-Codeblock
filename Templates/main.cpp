#include <iostream>
#include <string_view>

using namespace std;
using namespace std::literals;

class StackOverFlow:exception
{
public:
    // StackOverFlow();
    const string_view what()
    {
        return "Stack Overflow"sv;
    }
    //~StackOverFlow() {}
protected:
private:
};
class StackUnderFlow:exception
{
public:
    //StackUnderFlow(){}
    const string_view what()
    {
        return "Stack Underflow"sv;
    }
    //~StackUnderFlow() {}
protected:
private:
};

template<class T>
class Stack
{
public:
    Stack(int p_size)
    {
        m_size = p_size;
        m_stk = new T[m_size];
    }
    void push(T p_member);
    T pop();

    ~Stack()
    {
        delete m_stk;
    }
protected:
private:
    T *m_stk;
    int m_top = -1;
    int m_size;
};

int main()
{
    Stack<long> s(5);
    try
    {

        s.push(2);
        s.push(3);
        s.push(4);
        s.push(10);
        s.push(9);
        //s.push(8);

        cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
        cout<<s.pop()<<endl;
        //cout<<s.pop()<<endl;
        //cout<<s.pop()<<endl;
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


template <typename T>
void Stack<T>::push(T p_member)
{
    if(m_top == (m_size - 1))
        throw StackOverFlow();
    m_top++;
    m_stk[m_top] = p_member;
}

template<class T>
T Stack<T>::pop()
{
    if(m_top==-1)
        throw StackUnderFlow();
    return m_stk[m_top--];
}
