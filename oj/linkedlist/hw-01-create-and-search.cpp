#include<stdio.h>
#include<vector>
#include <iostream> // 包含输入输出相关的库
using namespace std; // 使用标准命名空间

struct Node
{
	int s_ID;//学号
	Node* next;
};

Node* CreateLinkedList(int num, int* student_ID);
int Locate(Node* head, int ID);

int main()
{
	int num;

	vector<int> vec_in;
	int read_num = NULL;
	while (std::cin >> read_num)
	{
		vec_in.push_back(read_num);
		if (cin.get() == '\n')
		{
			break;
		}
	}

	num = vec_in[0];
	int* student_ID = new int[num];
	for (int i = 0; i < num; i++)
	{
		student_ID[i] = vec_in[i + 1];
	}

	Node* head = CreateLinkedList(num, student_ID);

	int ID = 0;
	while (cin >> ID)
	{
		Locate(head, ID);
	}

	return 0;
}

Node* CreateLinkedList(int num, int* student_ID)
{
	Node* head = NULL;
	for (int i = 0; i < num; i++)
	{
		if (head == NULL)
		{
			head = new Node;
			head->s_ID = student_ID[i];
			head->next = NULL;
		}
		else
		{
			Node* current = head;
			while (current->next != NULL)
			{
				current = current->next;
			}
			Node* new_node = new Node;
			new_node->s_ID = student_ID[i];
			new_node->next = NULL;
			current->next = new_node;
		}
	}
	return head;
}

int Locate(Node* head, int ID)
{
	int position = 1;
	bool flag = false;
	Node* current = head;
	int testcase = ID;
	while (current != NULL)
	{
		if (current->s_ID == testcase)
		{
			//找到了
			flag = true;
			break;
		}
		current = current->next;
		position++;
	}
	if (flag == false)
	{
		printf("no\n");
	}
	else
	{
		printf("%d\n", position);
	}
	return position;
}