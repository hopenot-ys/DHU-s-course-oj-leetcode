//#include<stdio.h>
//#include <stdlib.h>
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
//student* insertNode(struct student* head, struct student* s, int index);
//
////从键盘读入数据创建链表，新结点插入到尾部
//struct student* createByTail()
//{
//    struct student* head;
//    struct student* p1, * p2;
//    int n;
//    n = 0;
//    p1 = p2 = (struct student*)malloc(sizeof(struct student));
//    scanf("%d", &p1->num);
//    head = NULL;  //首先置链表为空链表
//    while (p1->num != -1)    //num为-1，意味着用户输入结束
//    {
//        n = n + 1;
//        if (n == 1)            //创建第一个结点
//            head = p1;
//        else
//            p2->next = p1;
//        p2 = p1;            //p2始终指向最后一个结点（即尾指针）
//        p1 = (struct student*)malloc(sizeof(struct student)); //p1指向新结点
//        scanf("%d", &p1->num);
//    }
//    p2->next = NULL;  //最后一个结点的next赋值为NULL
//    return head;
//}
////输出链表中的信息（num）
//void  displayLink(struct student* head)
//{
//    struct student* p;
//    p = head;
//    printf("head-->");
//    while (p != NULL)
//    {
//        printf("%d-->", p->num);
//        p = p->next;
//    }
//    printf("tail\n");
//}
////在链表中第index处插入s指针所指向的结点。index从1开始。
////由于可能插在第一个结点，所以函数返回头指针给主调函数
//student* insertNode(struct student* head, struct student* s, int index)  // 6
//{
//    //1 2 3 4
//    if (index < 1)
//    {
//        return head;
//    }
//
//    if (head == NULL)
//    {
//        if (index == 1)
//        {
//            head = s;
//        }
//        return head;
//    }
//
//    index -= 1;  // index=5
//    student* v1 = head;
//    for (int i = 0; i < index - 1; i++)//index-1=4
//    {
//        v1 = v1->next;
//        if (v1 == NULL)
//        {
//            return head;
//        }
//    }
//
//    if (index == 0)
//    {
//        s->next = head;
//        head = s;
//    }
//    else
//    {
//        s->next = v1->next;
//        v1->next = s;
//    }
//
//    return head;
//}
//
//
////int main()
////{
////    struct student* head;
////    int index, data;
////    head = createByTail();
////    while (scanf("%d%d", &index, &data) != -1)
////    {
////        struct student* s = (struct student*)malloc(sizeof(struct student));
////        s->num = data;
////        s->next = NULL;
////        head = insertNode(head, s, index);
////        displayLink(head);
////    }
////    return 0;
////}
