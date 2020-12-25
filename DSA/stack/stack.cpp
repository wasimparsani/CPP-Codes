#include<iostream>
using namespace std;
struct stack {
	int size;
	int top;
	int *s;
};

void create(struct stack *st){
	st->size=5;
	st->top=-1;
	st->s = new int[st->size];
}

void display(struct stack *st){
	for (int i=st->top;i>=0;i--){
		cout<<st->s[i]<<" ";
		cout<<endl;
	}
}

void push(struct stack *st,int x){
	if(st->top==st->size-1) cout<<"stack overflow";
	else{
		st->top++;
		st->s[st->top]=x;
	}
}

int pop(struct stack *st){
	int x=-1;
	if (st->top==-1) cout<<"stack underflow"<<endl;
	else{
		x=st->s[st->top];
		st->top--;
	}
	return x;
}

int main(){
	struct stack st;
	create(&st);
	push(&st,10);
	push(&st,5);
	push(&st,15);
	display(&st);
}
