#include <iostream>
#include <iomanip>
using namespace std;

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2����������ȫ�ֱ�������̬�ֲ�����
   3�������������������
   4��main�����������룬����ѭ��
   --------------------------------------------------------------------- */

   /***************************************************************************
     �������ƣ�
     ��    �ܣ���ӡn�㺺ŵ�����ƶ�˳��
     ���������int n������
               char src����ʼ��
               char tmp���м���
               char dst��Ŀ����
     �� �� ֵ��
     ˵    ����1�����������βΡ��������;���׼��
               2������������������κ���ʽ��ѭ��
   ***************************************************************************/
void hanoi(int n, char src, char tmp, char dst)
{
    if (n == 1)
    {
        cout <<setw(2)<< n << "# " << src << "-->" << dst << endl;
    }
    else
    {
        hanoi(n - 1, src, dst, tmp);//ǰn-1��ᵽ�м�������
        cout <<setw(2)<< n << "# " << src << "-->" << dst << endl;
        hanoi(n - 1, tmp, src, dst);
    }
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����1��������롢���õݹ麯��
            2�������������ʱ������ʹ��ѭ��
            3��Ϊ��ͳһ��飬���������������������������ʼ/Ŀ�����Ĵ��벻Ҫ��ͳһ����������ֱ�ӷ���main�У�
***************************************************************************/
int main()
{
    char src, tmp, dst;
    int layer;
    while (1)
    {
        cout << "�����뺺ŵ���Ĳ���(1-16)" << endl;
        cin >> layer;
        if (!(layer <= 16 && layer >= 1))
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
    hanoi(layer, src, tmp, dst);
    return 0;
}