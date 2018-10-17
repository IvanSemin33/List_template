#ifndef LAB5_2_LIST_H
#define LAB5_2_LIST_H

#include <string>

template <class Type>
struct Node{
    Type Val;
    Node *Next, *Prev;
};

template <class Type>
class List {
    Node<Type> *Head, *Tail;
    int count;
public:
    List();
    List(const List&);
  //~List();
    int get_count();
    void insert(int pos = 0);
    void add_tail(Type n);
    void add_head(Type n);

   // List& operator=(const List&);
   // List& operator+(const List&);

    void show();
   // void show(int pos);


};


#endif //LAB5_2_LIST_H
