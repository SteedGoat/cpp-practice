#include <stdio.h>
#include <stdlib.h>
typedef struct student{
    int score;
    struct student *next;
    }Linklist;
    Linklist *creat(int n){
        Linklist *head,*node,*end;
        head = (Linklist*)malloc(sizeof(Linklist));
        end = head;
        for(int i = 0; i<n; i++)
        {
            node = (Linklist*)malloc(sizeof(Linklist));
            scanf("%d",&node->score);
            end->next=node; 
            end = node;
        }
        end->next=NULL;
        return head;
    }
void change(Linklist *list,int n) {
	Linklist *t = list;
	int i = 0;
	while (i < n && t != NULL) {
		t = t->next;
		i++;
	}
	if (t != NULL) {
		puts("输入要修改的值");
		scanf("%d", &t->score);
	}
	else {
		puts("节点不存在");
	}
}
void delet(Linklist *list, int n) {
	Linklist *t = list, *in;
	int i = 0;
	while (i < n && t != NULL) {
		in = t;
		t = t->next;
		i++;
	}
	if (t != NULL) {
		in->next = t->next;
		free(t);
	}
	else {
		puts("节点不存在");
	}
}
        while (h->next != NULL) {
		h = h->next;
		printf("%d  ", h->score);
	}


int main()
{
    
}