#include <iostream>
#include "BinaryTree.h"
/*13. Построить класс для работы с бинарным деревом, узлы
которого содержат действительные числа. Создать дерево.
Определить высоту дерева (максимальное число узлов,
принадлежащих пути от корня дерева до любого из его листьев).
Подсчитать число элементов, равных максимальному.*/
using namespace std;

int main()
{
	srand(time(NULL));
	BinaryTree tree1(10);
	tree1.Look(tree1.root);
	cout << tree1.maxCount(tree1.root) << endl;
	cout << tree1.Height(tree1.root) << endl;
	return 0;
}
