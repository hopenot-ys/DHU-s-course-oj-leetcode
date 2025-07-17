//#include<iostream>
//using namespace std;
//struct ListNode
//
//{
//
//    int val;
//
//    ListNode* next;
//
//    ListNode() : val(0), next(NULL) {}
//
//    ListNode(int x) : val(x), next(NULL) {}
//
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//
//};
//
//class Solution {
//
//public:
//
//    ListNode* rotateRight(ListNode* head, int k) 
//    {
//
//        if (head == NULL)
//        {
//            return NULL;
//        }
//
//        //闭环
//        int count = 1;//记元素数量
//        ListNode* tail = head;//暂时将head赋给tail
//        //找到tail
//
//        while (tail->next != NULL)
//        {
//            tail = tail->next;
//            count++;
//        }
//
//        tail->next = head;//形成闭环
//        //找到count-k-1处断开
//        //head = count-k-1->next
//        //count-k-1->next = NULL;
//        int len;
//
//        if (k > count)  // 7 > 5
//        {
//            len = k % count;  // 2
//        }
//        else
//        {
//            len = k;
//        }
//
//        int right = count - len;//5-2=3
//        for (int i = 0; i < right; i++)
//        {
//            head = head->next;
//            tail = tail->next;
//        }
//        tail->next = NULL;
//        return head;
//    }
//
//};
//
//ListNode* createByTail()
//
//{
//
//    ListNode* head;
//
//    ListNode* p1, * p2;
//
//    int n = 0, num;
//
//    int len;
//
//    cin >> len;
//
//    head = NULL;
//
//    while (n<len && cin >> num)
//
//    {
//
//        p1 = new ListNode(num);
//
//        n = n + 1;
//
//        if (n == 1)
//
//            head = p1;
//
//        else
//
//            p2->next = p1;
//
//        p2 = p1;
//
//    }
//
//    return head;
//
//}
//
//
//void  displayLink(ListNode* head)
//
//{
//
//    ListNode* p;
//
//    p = head;
//
//    cout << "head-->";
//
//    while (p != NULL)
//
//    {
//
//        cout << p->val << "-->";
//
//        p = p->next;
//
//    }
//
//    cout << "tail\n";
//
//}
//
//int main()
//
//{
//
//    int k;
//
//    ListNode* head = createByTail();
//
//    cin >> k;
//
//    head = Solution().rotateRight(head, k);
//
//    displayLink(head);
//
//    return 0;
//
//}
//
