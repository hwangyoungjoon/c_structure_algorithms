#include "LinkedList.h"


// 노드 생성//
Node* sll_create_node(ElementType NewData)
{

	Node* NewNode = (Node*)malloc(sizeof(Node));// 노드 구조체를 가리키는 노드 포인터를 위한 동적할당
	/*printf("%d", sizeof(Node*));
	printf("%d", sizeof(Node*));
*/
	NewNode->Data = NewData;
	NewNode->NextNode = NULL;

	return NewNode;
}
//노드 소멸//
void sll_destory_node(Node* Node)
{
	free(Node);
}

//노드 추가
void sll_append_node(Node** Head, Node* NewNode)
{
	if ((*Head) == NULL) //처음 노드가 head라면 아무것도 없으니까.
	{
		*Head = NewNode; 
	}
	else {
		Node* Tail = (*Head); //헤드 노드를 가리키는 테일 노드 
		while (Tail->NextNode != NULL) //노드의 테일까지 이동
		{
			Tail = Tail->NextNode; 
		}
		Tail->NextNode = NewNode;// 새로운 노드 추가
	}
}

// 노드 삽입
void sll_insert_after(Node *Current, Node * NewNode)
{
	NewNode->NextNode = Current->NextNode; //새로운 노드에 현재 가리키고 있는 노드의 다음 노드를 이어줌
	Current->NextNode = NewNode;// 그리고 현재 노드의 다음 노드를 새로운 노드로 설정
}


//새로운 헤드를 앞에 끼워넣기
void sll_insert_new_head(Node** Head, Node* NewHead)
{
	if (Head == NULL)
	{
		(*Head) = NewHead; // 헤드 노드가 비어있다면 헤드로 설정
	}

	else {
		NewHead->NextNode = (*Head); //헤드를 새로운 노드의 다음노드로 설정
	}

}


// 노드 제거
void sll_remove_node(Node ** Head, Node * Remove)
{
	if (*Head == Remove)// 삭제하려는 노드가 헤드인 경우
	{
		*Head = Remove->NextNode;//헤드를 그 다음노드로 지정해줌
	}
	else {
		Node * Current = *Head; //헤드부터 출발
		while (Current != Remove)
		{
			Current = Current->NextNode; // 삭제하려는 노드가 나올때 까지 이동
		}
		if (Current != NULL)
		{
			Current->NextNode = Remove->NextNode; //삭제하려는 다음 노드가 존재하는 경우
		}

	}

}

//인덱스를 주면 그 노드 반환
Node* sll_get_node_at(Node* Head, int location) {

	Node* Current = Head;
	while (Current != NULL && (--location) >= 0)// location 숫자만큼 그 노드로 이동
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

	}// 다음 노드가 null인 노드까지 이동하면서 count를 증가
	return Count;
}
