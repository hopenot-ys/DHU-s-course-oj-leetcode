//#include<iostream>
//#include<unordered_set>
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
//    int numComponents(ListNode* head, vector<int>& G) {
//        int resCount = 0;
//        unordered_set<int> hashSet(G.begin(), G.end());
//        while (head != NULL) {
//            if (hashSet.count(head->val)) {
//                head = head->next;
//                if (head == NULL || hashSet.count(head->val) == 0) {
//                    resCount += 1;
//                }
//            }
//            else {
//                head = head->next;
//            }
//        }
//        return resCount;
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
//int main()
//
//{
//
//    vector<int> G;
//
//    int m, data, res;
//
//    ListNode* head = createByTail();
//
//    cin >> m;
//
//    for (int i = 0; i < m; i++)
//
//    {
//
//        cin >> data;
//
//        G.push_back(data);
//
//    }
//
//    res = Solution().numComponents(head, G);
//
//    cout << res << endl;
//
//    return 0;
//
//}