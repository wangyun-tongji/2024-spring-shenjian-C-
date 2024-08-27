#include<iostream>
#include<iomanip>
using namespace std;
int number[3];//��¼Բ����
int stack[3][10];//��¼ÿ��Բ����Բ�̵ı��
void initlize(int &layer,char &src,char &tmp,char &dst)
{
    while (1)
    {
        cout << "�����뺺ŵ���Ĳ���(1-10)" << endl;
        cin >> layer;
        if (!(layer <= 10 && layer >= 1))
        {
            cin.clear();
            cin.ignore(65536, '\n');
            continue;
        }
        else
        {
            break;
        }
    }
    while (1) {
        cout << "��������ʼ��(A-C)" << endl;
        cin >> src;
        if (!(src == 'a' || src == 'A' ||
            src == 'B' || src == 'b' ||
            src == 'C' || src == 'c'))
        {
            cin.clear();
            cin.ignore(65536, '\n');
            continue;
        }
        else
        {
            break;
        }
    }
    while (1)
    {

        cout << "������Ŀ����" << endl;

        cin >> dst;

        if (!(dst == 'a' || dst == 'A' ||

            dst == 'B' || dst == 'b' ||

            dst == 'C' || dst == 'c'))

        {

            cin.clear();

            cin.ignore(65536, '\n');

            continue;

        }

        else
        {
            if (dst == src)
            {
                cout << "Ŀ����(" << dst << ")��������ʼ��(" << src << ")��ͬ" << endl;
                cin.clear();
                cin.ignore(65536, '\n');
                continue;
            }
            else
                break;
        }

    }
    if (src == 'A' || src == 'a')
        src = 'A';
    if (src == 'B' || src == 'b')
        src = 'B';
    if (src == 'C' || src == 'c')
        src = 'C';
    if (dst == 'A' || dst == 'a')
        dst = 'A';
    if (dst == 'B' || dst == 'b')
        dst = 'B';
    if (dst == 'C' || dst == 'c')
        dst = 'C';
    for (int i = 0; i < 3; i++)
    {
        if ('A' + i == src || 'A' + i == dst)
            ;
        else
        {
            tmp = 'A' + i;
            break;
        }
    }
    number[src - 'A'] = layer;//��number[0]��number[2]�����������������ϵ�Բ����
    number[tmp - 'A'] = 0;
    number[dst - 'A'] = 0;
}
void hanoi(int n, char src, char tmp, char dst)
{
    static int a = 0;
    static int i = 1;
    if (n == 1)
    {
        cout << "��" << setw(4) << i++ << "��( " << n << "):" << src << "-->" << dst<<" ";
        a = stack[src - 'A'][--number[src - 'A']];
        stack[dst - 'A'][number[dst - 'A']++] =a;
        stack[src - 'A'][number[src - 'A']] = 0;
        for (int i = 0; i < 3; i++)
        {
            cout << char(65 + i) << ":";
            for (int j = 0; j < 10; j++)
            {
                if (stack[i][j])
                    cout << stack[i][j] << " ";
                else
                    cout << "  ";
            }
            if (i == 2)
                cout << endl;
            else
                ;
        }
    }
    else
    {
        hanoi(n - 1, src, dst, tmp);
        cout << "��" << setw(4) << i++ << "��( " << n << "):" << src << "-->" << dst<<" ";
        a = stack[src - 'A'][--number[src - 'A']];
        stack[dst - 'A'][number[dst - 'A']++] = a;
        stack[src - 'A'][number[src - 'A']] = 0;
        for (int i = 0; i < 3; i++)
        {
            cout << char(65 + i) << ":";
            for (int j = 0; j < 10; j++)
            {
                if (stack[i][j])
                    cout << stack[i][j] << " ";
                else
                    cout << "  ";
            }
            if (i == 2)
                cout << endl;
            else
                ;
        }
        hanoi(n - 1, tmp, src, dst);
    }
}
int main()
{
    char src, tmp, dst;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            stack[i][j] = 0;
        }
    }
    int layer;
    initlize(layer,src,tmp,dst);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < layer; j++)
        {
            if (number[i] != 0)
                stack[i][j] = layer - j;//��Ÿ�ֵ
            else
                stack[i][j] = 0;
        }
    }
    cout << "��ʼ:" << setw(14) << " ";
    for (int i = 0; i < 3; i++)
    {
        cout << char(65 + i) << ":";
        for (int j = 0; j < 10; j++)
        {
            if (stack[i][j])
                cout << stack[i][j] << " ";
            else
                cout << "  ";
        }
        if (i == 2)
            cout << endl;
        else
            ;
    }
    hanoi(layer, src, tmp, dst);
    return 0;
}