#include <iostream>
#include <fstream>

using namespace std;

class Student
{
private:
    string m_name;
    int m_roll;
    string m_branch;
public:
    Student() {}
    Student(string p_name,int p_roll,string p_branch)
    {
        m_name=p_name;
        m_roll=p_roll;
        m_branch=p_branch;
    }
    friend ofstream & operator<<(ofstream &ofs,Student s);
    friend ifstream & operator>>(ifstream &ifs,Student &s);
    friend ostream & operator<<(ostream &os,Student &s);
};
ofstream & operator<<(ofstream &ofs,Student s)
{
    ofs<<s.m_name<<endl;
    ofs<<s.m_roll<<endl;
    ofs<<s.m_branch<<endl;
    return ofs;
}
ifstream & operator>>(ifstream &ifs,Student &s)
{
    ifs>>s.m_name;
    ifs>>s.m_roll;
    ifs>>s.m_branch;
    return ifs;
}


ostream & operator<<(ostream &os,Student &s)
{
    os<<"Name "<<s.m_name<<endl;
    os<<"Roll "<<s.m_roll<<endl;
    os<<"Branch "<<s.m_branch<<endl;
    return os;
}
int main()
{
    ofstream ofs("Test.txt");
    Student s1("John",10,"CS");
    ofs<<s1;
    ofs.close();
    Student s2;
    ifstream ifs("Test.txt");
    ifs>>s1;
    cout<<s1;

}

