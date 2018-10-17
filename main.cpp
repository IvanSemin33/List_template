#include <iostream>
#include "List.cpp"
using  namespace std;

int main() {

    List<int> L;
    cout<<"Addition:"<<endl;
    L.add_tail(1);//push_back
    L.show();
    L.add_tail(2);
    L.show();
    L.add_head(3);//push_front
    L.show();
    L.add_head(4);
    L.show();
    L.add_tail(5);
    L.show();
    cout<<"\nCount: "<<L.get_count()<<endl;
    cout<<"\nInsert in position 3"<<endl;
    L.insert(3);//вставляем элемент на 3 позицию
    L.show();
    cout<<"\nCopy:"<<endl;
    List<int> L2(L);//создание списка с помощью копирование
    L2.show();
    cout<<"\nDeletion:"<<endl;
    L2.del_head();//pop_front
    L2.show();
    L2.del_tail();//pop_back
    L2.show();
    cout<<"\nCount: "<<L2.get_count()<<endl;
    return 0;
}