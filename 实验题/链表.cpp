#include<iostream>
using namespace std;
struct numST
{int num;
numST *next;
};
void insert (numST *&pHead,numST *pNode){
	struct numST *q, *r;
	if(pHead==NULL)
	{pHead=pNode;
	return;
	}
	if(pNode->num <=pHead->num)
	{pNode->next=pHead;
	return;
	
	}
	r=pHead;
	q=pHead->next;
	while(q!=NULL)
	{if(pNode->num>q->num)
	{
		r=q;
		q=q->next;
	}
	else break;
	}r->next=pNode;
	pNode->next=q;
}
void print(numST *pHead)
{int k=0;
numST *r=pHead;
while(r!=NULL)
{cout.width(2);
k=k+1;
cout<<k<<":"<<r->next;
}
}
int main(){
	numST *pMHead=NULL;
	numST *pMNode=NULL;
	pMHead=new numST;
	pMKead->next=new numST;
	pMKead->next->next=new numST;
	scanf("%d%d%d",&a,&b,&c);
	pMHead=a;
	pMKead->next=b;
	pMKead->next->next=c;
	
	
	
	pMHesd
	}
