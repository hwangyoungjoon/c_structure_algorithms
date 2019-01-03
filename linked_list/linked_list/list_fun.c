#include "LinkedList.h"


// 노드 생성//
Node* sll_create_node(ElementType NewData)
{

	Node* NewNode = (Node*)malloc(sizeof(Node));
	/*printf("%d", sizeof(Node*));
	printf("%d", sizeof(Node*));
*/
	NewNode->Data = NewData;
	NewNode->NextNode = NULL;

	return NewNode;


}
//노드 소멸
void sll_destory_node(Node* Node)
{

	free(Node);

}

//노드 추가
void sll_append_node(Node** Head, Node* NewNode)
{

	if ((*Head) == NULL)
	{
		*Head = NewNode;

	}
	else {

		Node* Tail = (*Head);
		while (Tail->NextNode != NULL)
		{
			Tail = Tail->NextNode;

		}
		Tail->NextNode = NewNode;


	}


}

// 노드 삽입
void sll_insert_after(Node *Current, Node * NewNode)
{

	NewNode->NextNode = Current->NextNode;
	Current->NextNode = NewNode;


}


//헤드넣기
void sll_insert_new_head(Node** Head, Node* NewHead)
{
	if (Head == NULL)
	{

		(*Head) = NewHead;

	}

	else {

		NewHead->NextNode = (*Head);

	}



}


// 노드 제거
void sll_remove_node(Node ** Head, Node * Remove)
{

	if (*Head == Remove)
	{
		*Head = Remove->NextNode;
	}
	else {

		Node * Current = *Head;
		while (Current != Remove)
		{
			Current = Current->NextNode;

		}
		if (Current != NULL)
		{
			Current->NextNode = Remove->NextNode;
		}

	}

}

//인덱스를 주면 그 노드 반환
Node* sll_get_node_at(Node* Head, int location) {

	Node* Current = Head;
	while (Current != NULL && (--location) >= 0)
	{
		Current = Current->NextNode;


	}

	return Current;

}


//노드의 갯수 
int sll_get_node_count(Node* Head)
{

	int Count = 0;
	Node*Current = Head;
	while (Current->NextNode != NULL) {

		Current = Current->NextNode;
		Count++;

	}
	return Count;

}