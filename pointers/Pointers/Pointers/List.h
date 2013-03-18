#include "stdafx.h"

#pragma once
class List
{
private:
	Node * rootNode;

public:
	List(void);
	~List(void);
	Node * GetFirstNode();
	Node * GetLastNode();
	void AddNode();
};

