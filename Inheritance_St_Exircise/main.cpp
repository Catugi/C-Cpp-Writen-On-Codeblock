#include <iostream>

using namespace std;
/*Employee class start here*/
class Employee
{
public:
    Employee(int p_emp_id = 0, string p_emp_name = "Jhon Doe");
    void setEmployeeId(int p_emp_id);
    void setEmployeeName(string p_emp_name);

    int getEmployeeId() const;
    string getEmployeeName() const;

    ~Employee() {}
protected:
private:
    int m_emp_id;
    string m_emp_name;
};

Employee::Employee(int p_emp_id, string p_emp_name)
{
    setEmployeeId(p_emp_id);
    setEmployeeName(p_emp_name);
}

void Employee::setEmployeeId(int p_emp_id)
{
    if(p_emp_id > 0)
        m_emp_id = p_emp_id;
    else
        m_emp_id = 0;
}

void Employee::setEmployeeName(string p_emp_name)
{
    m_emp_name = p_emp_name;
}

int Employee::getEmployeeId() const
{
    return m_emp_id;
}
string Employee::getEmployeeName() const
{
    return m_emp_name;
}
/*Employee ends here*/

/*FulltimeEmployee starts here*/
class FulltimeEmployee : public Employee
{
public:
    FulltimeEmployee(int p_emp_id, string p_emp_name, double p_salary);

    void setSalary(double p_salary);
    double getSalary() const;

    ~FulltimeEmployee() {}
protected:
private:
    double m_salary;
};

FulltimeEmployee::FulltimeEmployee(int p_emp_id, string p_emp_name, double p_salary = 0.0)
    :Employee(p_emp_id,p_emp_name )
{
    setSalary(p_salary);
}

void FulltimeEmployee::setSalary(double p_salary)
{
    if(p_salary > 0)
        m_salary = p_salary;
    else
        m_salary = 0.0;
}
double FulltimeEmployee::getSalary() const
{
    return m_salary;
}
/*FulltimeEmployee ends here*/

/*ParttimeEmployee starts here*/
class ParttimeEmployee : public Employee
{
public:
    ParttimeEmployee(int p_emp_id, string p_emp_name, double p_wage = 0.0);

    void setWage(double p_wage);
    double getWage() const;

    ~ParttimeEmployee() {}
protected:
private:
    double m_wage;
};

ParttimeEmployee::ParttimeEmployee(int p_emp_id, string p_emp_name, double p_wage)
    :Employee(p_emp_id, p_emp_name )
{
    setWage( p_wage);
}

void ParttimeEmployee::setWage(double p_wage)
{
    if(p_wage > 0.0)
        m_wage = p_wage;
    else
        m_wage = 0.0;
}
double ParttimeEmployee::getWage() const
{
    return m_wage;
}
/*ParttimeEmployee starts here*/

int main()
{
    ParttimeEmployee p1(1,"John", 20000.0);
    FulltimeEmployee p2(2,"Raj", 800000.0);

    cout<<"Salary of "<<p2.getEmployeeName()<<" is "<<p2.getSalary()<<endl;
    cout<<"Daily wage of "<<p1.getEmployeeName()<<" is "<<p1.getWage()<<endl;
    return 0;
}
