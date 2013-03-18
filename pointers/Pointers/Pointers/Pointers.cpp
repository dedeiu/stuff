// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	try
	{
		short int option = 0;
		List * nodeList = new List();

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
						nodeList->AddNode();
					break;
				case 4:
					break;
				case 0:
				case 5:
					return 0;
					break;

				default:
					break;
			}
		}
	} catch(const char* s)
	{
		printf("\n\n Error occured: %s \n\n", s);
	}
	return 0;
}