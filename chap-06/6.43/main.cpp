#include <iostream>
//û��#include <stdio.h>���ͷ�ļ�
using namespace std;

int main()
{
    int c=0;
    if((c=cin.get())!=EOF)
    {
        main();
        cout<<c;
    }
}
