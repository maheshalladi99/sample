struct point
{
	int x,y,z,a;
}p2={130,230,303};
void main()
{
	int i;
	struct point p[10],*sptr;
	clrscr();
	for(i=0;i<3;i++)
	{
		scanf("%d%d%d",&p[i].x,&p[i].y,&p[i].z);
	}
	printf("diplaying in the form of arrays\n");
	for(i=0;i<3;i++)
	{
		printf("x[%d]=%d y[%d]=%d z[%d]=%d\n",i,p[i].x,i,p[i].y,i,p[i].z);
	}
	printf("displaying in the form of pointers\n");
	for(i=0;i<3;i++)
	{
		sptr=&p[i];
		printf("%d %d %d \n",sptr->x,sptr->y,sptr->z);
	}

       //	printf("x=%d y=%d z=%d a=%d\n",p1.x,p1.y,p1.z,p1.a);
       //	printf("x=%d y=%d z=%d\n",p2.x,p2.y,p2.z);
	getch();

}