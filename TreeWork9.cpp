/* ��� ��������� �1 �� ������ ��������� ������. ������� �������� ����
������ ������ � ���������� ������� (������� ��������� �������� �����,
����� ���������� ������ ��������� � ���������� �������, ����� - 
���������� ������� ��������� � ���������� �������*/

#include "pt4.h"

using namespace std;

void print(PNode Tree)
{
    if (!Tree)
        return;
    pt << Tree->Data;
    print(Tree->Left);
    print(Tree->Right);
}

void Solve()
{
    Task("TreeWork9");
    PNode p1;
    pt >> p1;
    print(p1);
}
