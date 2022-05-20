#include <iostream>

using namespace std;

// implementation of linked list w/ templates
// example w/ list<int>
// fns stored at end of pgm as individual templates

// multiple forward declarations needed

template <class T>
class node;

template <class T>
class list;

template <class T>
   ostream& operator<< (ostream &, const list<T> &);  
                                              // overloaded print op.

template <class T>
class list
  {
  public:
    node<T>* head;                           // ptr to head of list
    list<T>();                                  // default constructor
    list<T>(const T[]);                         // another constructor
    ~list<T>();                                 // destructor
    list<T>(const list<T>& in_list);               // copy constructor
    list<T>& operator=(const list<T>& in_list);    // overloaded asgt op
    int count_e_iter() const;                // iterative traversal
    int count_e_recr() const;                // recursive traversal
  private:
    friend ostream& operator<< <>(ostream &, const list<T> &);  // overloaded print op.
    void reset();                            // reset to null
  };
  
template <class T>
class node
  {
  public:
    T item;                                  // content
    node<T>* link;                              // ptr to next node
    node<T>();                                  // default constructor
    node<T>(T, node<T>*);                          // another constructor
  private:
    friend class list<T>;                       // 'list' fns can see all of node
    int count_e_private();                   // rec. trav. helper fn
    friend ostream& operator<< <>(ostream &, const node<T> &);  
                                             // overloaded print op.

  };
  
// ***********************************


int main() 

{

  char my_string[80] = "i love peeps";
  int e_count;

  // constructor creates dynamic memory
  list<char> list1(my_string);

  cout << "list1 is at " << list1 << endl;

  // iterative traversal
  e_count = list1.count_e_iter();
  cout << "Counting iteratively, there are " << e_count << " e's" << endl;

  // recursive traversal
  e_count = list1.count_e_recr();
  cout << "Counting recursively, there are " << e_count << " e's" << endl << endl;

  // testing copy constructor
  list<char> list2(list1);
  cout << "list2 is at " << list2 << endl;

  // testing overloaded asgt op
  list2 = list1;
  cout << "list2 is at " << list2 << endl;

  return 0;
}
