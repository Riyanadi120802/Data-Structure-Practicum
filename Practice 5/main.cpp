#include <iostream>
#include <string>

#include "list2.h"
using namespace std;

void pushFrontTest()
{
    ListV2 *myListV2 = new ListV2();

    myListV2->printList();
    myListV2->pushFront("Jan Nowak");
    myListV2->pushFront("Marcin Kowalski");
    myListV2->pushFront("Anna Zielinska");
    myListV2->pushFront("Izabela Wozniak");
    myListV2->pushFront("Wojciech Kwiatkowski");

    cout<<"Head Adress function:: "<<myListV2->head<<endl;
    cout<<"Tail ADress function:: "<<myListV2->tail<<endl;

    myListV2->printList();

    delete  myListV2;

}

void pushBackTest()
{
    ListV2 *myListV2 = new ListV2();
    myListV2->printList();

    myListV2->pushBack("Jan Nowak");

    myListV2->pushBack("Marcin Kowalski");
    myListV2->pushBack("Anna Zielinska");
    myListV2->pushBack("Izabela Wozniak");
    myListV2->pushBack("Wojciech Kwiatkowski");


    cout<<"Head Adress in function:: "<<myListV2->head<<endl;
    cout<<"Tail ADress in function:: "<<myListV2->tail<<endl;

    myListV2->printList();

    delete myListV2;

}
int main()
{
    std::ios_base::sync_with_stdio(0);


   // pushFrontTest();
    pushBackTest();




    return 0;
}
