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
//    vector<int> nextLargerNodes(ListNode* head) {
//
//        //填充本函数完成功能  
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
//
//
//int main()
//
//{
//
//    ListNode* head = createByTail();
//
//    vector<int> res = Solution().nextLargerNodes(head);
//
//    for (int i = 0; i < res.size(); i++)
//
//    {
//
//        if (i > 0) cout << " ";
//
//        cout << res[i];
//
//    }
//
//    cout << endl;
//
//    return 0;
//
//}
//
