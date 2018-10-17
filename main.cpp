#include <iostream>
#include "List.h"
using  namespace std;

int main() {

    List<int> L;
    L.add_tail(2);
    L.add_tail(10);
    L.add_head(18);
    L.get_count();
    L.show();

    return 0;
}