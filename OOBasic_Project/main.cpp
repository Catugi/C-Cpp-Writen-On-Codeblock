#include <iostream>
#include <iomanip>

using namespace std;
class Student
{
private:
    int m_roll;
    string m_name;
    float m_markMaths;
    float m_markPhysics;
    float m_markChemistry;
public:
    Student();
    Student(int p_roll, string p_name, float p_markMaths = 0.0f, float p_markPhysics = 0.0f, float p_markChemistry = 0.0f);

    void setRoll(int p_roll);
    void setName(string p_name);
    void setMarkMaths(float p_markMaths);
    void setMarkPhysics(float p_markPhysics);
    void setMarkChemistry(float pmarkChemistry);

    int getRoll() const;
    string getName() const;
    float getMarkMaths() const;
    float getMarkPhysics() const;
    float getMarkChemistry() const;

    float totalMarks() const;
    float average() const;
    char grade() const;
    ~Student();
protected:
};

int main()
{
    setlocale(LC_ALL, "pt-br");
    int m_roll;
    string m_name;
    float m_markMaths;
    float m_markPhysics;
    float m_markChemistry;

    cout<<"Informe o numero: ";
    cin>>m_roll;
    cout<<"Informe o nome: ";
    cin>>m_name;
    cout<<"Informe a nota de matematica: ";
    cin>>m_markMaths;
    cout<<"Informe a nota de fisica: ";
    cin>>m_markPhysics;
    cout<<"Informe a nota de quimica: ";
    cin>>m_markChemistry;
    Student stdOne(m_roll, m_name);
    stdOne.setMarkMaths(m_markMaths);
    stdOne.setMarkPhysics(m_markPhysics);
    stdOne.setMarkChemistry(m_markChemistry);
    cout<<"Total de pontos: "<<stdOne.totalMarks()<<endl;
    cout<<"Media final: "<<stdOne.average()<<endl;
    cout<<"Classificaçao: "<<stdOne.grade()<<endl;
    return 0;
}





Student::Student()
    :m_roll(0),m_name(""), m_markMaths(0.0), m_markPhysics(0.0), m_markChemistry(0.0)
{}

Student::Student(int p_roll, string p_name, float p_markMaths, float p_markPhysics, float p_markChemistry)
    :m_roll(p_roll), m_name(p_name)
{
    setMarkChemistry(p_markChemistry);
    setMarkMaths(p_markMaths);
    setMarkPhysics(p_markPhysics);
}

void Student::setRoll(int p_roll)
{
    m_roll = p_roll;
}
void Student::setName(string p_name)
{
    m_name = p_name;
}
void Student::setMarkMaths(float p_markMaths)
{
    if(p_markMaths > 0.0)
        m_markMaths = p_markMaths;
    else
        m_markMaths = 0.0;
}
void Student::setMarkPhysics(float p_markPhysics)
{
    if(p_markPhysics > 0.0)
        m_markPhysics = p_markPhysics;
    else
        m_markPhysics = 0.0;
}
void Student::setMarkChemistry(float p_markChemistry)
{
    if(p_markChemistry >0.0)
        m_markChemistry = p_markChemistry;
    else
        m_markChemistry = 0.0;
}

int Student::getRoll() const
{
    return m_roll;
}
string Student::getName() const
{
    return m_name;
}
float Student::getMarkMaths() const
{
    return m_markMaths;
}
float Student::getMarkPhysics() const
{
    return m_markPhysics;
}
float Student::getMarkChemistry() const
{
    return m_markChemistry;
}

float Student::totalMarks() const
{
    return (m_markChemistry + m_markMaths + m_markPhysics);
}
char Student::grade() const
{
    float percentage = 100*(average()/20);
    if (percentage >= 75)
        return 'A';
    else if(percentage >= 50)
        return 'B';
    else if(percentage >= 25)
        return 'C';
    else
        return 'D';
}
float Student::average() const
{
    return totalMarks()/3;
}
Student::~Student() {}
