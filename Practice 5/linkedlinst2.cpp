#include "lis2.h"

ListV2::ListV2()
    :size(0)
{
    head=nullptr;
    tail=nullptr;
}

ListV2::~ListV2()
{

    Node *nextNode;
//////dwaghfjhdrgs
    while(head)
    {
        nextNode = head;
        head = head->next;
        delete nextNode;
    }

}

bool ListV2::isEmpty()
{
    if(!head)
        return true;
    return false;
}

void ListV2::pushBack(std::string data)
{
    Node *new_node= new Node(data);
    if(head == nullptr)
    {
        std::cout<<"Head don't exist"<<std::endl;

        new_node->next = new_node->prev = new_node;
        head = tail = new_node;


        size++;
        std::cout<<"Head:: "<<head<<std::endl;
        std::cout<<"Tail:: "<<tail<<std::endl<<std::endl;
    }
    else
    {
        std::cout<<"Head exist"<<std::endl;
        tail->next= new_node;
        new_node->next = head;
        new_node->prev = tail;
        tail=new_node;
        size++;
        std::cout<<"Head:: "<<head<<std::endl;
        std::cout<<"Tail:: "<<tail<<std::endl<<std::endl;
    }

}



void ListV2::pushFront(std::string data)
{
    Node *new_node = new Node(data);
    std::cout<<"Node adress:: "<<new_node<<std::endl;
    if(!head)
    {
        size++;
        std::cout<<"Head don't exist"<<std::endl;

        new_node->next = new_node->prev = new_node;
        head = new_node;
        tail = new_node;


        std::cout<<"Head:: "<<head<<std::endl;
        std::cout<<"Tail:: "<<tail<<std::endl<<std::endl;
    }
    else
    {
        size++;
        std::cout<<"Head exist"<<std::endl;
        tail->next= new_node;
        new_node->prev=tail;
        new_node->next=head;
        head = new_node;
        std::cout<<"Head:: "<<head<<std::endl;
        std::cout<<"Tail:: "<<tail<<std::endl<<std::endl;
    }
}




void ListV2::printList()
{
    if(head == nullptr)
    {
        std::cout<<"Empty List\n"<<std::endl;
        return;
    }

    Node *temp = head;
    for(size_t i=0 ; i++<size ; temp=temp->next)
        std::cout<<temp<<" :: "<<temp->data<<std::endl;


    delete temp;
}

