/*       ���轫n������A��BŲ��C��Ҫf[n]������ô������ƶ����̿�����������������n-1���A��BŲ��C��Ҫf[n-1]�����ٽ���n���AŲ��B����Ҫһ����
         �ٽ���n-1���C��BŲ��A����Ҫf[n-1]�����ٽ���n���BŲ��C����Ҫһ�����ٽ���n-1���A��BŲ��C����Ҫf[n-1]�����ܼ�3*f[n-1] + 2�������� f[1] = 2
*/
#include <stdio.h>
void f(void);
long long int fx[65];
int main(void)
{
    int n;
    f();
    while ((scanf("%d", &n)) != EOF)
    {
        printf("%lld\n", fx[n]);
    }
    return 0;
}
void f(void)
{
    fx[1] = 2;
    for (int i = 2; i < 65; i++)
        fx[i] = 3 * fx[i - 1] + 2;
}