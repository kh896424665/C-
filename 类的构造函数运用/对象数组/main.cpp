#include<iostream>
using namespace std;
class Stu
{
public:
    Stu(int,int);
    void show();
    int num;
    int grade;
};
Stu::Stu(int x,int y)
{
    num=x;
    grade=y;
}
void Stu::show()
{
    cout<<num<<"  "<<grade<<endl;
}
int max(Stu *s)
{
    int t=s->grade;
    int max=s->num;
    for(int i=0;i<4;i++)
    {
        s++;
        if(t<s->grade)
        {
            t=s->grade;
            max=s->num;
        }
    }
    return max;
}
int main()
{
    Stu a[5]={
    Stu(13,90),
    Stu(38,100),
    Stu(39,92),
    Stu(28,34),
    Stu(35,95)
    };
    Stu *p;
    p=a;
    p->show();
    (p+2)->show();
    (p+4)->show();
    cout<<"分数最高的学号是："<<max(p)<<endl;
    return 0;

}
