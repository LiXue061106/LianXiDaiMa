 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
 #include<windows.h>
 
 int main(void)
 {
 	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	
	srand(time(0));
 	char again;
 	
 	do
 	{
 		int x = rand()%100+1;
 		int y = 0;
 		int z = 0;
 		int w = rand()%100+1;
 		
 		printf("请输入你猜的数字\n");
 		do
 		{
 			scanf("%d",&y);
 			z++;
 			if( y > x )
 			{
 				printf("你猜的数大了\n");
			 }else if( y < x )
			 {
			 	printf("你猜的数小了\n");
			 }
		 }while( y != x );
		 
		 printf("猜对了！你用了%d次就猜出来了，超过了全国%d%%的人\n",z,w);
		 
		 printf("还要再玩一次吗？（输入y继续，按其他键退出）\n");
		 scanf(" %c",&again);
	}while( again == 'y' || again == 'Y' );
	
	printf("游戏结束，感谢游玩！");
	
	return 0;
 }