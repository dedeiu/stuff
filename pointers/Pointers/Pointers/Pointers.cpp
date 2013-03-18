// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Node {
	public:
		Node * Prev; // double linked list
		Node * Next;
		int NodeNumber;
};

Node * firstNode;

Node * GetLastNode()
{
	if(firstNode == 0)
	{
		return 0;
	} else {
		Node searchedNode = *(firstNode);
		printf("Searching for last node. \n");
		do{
			printf("Searching node %d \n", searchedNode.NodeNumber);
		}while(searchedNode.Next != 0);

		return &searchedNode;
	}
}

void CreateNode()
{
	printf("Creating new node. \n");
	if(firstNode == 0)
	{
		Node newNode;
		newNode.Prev = 0;
		newNode.Next = 0;
		newNode.NodeNumber = 1;

		firstNode = &newNode;

		printf("First node %d created. \n", newNode.NodeNumber);
	} else {
		Node lastNode = *(GetLastNode());
		Node newNode;
		newNode.Prev = &lastNode;
		newNode.Next = 0;
		newNode.NodeNumber = (lastNode.NodeNumber + 1);
		printf("Last node &d created. \n", newNode.NodeNumber);
	}
}

void DisplayNodeList()
{
	if(firstNode == 0)
	{
		printf("Node list is empty. \n");
	} else {
		Node searchedNode = *(firstNode);
		printf("Node list. \n");
		do{
			printf("Node %d \n", searchedNode.NodeNumber);
		}while(searchedNode.Next != 0);
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	short int option = 0;

	while(true)
	{
		printf("Please choose one option: \n");
		printf("1 - Create new node. \n");
		printf("2 - Edit existing node. \n");
		printf("3 - Delete node. \n");
		printf("4 - Display node list. \n");
		printf("5 - Exit. \n\n");
		scanf("%hd", &option);

		switch(option)
		{
			case 1:
				CreateNode();
				break;
			case 4:
				DisplayNodeList();
				break;
			case 0:
			case 5:
				return 0;
				break;

			default:
				break;
		}
	}

	return 0;
}