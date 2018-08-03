#include <iostream>
#include "ListNode.h"
using namespace std;

void print(ListNode *pHead) {
	ListNode *pTemp = pHead;
	while (pTemp != nullptr) {
		cout<<pTemp->val<<" ";
		pTemp = pTemp->next;
	}
	cout<<endl;
}
		
ListNode *Merge(ListNode *pHead1, ListNode *pHead2) {
	if (pHead1 == nullptr) 
		return pHead2;
	else if (pHead2 == nullptr)
		return pHead1;
	else {
		ListNode *pMergedNode = nullptr;
		if (pHead1->val < pHead2->val) {
			pMergedNode = pHead1;
			pMergedNode->next = Merge(pHead1->next, pHead2);
		}
		else {
			pMergedNode = pHead2;
			pMergedNode->next = Merge(pHead1, pHead2->next);
		}
		return pMergedNode;
	}
}

int main() {
	ListNode *node1 = new ListNode(1);
	ListNode *node2 = new ListNode(2);
	ListNode *node3 = new ListNode(3);
	ListNode *node4 = new ListNode(4);
	ListNode *node5 = new ListNode(5);
	ListNode *node6 = new ListNode(6);
	ListNode *node7 = new ListNode(7);
	ListNode *node8 = new ListNode(8);

	node1->next = node3;
	node3->next = node5;
	node5->next = node7;

	node2->next = node4;
	node4->next = node6;
	node6->next = node8;

	ListNode *pMergedHead = Merge(node1, node2);
	print(pMergedHead);

	return 0;
}

