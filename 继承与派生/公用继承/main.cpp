#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int num;
    string name;
    char sex;
public:
    void get_value();
    void display();
};
void Student::get_value()
{
    cin >>num>>name>>sex;
}
void Student::display()
{
    cout<<"num:"<<num<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"sex:"<<sex<<endl;
}
class Student1:public Student
{
private:
    int age;
    string address;
public:
    void get_value1();
    void display1();
};
void Student1::get_value1()
{
    get_value();
    cin>>age>>address;
}
void Student1::display1()
{
    display();
    cout<<"age:"<<age<<endl;
    cout<<"address:"<<address<<endl;
}
int main()
{
    Student1 stu;
    stu.get_value1();
    cout<<"½á¹ûÊÇ£º"<<endl;
    stu.display1();
    return 0;
}
