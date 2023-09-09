#include<iostream>
using namespace std;
class hero{

    char level;
    int health;
    int gethealth(){
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health=h;
    }
    void setlevel(char a)
    {
        level=a;
    }
    
};
int main()
{
    hero h1;
    h1.sethealth(79);
    h1.setlevel(a);
    
    
    cout<<"health is  "<<h1.gethealth<<endl;
    cout<<"level is  "<<h1.getlevel<<endl;
    return 0;
}
