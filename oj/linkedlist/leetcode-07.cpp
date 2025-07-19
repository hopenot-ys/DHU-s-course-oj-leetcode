//#include<iostream>
//
//#include<vector>
//
//using namespace std;
//
//
//
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
//    ListNode* swapPairs(ListNode* head) {
//
//        if (head == NULL || head->next == NULL)
//        {
//            return head;
//        }
//
//        ListNode* newHead = head->next;
//        head->next = swapPairs(newHead->next);
//        newHead->next = head;
//        return newHead;
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
//    ListNode* head = createByTail();
//
//    head = Solution().swapPairs(head);
//
//    displayLink(head);
//
//    return 0;
//
//}
//
//
//////删除值为num的节点
////ListNode* deleteNode(ListNode* head,int num)
////{
////    ListNode* p, * q;
////    //空链表
////    if (head == NULL)
////    {
////        return head;
////    }
////    //找到位置 p-> q
////    p = head;
////    while (num != q->val && q->next != NULL)
////    {
////        //continue
////        p = q;
////        q = p->next;
////    }
////    if (num == q->val)
////    {
////        p->next = q->next;
////        delete q;
////    }
////
////
////
////
////}
