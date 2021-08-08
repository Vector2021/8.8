/*ACM编程练习*/
//反转链表
#include<iostream>
using namespace std;

struct myList {
	int val;
	myList* next;
	myList(int _val) :val(_val), next(nullptr) {}
};

myList* reverse(myList* head) {
	if (head->next == nullptr)
		return head;
	myList* cur = head;
	myList* per = nullptr;
	while (cur != nullptr)
	{
		myList* next = cur->next;
	    cur->next = per;
		per = cur;
		cur = next;
	}
	return per;
}

int main(void)
{
	myList* node0 = new myList(0);
	myList* node1 = new myList(1);
	myList* node2 = new myList(2);
	myList* node3 = new myList(3);

	node0->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = nullptr;

	auto node = reverse(node0);
	while (node)
	{
		cout << node->val << endl;
		node = node->next;
	}
	return 0;
}