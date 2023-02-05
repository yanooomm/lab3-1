/*���� ������ ������ � ��������� ������ ������ �1. ���������� ��������� 
���� �� � ������ �������� �. � �������� ���������� ������� True ��� False.
������� ������ ����� ��������� �� ������� ���������� T(n) = O(log n), ��� 
n - ���������� ������*/

#include "pt4.h"

using namespace std;

PNode search(PNode Tree, int x)
{
    if (!Tree)
        return NULL;
    if (x == Tree->Data)
        return Tree;
    if (x < Tree->Data)
        return search(Tree->Left, x);
    else
        return search(Tree->Right, x);
}

void Solve()
{
    Task("TreeWork11");
    PNode p1;
    int x;
    pt >> p1 >> x;
    p1 = search(p1, x);
    if (p1 == NULL)
        pt << false;
    else
        pt << true;
}
