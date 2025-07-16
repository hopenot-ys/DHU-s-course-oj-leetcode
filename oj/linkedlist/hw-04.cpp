//#include<stdio.h>
//#include<vector>
//#include <iostream> // �������������صĿ�
//using namespace std; // ʹ�ñ�׼�����ռ�
//
//struct student
//{
//    int  num;
//    struct student* next;
//};
//
//int Locate(student* head, int ID);
//struct student* deleteNode(struct student* head, int index);
//
//
//struct student* createByTail()
//
//{
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
//void  displayLink(struct student* head)
//
//{
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
//
//
//struct student* insertNodeInOrder(struct student* head, struct student* stu)
//{
//    struct student* p0, * p1, * p2;
//    p1 = head;
//    p0 = stu;//[5]
//    if (head == NULL) //Ŀǰ���ǿ�����
//    {
//        p0->next = head;
//        head = p0;
//    }
//    else
//    {
//        while ((p0->num > p1->num) && (p1->next != NULL))
//        {//���Ҳ���λ�ã�p2ָ��p1��ǰ��
//            p2 = p1;
//            p1 = p1->next;
//        }
//        //whileѭ���Ľ���������������������Ҫ�ж������ĸ������˳�ѭ��
//
//        if (p0->num <= p1->num)
//
//        {//��whileѭ�������ĵ�һ�������˳�ѭ������˿ɲ���p1���֮ǰ
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
//        {//��whileѭ�������ĵڶ��������˳�ѭ�������p0->num���Ҫ�������
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
//
////����
//struct student* sort(struct student* head)
//
//{
//
//    struct student* p, * s;
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
//
//struct student* merge(struct student* LA, struct student* LB)
//
//{
//
//    struct student* p, * s;
//
//    p = LB;
//
//    while (p)
//
//    {
//
//        s = p;
//
//        p = p->next;
//
//        LA = insertNodeInOrder(LA, s);
//
//    }
//
//    return LA;
//
//}
//
//
//
//struct student* subtract(struct student* LA, struct student* LB)
//{
//    struct student* q, * p = LB;
//    struct student* pre = NULL;//preָ��q��ǰ���������ʼ��ΪNULL
//    while (p != NULL) //��LB�������
//        //B����A�г��ֵ�Ԫ�� ɾ��
//
//
//    {
//        q = LA;
//        while (q != NULL && q->num != p->num)
//        {
//            pre = q;
//            q = q->next; //��LA�в����Ƿ���Ԫ����p->num��ͬ
//        }
//        if (q != NULL) //�ҵ�����ͬ��Ԫ�أ���ɾ��q��ָ����
//        {
//            if (q == LA) //���ɾ����һ�����
//            {
//                LA = LA->next;
//                free(q);
//            }
//            else
//            {
//                pre->next = q->next;
//                free(q);
//            }
//        }
//        p = p->next;
//    }
//    return LA;
//
//}
//
//
//
//void purge(struct student* head)
//
//{
//
//    struct student* p, * q;
//
//    if (head == NULL || head->next == NULL)
//
//        return;
//
//    p = head;
//
//    while (p->next != NULL)
//
//    {
//
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
//
//int Locate(student* head, int ID)
//{
//    int position = 1;
//    bool flag = false;
//    student* current = head;
//    int testcase = ID;
//    while (current != NULL)
//    {
//        if (current->num == testcase)
//        {
//            //�ҵ���
//            flag = true;
//            break;
//        }
//        current = current->next;
//        position++;
//    }
//    if (flag == false)//��
//    {
//        position = -1;
//    }
//    return position;
//}
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
//    student* p;
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
//    p = v1->next;
//    v1->next = p->next;
//    delete p;
//    return head;
//}
//
//struct student* fun(struct student* L1, struct student* L2)
//
//{
//    //����2��Ԫ�أ���1�в�ѯ
//    //���� ��1��ɾ��   ������   1�����
//    //2      1   2  3  4  5 
//    //head   v2
//    //1      1   2
//    //  head v1
//    student* v1 = L1;
//    student* v2 = L2;
//    if (L2 == NULL )
//    {
//        return L1;
//    }
//
//    while (v2 != NULL)//��㣺v2�е�Ԫ�أ�5
//    {
//        int index = Locate(L1, v2->num);
//        if (index != -1)//ɾ
//        {
//            L1 = deleteNode(L1, index);
//        }
//        else//�ޣ�����
//        {
//            student* v2_copy = new student;
//            v2_copy->next = NULL;
//            v2_copy->num = v2->num;
//            L1 = insertNodeInOrder(L1, v2_copy);
//
//        }
//        v2 = v2->next;
//
//    }
//    return L1;
//
//}
//
//
//
//int main()
//
//{
//    struct student* headA, * headB, * headC, * headD;
//    int i, n;
//    while (scanf("%d", &n) != EOF)
//    {
//        i = 0;
//        while (i < n)
//
//        {
//
//            headA = createByTail();//��������A
//            headB = createByTail();//��������B
//            headC = createByTail();//��������C
//            headD = createByTail();//��������D
//
//            headA = sort(headA);//����A����
//            headB = sort(headB);//����B����
//            headC = sort(headC);//����C����
//            headD = sort(headD);//����D����
//
//            headA = merge(headA, headB);//������B�ϲ�������A��
//
//            purge(headA);//ɾ������A���ظ�Ԫ��
//
//            headA = subtract(headA, headC);//������A�м�ȥ����C��Ԫ��
//
//            headA = fun(headA, headD);//������A������D����fun����
//
//            displayLink(headA);//�������A�е�Ԫ��
//
//            i++;
//
//        }
//
//    }
//
//    return 0;
//
//}