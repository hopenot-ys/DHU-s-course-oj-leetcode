//#include<stdio.h>
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
//struct student* createByTail();
//void  displayLink(struct student* head);
//struct student* deleteNode(struct student* head, int index);
//
//
////�Ӽ��̶������ݴ��������½����뵽β��
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
//    head = NULL;  //����������Ϊ������
//
//    while (p1->num != -1)    //numΪ-1����ζ���û��������
//
//    {
//
//        n = n + 1;
//
//        if (n == 1)            //������һ�����
//
//            head = p1;
//
//        else
//
//            p2->next = p1;
//
//        p2 = p1;            //p2ʼ��ָ�����һ����㣨��βָ�룩
//
//        p1 = (struct student*)malloc(sizeof(struct student)); //p1ָ���½��
//
//        scanf("%d", &p1->num);
//
//    }
//
//    p2->next = NULL;  //�мǣ����һ������next��ֵΪNULL
//
//    return head;
//
//}
//
////��������е���Ϣ��num��
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
////ɾ�������е�index����㡣index��1��ʼ��
//
////���ڿ���ɾ����һ����㣬���Ժ�������ͷָ�����������
//
//struct student* deleteNode(struct student* head, int index)
//
//{
//    //      1 2  3   index=4
//    //        v1 p
//    //v1ָ��ǰ�� pָ��Ҫɾ����
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
//    //delete��һ���ڵ�
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