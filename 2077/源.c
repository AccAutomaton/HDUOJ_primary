/*         ����������n����  Ҫ�����A��ͨ��B�̰ᵽC��   ֻ�轫����ģ�n-2�������ȴ�A��ͨ��B���ᵽC��    �ٽ���n-1���̰ᵽB����  ����Ϊ��n���������Ȩ���Է��ڵ�(n-1)������ 
           ֮���˼·�͸�2064����һ�� ���ǽ�C�����ϵ�n-2����һ���ᵽA���� �ٽ�B���ϵĵ��ŷŵĵ�n-1��͵�n��ᵽC������
           �ɴ˿ɼ�   �����n-2��  һ���ᶯ�����ƶ�3��  ����ĵ�n��͵�n-1��ֻ��ᶯ4��
           ss[n]=3*as[n-2]+4;  
           as[i]�������n��û����Ȩ�������ƶ������Ŵ���
*/
#include <stdio.h>
void f(void);
long long int fx[65], fxx[65];
int main(void)
{
    int n, N;
    f();
    while ((scanf("%d", &N) != EOF))
    {
        while (N--)
        {
            scanf("%d", &n);
            printf("%lld\n", fxx[n]);
        }
    }
    return 0;
}
void f(void)
{
    fx[1] = 2;
    for (int i = 2; i < 65; i++)
        fx[i] = 3 * fx[i - 1] + 2;
    fxx[1] = 2;
    for (int i = 2; i < 65; i++)
        fxx[i] = 3 * fx[i - 2] + 4;
}