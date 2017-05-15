#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Box
{
public:
    Box(string na="Kanghui",int nu=13,int g=90): name(na),num(nu),grade(g){}
    void show(Box arry[],int i);
private:
    string name;
    int num;
    int grade;
};
void Box::show(Box a[],int i)
{
    cout <<setiosflags(ios::left)<<setw(10)<<"name"<<"    "<<"num"<<"  "<<"grade"  <<endl;
    for(i=0;i<3;i++)
    {
        cout <<setiosflags(ios::left)<<setw(10)<<a[i].name<<"    "<<a[i].num<<"    "<<a[i].grade  <<endl;
    }
}
int main()
{
    Box a[3]={
    Box("Kanghui",13,90),
    Box("Xiaofeng",38,91),
    Box("xuyunsong",39,92)
    };
    a[0].show(a,3);
    return 0;
}
