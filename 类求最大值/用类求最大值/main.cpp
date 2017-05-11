#include <iostream>
using namespace std;
class Max
{
private:
    int array[10];
    int max;
public:
    void set_max();

};
void Max::set_array()
    {
        for(int i=0;i<10;i++)
        cin >>array[i];
    }
void Max::set_max()
    {
        int i,max=array[0];
        for(i=1;i<10;i++)
        {
            max=max>array[i]?max:array[i];
        }
        cout <<"max="<<max;
    }


int main()
{
    Max t;
    t.set_array();
    t.set_max();
    return 0;
}
