#include <iostream>

using namespace std;

void print(int a)
{
    cout << "Hello " << a << endl;
}

void print()
{
    cout << "Hello " << 5 << endl;
}

int main()
{
    print(5);
    print();
    return 0;
}

/*
OUTPUT

Hello 5
Hello 5
*/