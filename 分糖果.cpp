#include <iostream>
#include <malloc.h>
using namespace std;
typedef int DataType;
typedef struct linknode{
	DataType data;
	struct linknode *next;
}LinkList;
LinkList *InitList(){
	LinkList *head;
	head=(LinkList *)malloc(sizeof(LinkList));
	head->next=NULL;
	return head;
}
void CreateList(LinkList *head,int n){
	LinkList *s;
	for(int i=0;i<n;i++){
		s=(LinkList *)malloc(sizeof(LinkList));
		cin>>s->data;
		s->next=head->next;
		s=head->next;
	}
}
void DispList(LinkList *head){
	LinkList *p;
	p=head->next;
	while(p!=NULL){
		cout<<p->data;
		p=p->next;
	}
}
int main(){
	int N;
	cin>>N;
	LinkList *s=InitList();
	CreateList(s,N);
	DispList(s);
	return 0;
}
