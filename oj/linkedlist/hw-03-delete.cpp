//#include<stdio.h>
//#include<vector>
//#include <iostream> // 包含输入输出相关的库
//using namespace std; // 使用标准命名空间
//
//struct student
//{
//	int  num;
//	struct student* next;
//};
//
//struct student* createByTail();
//void  displayLink(struct student* head);
//struct student* deleteNode(struct student* head, int index);
//
//
////从键盘读入数据创建链表，新结点插入到尾部
//
//struct student* createByTail()
//
//{
//
//    struct student* head;
//
//    struct student* p1, * p2;
//
//    int n;
//
//    n = 0;
//
//    p1 = p2 = (struct student*)malloc(sizeof(struct student));
//
//    scanf("%d", &p1->num);
//
//    head = NULL;  //首先置链表为空链表
//
//    while (p1->num != -1)    //num为-1，意味着用户输入结束
//
//    {
//
//        n = n + 1;
//
//        if (n == 1)            //创建第一个结点
//
//            head = p1;
//
//        else
//
//            p2->next = p1;
//
//        p2 = p1;            //p2始终指向最后一个结点（即尾指针）
//
//        p1 = (struct student*)malloc(sizeof(struct student)); //p1指向新结点
//
//        scanf("%d", &p1->num);
//
//    }
//
//    p2->next = NULL;  //切记：最后一个结点的next赋值为NULL
//
//    return head;
//
//}
//
////输出链表中的信息（num）
//
//void  displayLink(struct student* head)
//
//{
//
//    struct student* p;
//
//    p = head;
//
//    printf("head-->");
//
//    while (p != NULL)
//
//    {
//
//        printf("%d-->", p->num);
//
//        p = p->next;
//
//    }
//
//    printf("tail\n");
//
//}
//
////删除链表中第index个结点。index从1开始。
//
////由于可能删除第一个结点，所以函数返回头指针给主调函数
//
//struct student* deleteNode(struct student* head, int index)
//
//{
//    //      1 2  3   index=4
//    //        v1 p
//    //v1指向前趋 p指向要删除的
//    if (head == NULL)
//    {
//        return head;
//    }
//    
//    student*p;
//    student* v1 = head;
//    if (index <= 0)
//    {
//        return head;
//    }
//    //delete第一个节点
//    if (index == 1)
//    {
//        p = head;
//        head = head->next;//head=NULL
//        delete p;
//        return head;
//    }
//
//    //general
//    index -= 1;//index = -2
//    for (int i = 0; i < index - 1; i++)//i<2
//    {
//        v1 = v1->next;
//        if (v1->next == NULL)
//        {
//            //over
//            return head;
//        }
//    }
//   
//    p = v1->next;
//    v1->next = p->next;
//    delete p;
//    return head;
//}
//
//int main()
//
//{
//
//    struct student* head;
//
//    int index;
//
//    head = createByTail();
//
//    while (scanf("%d", &index) !=-1)
//
//    {
//
//        head = deleteNode(head, index);
//
//        displayLink(head);
//
//    }
//    return 0;
//}