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
    //输入
    int num;//总数
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
 
    //逐一对比
    //5 3 2 7 L1
    //1 3 5 8 L2
    vector<int> intersect; // 初始化，{0}会有0存在
    int count = 0;
    bool flag = false;
    unordered_set<int> visited;  
    //  unordered_set：存储唯一元素。如果你尝试插入重复元素，第二次插入将被忽略。
    for (int i = 0; i < num; i++)
    {
        int va = L1[i];

        if (visited.count(va) > 0)  //出现过
        // 用于检查特定元素在集合中出现的次数。
        {
            continue;
            // if中，当某个条件为真时，执行 continue 以跳过循环当前迭代的剩余部分。
            // 在 continue 语句后面的任何代码都不会被执行
            // 控制将直接跳回到循环的条件检查。
        }

        //逐一拿出B中的元素对比，循环
        for (int j = 0; j < num2; j++)
        {
            int vb = L2[j];
            if (va == vb)//加到交集集合
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

    //创建链表
    Node* head = CreateLinkedList(count, L3);
    
    displayList(head);
}

Node* CreateLinkedList(int num, int* student_ID)
{
	Node* head = NULL;
	for (int i = 0; i < num; i++)  // num: 节点数量
                                   // 指针： 头指针的信息
	{
		if (head == NULL)
		{
			head = new Node;
			head->num = student_ID[i];//student_ID 数组
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
