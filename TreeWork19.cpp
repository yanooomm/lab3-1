/* Дано бинарное дерево и указатель корень дерева р1.
Необходимо определить, является ли дерево идеально-сбалансированным.
В качестве результата вывести логические значение: True или False.
Дерево называется идеально-сбалансированным, если для каждой его вершины
выполнено условие : число вершин ее левого и правого поддерева отличается
не больше, чем на 1*/

#include "pt4.h"

using namespace std;

int PerfectLeftTree(PNode Tree, int lef)
{
    if (!Tree)
        return lef;
    lef += 1;
    PerfectLeftTree(Tree->Left, lef);
    PerfectLeftTree(Tree->Right, lef);
}
int PerfectRightTree(PNode Tree, int rig)
{
    if (!Tree)
        return rig;
    rig += 1;
    PerfectRightTree(Tree->Left, rig);
    PerfectRightTree(Tree->Right, rig);
}

void Solve()
{
    Task("TreeWork19");
    int lef = 0;
    PNode p1;
    pt >> p1;
    int rig = 0;
    lef = PerfectLeftTree(p1->Left, lef);
    rig = PerfectRightTree(p1->Right, rig);
    int ans = lef - rig;
    if (ans == 1 || ans == 0 || ans == -1)
        pt << true;
    else
        pt << false;
}
