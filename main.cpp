#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int x, y;
    int z;
    test();
    cout<<"Hi, please enter two numbers: ";
    cin>>x;
    cin>>y;

    return 0;
}

// Memory leak
void test() {
  int *p = new int;
} 
