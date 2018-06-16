#include <iostream>
#include "ListNode.h"

ListNode* getFirstEnd(ListNode *head) {
	ListNode *p1 = head;
	ListNode *p2 = head;

	while (p1 && p2) {
		if (!p2->next || !p2->next->next) return p1;

		p1 = p1->next;
		p2 = p2->next->next;
	}

	return head;
}

ListNode* merge(ListNode *l, ListNode *r) {
	ListNode *head = new ListNode(0);
	ListNode *p = head;
	ListNode *p1 = l;
	ListNode *p2 = r;

	while(p1 && p2) {
		if (p1->value < p2->value) {
			p->next = p1;
			p1 = p1->next;
		} else {
			p->next = p2;
			p2 = p2->next;
		}

		p = p->next;
	}

	if (p1) p->next = p1;
	if (p2) p->next = p2;

	return head->next;
}

ListNode* sortList(ListNode *head) {
	if (!head || !head->next) return head;

	ListNode *p1 = head;
	ListNode *firstEnd = getFirstEnd(head);
	ListNode *p2 = firstEnd->next;
	firstEnd->next = nullptr;

	p1 = sortList(p1);
	p2 = sortList(p2);

	return merge(p1, p2);
}

void printList(ListNode *node) {
	using namespace std;
	if (node) {
		cout << node->value << " ";

		while (node->next) {
			node = node->next;
			cout << node->value << " ";
		}

		cout << endl;
	}
}

int main() { 
	using namespace std;

	ListNode *n1 = new ListNode(2);
	ListNode *n2 = new ListNode(3);
	ListNode *n3 = new ListNode(4);

	ListNode *n4 = new ListNode(3);
	ListNode *n5 = new ListNode(4);
	ListNode *n6 = new ListNode(5);

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;

	ListNode *p = sortList(n1);

	printList(p);

	return 0;
} 
