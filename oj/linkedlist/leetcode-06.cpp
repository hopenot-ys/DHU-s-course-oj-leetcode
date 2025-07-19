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
//    ListNode* oddEvenList(ListNode* head) {
//        if (head == NULL)
//        {
//            return head;
//        }
//
//        ListNode* ji, * ou,* ou_head;
//        ji = head;
//        ou = head->next;
//        ou_head = ou;  // 记录偶数节点的起始
//
//        //travel
//        while(ou && ou->next)
//        {
//            ji->next = ou->next;
//            ji = ji->next;
//            ou->next = ji->next;
//            ou = ou->next;
//
//        }
//        //link
//        ji->next = ou_head;
//        return head;
//
//
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
//    head = Solution().oddEvenList(head);
//
//    displayLink(head);
//
//    return 0;
//
//}