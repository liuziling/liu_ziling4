#include <iostream>

using namespace std;

(a)float cube(float);

cube(float number)//��ͷû��float��
{
    return number*number*number;
}
(b)int randomNumber=srand();//()����Ҫ�з�Χ%2������
(c)float y=123.45678;
int x;
x=y;
cout<<static_cast<float>(x)<<endl;//y���Բ��ǵ����ȸ��㣬Ӧ��float��Ϊdouble;
(d)double square(double number)
{
    double number=0;
    return number*number;//��Զ����0�����ϵĵڶ���number��һ�£�
}
(e)int sum(int n)
{
    if(0==n)
        return 0;
    else
        return n+sum(n);//�����޷���ֹ��Ӧ��sum��n���ڽ�N���������ı䣻
}
