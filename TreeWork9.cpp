/* ƒан указатель р1 на корень непустого дерева. ¬ывести значени€ всех
вершин дерева в префиксном пор€дке (вначале выводитс€ значение корн€,
затем содержимое левого поддерева в префиксном пор€дке, затем - 
содержимое правого поддерева в префиксном пор€дке*/

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
