#include<iostream>
#include "student.h"
void Student::display()
{
    cout<<"num:"<<num<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"sex£º"<<sex<<endl;
}
void Student::set_value()
{
    num=0013;
    name="Kanghui";
    sex='M';
}
