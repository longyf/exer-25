#ifndef list_node_h
#define list_node_h
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
#endif
