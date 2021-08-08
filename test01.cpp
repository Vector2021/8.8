/*ACM 模式编程练习*/
//合并两个有序链表
//#include<iostream>
//using namespace std;

//struct myList {
//	int val;
//	myList* next;
//	myList(int x) :val(x),next(nullptr){}
//};


//递归法
//myList* merge(myList* l1, myList* l2)
//{
//	if (!l1)
//		return l2;
//	if (!l2)
//		return l1;
//	if (l1->val < l2->val)
//	{
//		l1->next = merge(l1->next, l2);
//		return l1;
//	}
//	else(l2->val < l1->val)
//	{
//		l2->next = merge(l2->next, l1);
//		return l2;
//	}
//}


//迭代法
//myList* merge(myList* l1, myList* l2) {
//	myList* phead = new myList(-1);
//	if (!l1)
//		return l2;
//	if (!l2)
//		return l1;
//	myList* node = phead;
//	while (l1 != nullptr && l2 != nullptr)
//	{
//		if (l1->val < l2->val)
//		{
//			node->next = l1;
//			l1 = l1->next;
//		}
//		else
//		{
//			node->next = l2;
//			l2 = l2->next;
//		}
//		node = node->next;
//	}
//
//	if (l1 == nullptr)
//		node->next = l2;
//	if (l2 == NULL)
//		node->next = l1;
//	return phead->next;
//}


//int main(void) {
//	myList* node0 = new myList(0);
//	myList* node1 = new myList(1);
//	myList* node2 = new myList(2);
//	myList* node3 = new myList(3);
//
//	myList* node4 = new myList(1);
//	myList* node5 = new myList(6);
//
//	node0->next = node1;
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = nullptr;
//	
//	node4->next = node5;
//	node5->next = nullptr;
//
//	auto node = merge(node0, node4);
//	while (node != nullptr)
//	{
//		cout << node->val << endl;
//		node = node->next;
//	}
//
//	return 0;
//}