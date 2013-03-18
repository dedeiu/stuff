#include "stdafx.h"
#include "List.h"


List::List(void)
{
	Node * firstNode = new Node();
	firstNode->next = 0;
	firstNode->previous = 0;
	firstNode->value = 1;

	this->rootNode = firstNode;
}


List::~List(void)
{
}

void List::AddNode()
{
	printf("Creating new node. \n");
	Node * previousNode = GetLastNode();
	
	Node * newNode = new Node();
	newNode->next = 0;
	newNode->previous = previousNode;
	newNode->value = (previousNode->value + 1);
	printf("New node: %d. \n", newNode->value);
	previousNode->next = newNode;
	printf("Link previous node: %d \n", previousNode->value);
}

Node * List::GetFirstNode()
{

	printf("Searching for first node. \n");
	return this->rootNode;
}

Node * List::GetLastNode()
{
	printf("Searching for last node. \n");
	Node * searchedNode = GetFirstNode();
	while(searchedNode->next != 0)
	{
		printf("It\'s %d the search node? \n", searchedNode->value);
		searchedNode = searchedNode->next;
	}
	printf("Last node found: %d \n", searchedNode->value);

	return searchedNode;
}

void List::PrintNodeList()
{
	printf("**** Printing node list ****\n\n");
	Node * node = GetFirstNode();
	do
	{
		printf("Node %d: -> ", node->value);
		node = node->next;
	}while(node != 0);
	printf("null \n\n");
}