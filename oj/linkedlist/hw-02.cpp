//#include<stdio.h>
//#include <stdlib.h>
//#include<vector>
//#include <iostream> // �������������صĿ�
//using namespace std; // ʹ�ñ�׼�����ռ�
//
//struct student
//{
//	int  num;
//	struct student* next;
//};
//
//student* insertNode(struct student* head, struct student* s, int index);
//
////�Ӽ��̶������ݴ��������½����뵽β��
//struct student* createByTail()
//{
//    struct student* head;
//    struct student* p1, * p2;
//    int n;
//    n = 0;
//    p1 = p2 = (struct student*)malloc(sizeof(struct student));
//    scanf("%d", &p1->num);
//    head = NULL;  //����������Ϊ������
//    while (p1->num != -1)    //numΪ-1����ζ���û��������
//    {
//        n = n + 1;
//        if (n == 1)            //������һ�����
//            head = p1;
//        else
//            p2->next = p1;
//        p2 = p1;            //p2ʼ��ָ�����һ����㣨��βָ�룩
//        p1 = (struct student*)malloc(sizeof(struct student)); //p1ָ���½��
//        scanf("%d", &p1->num);
//    }
//    p2->next = NULL;  //���һ������next��ֵΪNULL
//    return head;
//}
////��������е���Ϣ��num��
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
////�������е�index������sָ����ָ��Ľ�㡣index��1��ʼ��
////���ڿ��ܲ��ڵ�һ����㣬���Ժ�������ͷָ�����������
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
