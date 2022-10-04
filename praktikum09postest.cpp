#include <stdio.h>
typedef struct node{
	char data;
	node *kiri;
	node *kanan;
};

node *akar = NULL;
addNode(node **akar, char isi){
	if ((*akar) == NULL){
		node *baru;
		baru = new node;
		baru->data = isi;
		baru->kiri = NULL;
		baru->kanan = NULL;
		(*akar) = baru;
	}
}

preOrder(node *akar){
	if (akar != NULL){
		printf("%c ", akar->data);
		preOrder(akar->kiri);
		preOrder(akar->kanan);
	}
}

inOrder(node *akar){
	if (akar != NULL){
		inOrder(akar->kiri);
		printf("%c ", akar->data);
		inOrder(akar->kanan);
	}
}

postOrder(node *akar){
	if (akar != NULL){
		postOrder(akar->kiri);
		postOrder(akar->kanan);
		printf("%c ", akar->data);
	}
}

main(){
	char abjad;
	printf("\n\n\tPosisi Awal Tree:\n\n");
	printf("\t       J\n\t      / \\\n\t     D   R\n\t    /\n\t   E\n\t  / \\\n\t G   T\n\n");
	addNode(&akar, abjad = 'J');
	addNode(&akar->kiri, abjad = 'R');
	addNode(&akar->kanan, abjad = 'D');
	addNode(&akar->kiri->kiri, abjad = 'G');
	addNode(&akar->kiri->kiri->kiri, abjad = 'T');
	addNode(&akar->kiri->kiri->kanan, abjad = 'E');
	printf("Tampilan PreOrder  : ");
	preOrder(akar);
	printf("\nTampilan InOrder   : ");
	inOrder(akar);
	printf("\nTampilan PostOrder : ");
	postOrder(akar);
}
