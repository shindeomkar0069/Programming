#include <iostream>
using namespace std;

template <class T>
void ReverseArray(T *Arr, int Size)
{
    int start = 0;
    int end = Size - 1;

    while(start < end)
    {
        T temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;

        start++;
        end--;
    }
}

template <class T>
void Display(T *Arr, int Size)
{
    for(int i = 0; i < Size; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};

    
    Display(Arr, 5);
    ReverseArray(Arr, 5);
    Display(Arr, 5);

    char Crr[] = {'A', 'B', 'C', 'D', 'E'};

    
    Display(Crr, 5);
    ReverseArray(Crr, 5);
    Display(Crr, 5);

    return 0;
}