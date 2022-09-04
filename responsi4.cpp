#include <iostream>
#include "lqueue.h"
#include "btnode.h"
#include "xcept.h"
using namespace std;
template <class T>
void Visit(BinaryTreeNode<T> *x){
	cout << x->data << ' ';
}

template <class T>
void PreOrder(BinaryTreeNode<T> *t){
	if (t){
		Visit(t);
		PreOrder(t->LeftChild);
		PreOrder(t->RightChild);
	}
}

template <class T>
void InOrder(BinaryTreeNode<T> *t){
	if (t){
		InOrder(t->LeftChild);
		Visit(t);
		InOrder(t->RightChild);
	}
}

template <class T>
void PostOrder(BinaryTreeNode<T> *t){
	if (t){
		PostOrder(t->LeftChild);
		PostOrder(t->RightChild);
		Visit(t);
	}
}

template <class T>
void LevelOrder(BinaryTreeNode<T> *t){
	LinkedQueue<BinaryTreeNode<T>*> Q;
	while (t){
		Visit(t);
		if (t->LeftChild) Q.Add(t->LeftChild);
		if (t->RightChild) Q.Add(t->RightChild);
		try
		{
			Q.Delete(t);
		}
		catch (OutOfBounds)
		{
			return;
		}
	}
}

int main(){
	BinaryTreeNode<char> A, B, C, D, E;
	A.data = '+';
	B.data = '-';
	C.data = '7';
	D.data = '4';
	E.data = '9';
	A.LeftChild = &B;
	A.RightChild = &C;
	B.LeftChild = &D;
	B.RightChild = &E;
	C.LeftChild = C.RightChild = D.LeftChild = D.RightChild = E.LeftChild = E.RightChild = 0;
	cout << "Kunjungan Inorder : ";
	InOrder(&A);
	cout << endl;
	cout << "Kunjungan Preorder : ";
	PreOrder(&A);
	cout << endl;
	cout << "Kunjungan Postorder : ";
	PostOrder(&A);
	cout << endl;
	cout << "Kunjungan Level order : ";
	LevelOrder(&A);
	cout << endl;
}
