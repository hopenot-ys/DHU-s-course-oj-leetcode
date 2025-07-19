//#include<iostream>
//#include < unordered_map > 
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
//public:
//    ListNode* removeZeroSumSublists(ListNode* head) {
//        ListNode* h0 = new ListNode(1e5, head);//哨兵头节点
//        unordered_map<int, ListNode*> vis;
//        int s = 0;//链表为空的前缀的数值和
//        vis[0] = h0;
//        for (auto cur = h0->next; cur; cur = cur->next) {
//            s += cur->val;
//            if (!vis.count(s))
//                vis[s] = cur;
//            else {
//                int t = s;
//                for (auto k = vis[s]->next;; k = k->next) {//删除(vis[s], cur]区间
//                    t += k->val;
//                    if (t == s)
//                        break;
//                    vis.erase(t);//删除映射
//                }
//                vis[s]->next = cur->next;
//            }
//        }
//        return h0->next;
//    }
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
//    head = Solution().removeZeroSumSublists(head);
//
//    displayLink(head);
//
//    return 0;
//
//}