#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Node
{
	public:
		int info;
		Node *next;
};

class List: public Node
{
    Node *first,*last;
	public:
		List()
		{
			first=NULL;
			last=NULL;
		}
		void create();
		void insert();
		void remove();
		void display();
		void search();
	};
void List::create()
{
	Node *temp;
	temp=new Node;
	int n;
	cout<<"\nEnter an Element:";
	cin>>n;
	temp->info=n;
	temp->next=NULL;
	if(first==NULL)
	{
		first=temp;
		last=first;
	}

	else
	{
		last->next=temp;
		last=temp;
	}
}
void List::insert()
{
    Node *prev,*cur;
    prev=NULL;
    cur=first;
    int count=1,pos,ch,n;
    Node *temp=new Node;
    cout<<"\nEnter an Element:";
    cin>>n;
    temp->info=n;
    temp->next=NULL;
    cout<<"\nINSERT AS\n1:FIRSTNODE\n2:LASTNODE\n3:IN BETWEEN FIRST&LAST NODES";
    cout<<"\nEnter Your Choice:";
    cin>>ch;
    switch(ch)
    {
    case 1:
        temp->next=first;
        first=temp;
        break;
    case 2:
        last->next=temp;
        last=temp;
        break;
    case 3:
        cout<<"\nEnter the Position to Insert:";
        cin>>pos;
        while(count!=pos)
        {
            prev=cur;
            cur=cur->next;
            count++;
        }
        prev->next=temp;
        temp->next=cur;
        break;
    }
}
void List::remove()
{
    Node *prev=NULL,*cur=first;
    int count=1,pos,ch;
    cout<<"\nDELETE\n1:FIRSTNODE\n2:LASTNODE\n3:IN BETWEEN FIRST&LAST NODES";
    cout<<"\nEnter Your Choice:";
    cin>>ch;
    switch(ch)
    {
    case 1:
        if(first!=NULL)
        {
            cout<<"\nDeleted Element is "<<first->info;
            first=first->next;
        }
        else
            cout<<"\nNot Able to Delete";
        break;
    case 2:
        while(cur!=last)
        {
            prev=cur;
            cur=cur->next;
        }
        cout<<"\nDeleted Element is: "<<cur->info;
        prev->next=NULL;
        last=prev;
        break;
    case 3:
        cout<<"\nEnter the Position of Deletion:";
        cin>>pos;
        while(count!=pos)
        {
            prev=cur;
            cur=cur->next;
            count++;
        }
        cout<<"\nDeleted Element is: "<<cur->info;
        prev->next=cur->next;
        break;
    }
}
void List::display()
{
    Node *temp=first;
    if(temp==NULL)
    {
        cout<<"\nList is Empty";
    }
    while(temp!=NULL)
    {
        cout<<temp->info;
        cout<<"-->";
        temp=temp->next;
    }
    cout<<"NULL";
}
void List::search()
{
    int value,pos=0;
    bool flag=false;
    if(first==NULL)
    {
        cout<<"List is Empty";
        return;
    }
    cout<<"Enter the Value to be Searched:";
    cin>>value;
    Node *temp;
    temp=first;
    while(temp!=NULL)
    {
        pos++;
        if(temp->info==value)
        {
            flag=true;
            cout<<"Element"<<value<<"is Found at "<<pos<<" Position";
            return;
        }
        temp=temp->next;
    }
    if(!flag)
    {
        cout<<"Element "<<value<<" not Found in the List";
    }
}
int main()
{
    List l;
    char choice;
    while(1)
    {
        cout<<"\n**** MENU ****";
        cout<<"\nC:CREATE\nI:INSERT\nR:REMOVER\nS:SEARCH\nD:DISPLAY\nQ:Quit\n";
        cout<<"\nEnter Your Choice:";
        cin>>choice;
        switch(choice)
        {
        case 'C':
        case 'c':
            l.create();
            l.display();
            break;
        case 'I':
        case 'i':
            l.insert();
            l.display();
            break;
        case 'R':
        case 'r':
            l.remove();
            l.display();
            break;
        case 'S':
        case 's':
            l.search();
            l.display();
            break;
        case 'D':
        case 'd':
            l.display();
            break;
        case 'Q':
        case 'q':
            return 0;
        }
    }
    return 0;
}
