#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<time.h>
#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;

struct Node
{
	int num;
	Node* next;
};

Node* CreateLinkedList(int num, int* student_ID);

void displayList(Node* head)
{
    Node* p;
    p = head;
    cout << "head-->";
    while (p != NULL)
    {
        cout << p->num << "-->";
        p = p->next;
    }
    cout << "tail\n";
}


int main()
{
    //����
    int num;//����
    vector<int> vec_in;
    int read_num = NULL;
    while (cin >> read_num)
    {
        vec_in.push_back(read_num);
        if (cin.get() == '\n')
        {
            break;
        }
    }
    num = vec_in[0];
    int* L1 = new int[num];
    for (int i = 0; i < num; i++)
    {
        L1[i] = vec_in[i + 1];
    }

    int num2;
    vector<int> vec_in2;
    int read_num2 = NULL;
    while (std::cin >> read_num2)
    {
        vec_in2.push_back(read_num2);
        if (cin.get() == '\n')
        {
            break;
        }
    }
    num2 = vec_in2[0];
    int* L2 = new int[num2];
    for (int i = 0; i < num2; i++)
    {
        L2[i] = vec_in2[i + 1];
    }
 
    //��һ�Ա�
    //5 3 2 7 L1
    //1 3 5 8 L2
    vector<int> intersect; // ��ʼ����{0}����0����
    int count = 0;
    bool flag = false;
    unordered_set<int> visited;  
    //  unordered_set���洢ΨһԪ�ء�����㳢�Բ����ظ�Ԫ�أ��ڶ��β��뽫�����ԡ�
    for (int i = 0; i < num; i++)
    {
        int va = L1[i];

        if (visited.count(va) > 0)  //���ֹ�
        // ���ڼ���ض�Ԫ���ڼ����г��ֵĴ�����
        {
            continue;
            // if�У���ĳ������Ϊ��ʱ��ִ�� continue ������ѭ����ǰ������ʣ�ಿ�֡�
            // �� continue ��������κδ��붼���ᱻִ��
            // ���ƽ�ֱ�����ص�ѭ����������顣
        }

        //��һ�ó�B�е�Ԫ�ضԱȣ�ѭ��
        for (int j = 0; j < num2; j++)
        {
            int vb = L2[j];
            if (va == vb)//�ӵ���������
            {
                count++;
                intersect.push_back(va);
                break;
            }
        }

        visited.insert(va);
    }
    int* L3 = new int[count];
    for (int i = 0; i < count; i++)
    {
        L3[i] = intersect[i];
    }

    //��������
    Node* head = CreateLinkedList(count, L3);
    
    displayList(head);
}

Node* CreateLinkedList(int num, int* student_ID)
{
	Node* head = NULL;
	for (int i = 0; i < num; i++)  // num: �ڵ�����
                                   // ָ�룺 ͷָ�����Ϣ
	{
		if (head == NULL)
		{
			head = new Node;
			head->num = student_ID[i];//student_ID ����
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
			new_node->num = student_ID[i];
			new_node->next = NULL;
			current->next = new_node;
		}
	}
	return head;
}

//void purge(struct Node* head)
//
//{
//    struct Node* p, * q;
//    if (head == NULL || head->next == NULL)
//        return;
//    p = head;
//    while (p->next != NULL)
//    {
//        if (p->num == p->next->num)
//
//        {
//
//            q = p->next;
//
//            p->next = q->next;
//
//            free(q);
//
//        }
//
//        else
//
//        {
//
//            p = p->next;
//
//        }
//
//    }
//
//}
