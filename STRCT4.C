//linked list
struct node
{
	int data;
	struct node *addr;

}
main()
{
	struct node n1,n2,n3;
	clrscr();
	n1.data=10;
	n1.addr=&n2;
	n2.data=20;
	n2.addr=&n3;
	n3.data=30;
	n3.addr=&n1;
	printf("circular and linked list\n\n");
	printf("addres of 1st node is %u\n",&n1.data);
	printf("the following in the form of //data address//\n");
	printf(" %d , %u | %d , %u | %d , %u \n\n\n",n1.data,n1.addr,n2.data,n2.addr,n3.data,&n1.data);
	printf("double linked list\n\n");
	printf("following in the pattern of  // address data address //\n");
	printf("null %d %u | %u %d %u | %u %d null \n",
	n1.data,n1.addr,&n1.data,n2.data,n2.addr,&n2.data,n3.data);
	getch();

}
