#include<iostream>
#include "volume.h"
using namespace std;
void Volume::set_value()
{
    cin>>length>>width>>height;
}
void Volume::calculate()
{
    V=length*width*height;
}
void Volume::display()
{
    cout<<"Με»ύ£Ί"<<V<<endl;
}
