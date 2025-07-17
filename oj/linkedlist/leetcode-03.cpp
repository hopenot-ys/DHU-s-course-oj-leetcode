//#include<iostream>
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
//
//
//class Solution {
//public:
//    ListNode* sortList(ListNode* head) {
//        return sortList(head, nullptr);
//    }
//
//    ListNode* sortList(ListNode* head, ListNode* tail) {
//        if (head == nullptr) {
//            return head;
//        }
//        if (head->next == tail) {
//            head->next = nullptr;
//            return head;
//        }
//        ListNode* slow = head, * fast = head;
//        while (fast != tail) {
//            slow = slow->next;
//            fast = fast->next;
//            if (fast != tail) {
//                fast = fast->next;
//            }
//        }
//        ListNode* mid = slow;
//        return merge(sortList(head, mid), sortList(mid, tail));
//    }
//
//    ListNode* merge(ListNode* head1, ListNode* head2) {
//        ListNode* dummyHead = new ListNode(0);
//        ListNode* temp = dummyHead, * temp1 = head1, * temp2 = head2;
//        while (temp1 != nullptr && temp2 != nullptr) {
//            if (temp1->val <= temp2->val) {
//                temp->next = temp1;
//                temp1 = temp1->next;
//            }
//            else {
//                temp->next = temp2;
//                temp2 = temp2->next;
//            }
//            temp = temp->next;
//        }
//        if (temp1 != nullptr) {
//            temp->next = temp1;
//        }
//        else if (temp2 != nullptr) {
//            temp->next = temp2;
//        }
//        return dummyHead->next;
//    }
//};
//
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
//    head = Solution().sortList(head);
//
//    displayLink(head);
//
//    return 0;
//
//}