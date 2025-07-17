//#include<iostream>
//using namespace std;
//struct ListNode
//{
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(NULL) {}
//    ListNode(int x) : val(x), next(NULL) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//class Solution
//{
//public:
//    void reorderList(ListNode* head)
//    {
//        if (head == NULL)
//        {
//            return;
//        }
//        ListNode* mid = middleNode(head);
//        ListNode* l1 = head;
//        ListNode* l2 = mid->next;
//        mid->next = nullptr;
//        l2 = reverseList(l2);
//        mergeList(l1, l2);
//    }
//
//    ListNode* middleNode(ListNode* head)
//    {
//        ListNode* slow = head;
//        ListNode* fast = head;
//
//        while (fast->next != nullptr && fast->next->next != nullptr)
//        {
//            slow = slow->next;
//            fast = fast->next->next;
//        }
//        return slow;
//    }
//
//    ListNode* reverseList(ListNode* head)
//    {
//        ListNode* prev = nullptr;
//        ListNode* curr = head;
//        while (curr != nullptr) {
//            ListNode* nextTemp = curr->next;
//            curr->next = prev;
//            prev = curr;
//            curr = nextTemp;
//        }
//        return prev;
//    }
//
//    void mergeList(ListNode* l1, ListNode* l2)
//    {
//        ListNode* l1_tmp;
//        ListNode* l2_tmp;
//        while (l1 != nullptr && l2 != nullptr)
//        {
//            l1_tmp = l1->next;
//            l2_tmp = l2->next; 
//
//            l1->next = l2;
//            l1 = l1_tmp;
//
//            l2->next = l1;
//            l2 = l2_tmp;
//        }
//    }
//};
//
//ListNode* createByTail()
//{
//    ListNode* head;
//    ListNode* p1, * p2;
//    int n = 0, num;
//    int len;
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
//
//void  displayLink(ListNode* head)
//{
//    ListNode* p;
//    p = head;
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
//    Solution().reorderList(head);
//
//    displayLink(head);
//
//    return 0;
//
//}
//
