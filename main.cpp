#include <iostream>
#include "List.cpp"
using  namespace std;

int main() {

    List<int> L;
    L.add_tail(2);
    L.show();
    L.add_tail(10);
    L.show();
    L.add_head(18);
    L.show();

    L.insert(3);//��������� ������� �� 3 �������
    L.show();

    List<int> L2(L);
    L2.show();

    cout<<"Count: "<<L.get_count()<<endl;


    return 0;
}