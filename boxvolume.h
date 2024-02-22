#include<iostream>
using namespace std;
#define VOLUME
void volume(float l,float b,float h)
{
     float volume=l*b*h;
     cout<<"The volume of the box : "<<volume<<endl;
}
#include <iostream>
#include "boxArea.h"
#include "boxvolume.h"

// #ifdef void boxArea(float,float,float)
    // #defined void boxArea(float,float,float)
int main()
{
    boxArea(3,4,5);
    boxvolume(6.1,3,1);
    

}
