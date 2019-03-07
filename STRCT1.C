struct point
{
	int x,y,z,a;
}p2={130,230,303};
void main()
{
	struct point p1;
	clrscr();
	p1.x,p1.a=10;
	p1.y=20;
	p1.z=30;
	printf("x=%d y=%d z=%d a=%d\n",p1.x,p1.y,p1.z,p1.a);
	printf("x=%d y=%d z=%d\n",p2.x,p2.y,p2.z);
	getch();

}