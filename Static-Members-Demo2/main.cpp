#include <iostream>

using namespace std;

class Innova
{
public:
    Innova() {}
    ~Innova() {}
    static float getPrice()
    {
        return price;
    }
protected:
private:
    static float price;
};

float Innova::price = 2000.0f;

class Student
{
public:
    Student(string p_name)
    {
        addminNo++;
        rollno = addminNo;
        name = p_name;
    }
    static int getRollNo()
    {
        return addminNo;
    }

    void display()
    {
        cout<<"Name "<<name<<endl<<"Roll no: "<<rollno<<endl;
    }
    ~Student() {}
protected:
private:
    int rollno;
    string name;
    static int addminNo;
};

int Student::addminNo = 0;

int main()
{
//    Innova i1, i2, i3;
//    cout<<i1.getPrice()<<endl;
//    cout<<i2.getPrice()<<endl;
//    cout<<i3.getPrice()<<endl;
//    cout<<Innova::getPrice()<<endl;
    Student st1("Marcio");
    Student st2("Jhon");
    Student st3("Jhon");
    st1.display();
    st2.display();
    st3.display();
    cout<<"Num of student: "<<Student::getRollNo()<<endl;
    return 0;
}
