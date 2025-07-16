//#include<stdio.h>
//#include<stdlib.h>
//#include <string.h>
//#include<time.h>
//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct Node
//{
//	int num;//学号
//	Node* next;
//};
//struct Node* sort(struct Node* head);
//struct Node* merge(struct Node* LA, struct Node* LB);
//struct Node* insertNodeInOrder(struct Node* head, struct Node* stu);
//
//
//Node* CreateLinkedList(int num, int* student_ID)
//{
//	Node* head = NULL;
//	for (int i = 0; i < num; i++)
//	{
//		if (head == NULL)
//		{
//			head = new Node;
//			head->num = student_ID[i];
//			head->next = NULL;
//		}
//		else
//		{
//			Node* current = head;
//			while (current->next != NULL)
//			{
//				current = current->next;
//			}
//			Node* new_node = new Node;
//			new_node->num = student_ID[i];
//			new_node->next = NULL;
//			current->next = new_node;
//		}
//	}
//	return head;
//}
//
//
//void  displayList(Node* head)
//{
//	Node* p;
//	p = head;
//	cout << "head-->";
//	while (p != NULL)
//	{
//		cout << p->num << "-->";
//		p = p->next;
//	}
//	cout << "tail\n";
//}
//
//
//Node* get_intersection(Node* L1, Node* L2)
//{
//	// 调用合并函数
//    L1 = sort(merge(L1, L2));
//    // current指针travel
//    struct Node* current, *pre;
//    current = L1;
//    pre = NULL;
//    //struct Node* next = current->next;
//    int index = 1;
//    bool flag = false;
//
//    while (current != NULL)
//    {
//        if (current->num == 3)
//        {
//            int j = 0;
//        }
//        if (current->next != NULL && current->num == current->next->num)
//        {
//            flag = true;  // 和下一个相等
//            // deleteNode(head, index + 1);
//            // delete
//            struct Node* temp = current->next;
//            current->next = current->next->next;
//            free(temp);
//        }
//        else
//        {
//            if (flag == false)  // 23
//            {
//                if (current == L1)
//                {
//                    struct Node* temp = current;
//                    current = current->next;
//                    L1 = current;
//                    free(temp);
//                }
//                else
//                {
//                    pre->next = current->next;
//                    free(current);
//                    current = pre->next;
//                }
//            }
//            else
//            { 
//                pre = current;
//                current = current->next;
//            }
//            flag = false;
//        }
//    }
//    return L1;
//}
//
//struct Node* merge(struct Node* LA, struct Node* LB)//合并
//{
//    struct Node*p, *s;
//    p = LB;
//    while (p)
//    {
//        s = p;
//        p = p->next;
//        LA = insertNodeInOrder(LA, s);
//
//    }
//
//    return LA;
//
//}
//
//struct Node* insertNodeInOrder(struct Node* head, struct Node* stu)
//{
//    struct Node* p0, * p1, * p2;
//    p1 = head;
//    p0 = stu;//[5]
//    if (head == NULL) //目前还是空链表
//    {
//        p0->next = head;
//        head = p0;
//    }
//    else
//    {
//        while ((p0->num > p1->num) && (p1->next != NULL))
//        {//查找插入位置，p2指向p1的前驱
//            p2 = p1;
//            p1 = p1->next;
//        }
//        //while循环的结束条件有两个，下面需要判断是由哪个条件退出循环
//
//        if (p0->num <= p1->num)
//
//        {//由while循环条件的第一个条件退出循环，因此可插在p1结点之前
//
//            if (head == p1)     head = p0;
//
//            else   p2->next = p0;
//
//            p0->next = p1;
//
//        }
//
//        else
//
//        {//由while循环条件的第二个条件退出循环，因此p0->num最大，要插在最后
//
//            p1->next = p0;
//
//            p0->next = NULL;
//
//        }
//
//    }
//
//    return head;
//
//}
//
////升序
//struct Node* sort(struct Node* head)
//{
//
//    struct Node* p, * s;
//
//    p = head;
//
//    head = NULL;
//
//    while (p)
//
//    {
//
//        s = p;
//
//        p = p->next;
//
//        head = insertNodeInOrder(head, s);
//
//    }
//
//    return head;
//
//}
//
//
//int main()
//{
//    int num;
//    vector<int> vec_in;
//	int read_num = NULL;
//    while (std::cin >> read_num)
//    {
//    	vec_in.push_back(read_num);
//    	if (cin.get() == '\n')
//    	{
//    		break;
//    	}
//    }
//    num = vec_in[0];
//    int* L1 = new int[num];
//    for (int i = 0; i < num; i++)
//    {
//        L1[i] = vec_in[i + 1];
//    }
//
//
//    int num2;
//    vector<int> vec_in2;
//    int read_num2 = NULL;
//    while (std::cin >> read_num2)
//    {
//        vec_in2.push_back(read_num2);
//        if (cin.get() == '\n')
//        {
//            break;
//        }
//    }
//    num2 = vec_in2[0];
//    int* L2 = new int[num2];
//    for (int i = 0; i < num2; i++)
//    {
//        L2[i] = vec_in2[i + 1];
//    }
//
//    Node* head1 = CreateLinkedList(num, L1);
//    Node* head2 = CreateLinkedList(num2, L2);
//    head1 = get_intersection(head1, head2);
//    displayList(head1);
//}