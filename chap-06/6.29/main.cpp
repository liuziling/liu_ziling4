#include <iostream>

using namespace std;

int main()
{
    int x=2,y=1,z,a,b,line=0;//xΪ��С������b��Χ����������lineÿ�������ֵ��
    cout<<"Please enter you want the maximum value in the range:";
    cin>>b;
    while(x<=b)
    {
        z=x-y;
        a=x%z;
        if(a==0)
        {
            if(z==1)//xΪ����
            {
                cout<<x<<" ";
                x++;
                y=1;
                line++;
            }
            else
            {
                x++;
                y=1;//����Ҫ����ˣ�ԭ��������
            }
        }
        else//û��������һֱû������
        {
            y++;
            if(line==10)//����ʮ��������
            {
                cout<<endl;
                line=0;
            }
        }
    }
    return 0;
}
