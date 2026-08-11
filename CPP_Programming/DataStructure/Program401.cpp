#include <iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
   private:
       PNODE first;
       int iCount;
    public:
       SinglyLL()
       {
          cout<<"Inside Constructor\n";
          this->first=NULL;
          this->iCount=0;

       }


};
int main()
{
    SinglyLL sobj;


    // consider there is 5 nodes 
    sobj.first = NULL;  //Error
    sobj.iCount = 15;
    return 0;
}