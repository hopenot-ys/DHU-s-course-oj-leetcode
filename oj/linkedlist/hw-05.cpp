//#include<stdio.h>
//#include<stdlib.h>
//#include <string.h>
//#include<time.h>
//
//struct node
//{
//    char data;
//    struct node* next;
//};
//
//struct node* create(char text[])
//
//{
//
//    int i;
//
//    struct node* current;//��ǰ����λ��ָ��
//
//    struct node* tail;//βָ��
//
//    struct node* head;//ͷָ��
//
//    head = (struct node*)malloc(sizeof(struct node));//ͷ���
//
//    head->next = NULL;
//
//    current = head;//��ǰλ��ָ��ָ��ͷ���
//
//    tail = head;//βָ��Ҳָ��ͷ���
//
//    for (i = 0; i < strlen(text); i++)
//
//    {
//
//        if (text[i] == '[')
//
//        {//��ǰλ��ָ��ص���ǰ��
//
//            current = head;
//
//        }
//
//        else if (text[i] == ']')
//
//        {//��ǰλ��ָ���Ƶ������
//
//            current = tail;
//
//        }
//
//        else
//
//        {//�ڵ�ǰλ��ָ����������
//
//            struct node* p;
//
//            p = (struct node*)malloc(sizeof(struct node));
//
//            p->data = text[i];
//
//            p->next = current->next;
//
//            current->next = p;
//
//            current = p;
//
//            if (current->next == NULL) tail = current; //��ǰλ��������棬����Ҫ�޸�tailָ��
//
//        }
//
//    }
//
//    return head;
//
//}
//
//int count(struct node* head)
//
//{
//    //��������Ǽ�������ı��м������ʡ�
//    //���ڴ�������Ĵ��룬ͳ�Ƶ�����Ŀ������
//    //This is a [Beiju] text
//
//
//
//    //�����β�Ϊ����ͷָ�룬ע�⣬���е�һ�������ͷ���
//
//}
//
//
//int main()
//
//{
//
//    //freopen("input2.txt","r",stdin);
//
//    //freopen("output2.txt", "w", stdout);
//
//    char text[100005];
//
//    struct node* head, * p;
//
//    int num;
//
//    while (gets(text) != NULL)
//
//    {
//
//        head = create(text);
//
//        //for(p=head->next; p!=NULL; p=p->next)
//
//        //    printf("%c",p->data);
//
//        //printf("\n");
//
//        num = count(head);
//
//        printf("%d\n", num);
//
//    }
//
//
//
//    //printf("%.2f\n", (double)clock()/CLOCKS_PER_SEC);
//
//    return 0;
//
//}