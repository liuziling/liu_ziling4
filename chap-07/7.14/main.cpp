#include <iostream>
#include <array>
using namespace std;

int main()
{
    int a[20],b[20],number,i,m=0,j=0;
    for(i=0;i<20;i++)
        {
            cin>>number;
            if(number<10||number>100)
                {
                    cout<<"Please enter a new number!"<<endl;
                    break;
                }
                else if(number>=10&&number<=100)
                {
                    a[i]=number;
                }
        }
    for(i=1;i<20;i++)
        {
            for(m=0;m<j;m++)
            {
                if(b[m]==a[i])
                break;//��һ��ѭ���������ִ�к�ֱ��m��j�����ִ��if
            }
            if(m==j)
            {
                b[m]=a[i];
                j++;//j��һ
            }
        }
    for(i=0;i<j;i++)
        cout<<b[i];
    return 0;
}
