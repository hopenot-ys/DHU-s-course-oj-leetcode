//#include<stdio.h>
//#include<vector>
//#include <iostream> // 包含输入输出相关的库
//using namespace std; // 使用标准命名空间
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
//
////升序
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
//    struct student* pre = NULL;//pre指向q的前驱，所以最开始赋为NULL
//    while (p != NULL) //对LB链表遍历
//        //B中在A中出现的元素 删除
//
//
//    {
//        q = LA;
//        while (q != NULL && q->num != p->num)
//        {
//            pre = q;
//            q = q->next; //在LA中查找是否有元素与p->num相同
//        }
//        if (q != NULL) //找到了相同的元素，则删除q所指向结点
//        {
//            if (q == LA) //如果删除第一个结点
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
//            //找到了
//            flag = true;
//            break;
//        }
//        current = current->next;
//        position++;
//    }
//    if (flag == false)//无
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
//    //v1指向前趋 p指向要删除的
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
//    p = v1->next;
//    v1->next = p->next;
//    delete p;
//    return head;
//}
//
//struct student* fun(struct student* L1, struct student* L2)
//
//{
//    //遍历2中元素，在1中查询
//    //存在 从1中删除   不存在   1中添加
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
//    while (v2 != NULL)//外层：v2中的元素：5
//    {
//        int index = Locate(L1, v2->num);
//        if (index != -1)//删
//        {
//            L1 = deleteNode(L1, index);
//        }
//        else//无，插入
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
//            headA = createByTail();//创建链表A
//            headB = createByTail();//创建链表B
//            headC = createByTail();//创建链表C
//            headD = createByTail();//创建链表D
//
//            headA = sort(headA);//链表A排序
//            headB = sort(headB);//链表B排序
//            headC = sort(headC);//链表C排序
//            headD = sort(headD);//链表D排序
//
//            headA = merge(headA, headB);//将链表B合并到链表A中
//
//            purge(headA);//删除链表A中重复元素
//
//            headA = subtract(headA, headC);//从链表A中减去链表C中元素
//
//            headA = fun(headA, headD);//对链表A和链表D调用fun函数
//
//            displayLink(headA);//输出链表A中的元素
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