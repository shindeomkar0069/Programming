#include<iostream>
using namespace std;

template <class T>
void Display( T Value,int Size)
{
    int i=0;
    for(i=0;i<Size;i++)
    {
        cout << Value << " ";
    }
    cout<<endl;

}
int main()
{
    Display("M",5);
    Display(11,3);
    Display(20.4,5);
    return 0;
}