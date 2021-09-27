#include <stdio.h>
int main(void)
{
    int a, b;
    while ((scanf("%d %d", &a, &b)) != EOF)
        printf("%d\n", gcd(a, b));
    return 0;
}
int gcd(int a, int b)
{
    int temp, ans, c = a, d = b;
    if (c < d)
    {
        temp = c;
        c = d;
        d = temp;
    }
    while (d != 0)
    {
        temp = c % d;
        c = d;
        d = temp;   //�����Լ��
    }
    ans = (a / c) * b;   // ��С��������������֮�����������Լ�� && a*b���ܳ���int�ķ�Χ
    return ans;
}