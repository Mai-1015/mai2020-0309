#include <stdio.h>
#include <stdlib.h> 



void maopao( );
void tong( );
void kuaisu( );
void guibing( ) ;
int tuichu(int x);
void dui( );
void jishu1( );
void jishu2( );

int main()
{
	main: 
	
    printf("     Hello, 小A!\n");
    int x,i=0; 
    printf("10个数字的冒泡排序,  请按1\n");
    printf("10个数字的桶排序,    请按2\n");
    printf("10个数字的快速排序,  请按3\n");
    printf("10个数字的归并排序,  请按4\n");
    printf("10个数字的堆排序,    请按5\n");
    printf("10个数字的计数排序,  请按6\n");
    printf("10个数字的基数排序,  请按7\n");
    printf("关闭窗口,            请按8\n");
    printf("请输入数字：");
    scanf("%d",&i); 
    switch(i)
    {
    	case 1:
    		{
			maopao( );
			i=tuichu(i);
			if(i==2)
			{goto tuichu1;}
			system("cls");
			goto main;
			}
			
    	case 2:
    		{
			tong( );
			i=tuichu(i);
			if(i==2)
			{goto tuichu1;}
			system("cls");
			goto main;
			}
			
    	case 3:
    		{
			kuaisu( );
			i=tuichu(i);
			if(i==2)
			{goto tuichu1;}
			system("cls");
			goto main;
			}
			
    	case 4:
    		{
			guibing( );
			i=tuichu(i);
			if(i==2)
			{goto tuichu1;}
			system("cls");
			goto main;
			}
			
    	case 5:
    		{
			dui( );
			i=tuichu(i);
			if(i==2)
			{goto tuichu1;}
			system("cls");
			goto main;
			}
			
    	case 6:
    		{
			jishu1( );
			i=tuichu(i);
			if(i==2)
			{goto tuichu1;}
			system("cls");
			goto main;
			}
			
    	case 7:
    		{
			jishu2( );
			i=tuichu(i);
			if(i==2)
			{goto tuichu1;}
			system("cls");
			goto main;
			}	
    	
    	case 8:
    		{
    		tuichu1:
			printf("\n谢谢观看！\n");
    		break;
			}
			
		default:
			{
			printf("\n你输入的数字有误\n\n\n");
			goto main;
			}
    	
	}
	return 0;
}



/////////////////退出函数//////////////////////
int tuichu(int x)
{

    printf("\n\n返回主菜单,  请按1\n");
    printf("退出程序,    请按2\n");
	printf("请输入数字：");
    scanf("%d",&x);
    if(x!=1&&x!=2)
    {		
		printf("\n你输入的数字有误");
		tuichu(x);
	} 
	return x; 
}

/////////////////冒泡排序函数//////////////////////
 void maopao( ) 
{
	system("cls");
    printf("     Hello, 小A!\n");
    int i=0,j=0, a[10]={0}, t=0;
    printf("10个数字的冒泡排序\n请输入10个数字，回车下一步：\n");
    for(i=0;i<10;i++)
       {
		printf("第%d个数字： ",i+1);
	    scanf("%d",&a[i]); 
	   }
    for(i=1;i<=9;i++)
     {  for(j=0;j<9;j++)
    if(a[j]>a[j+1])
    {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
    }
     }
    printf("经过交换的数字排列：\n");
    for(i=0;i<10;i++)
    {
     printf("%d  ",a[i]);
    }
}


/////////////////桶排序函数//////////////////////
 void tong( ) 
{
	system("cls");
    printf("     Hello, 小A!\n");
    int i,j=0, a[10]={0},b[100][10]={0};
    printf("10个数字(1~100以内)的桶排序\n请输入10个数字，回车下一步：\n");
	for(i=0;i<10;i++)
       {
		printf("第%d个数字： ",i+1);
	    scanf("%d",&a[i]); 
	    if(a[i]>=100||a[i]==0)
	    {
	    	printf("你的数字已经不在1~100内，请重新输入");
	    	printf("第%d个数字： ",i+1);
	    	scanf("%d",&a[i]); 
		}
	    b[a[i]][j]=a[i];
	    j++;
	   }
    printf("经过交换的数字排列：\n");
    for(i=0;i<100;i++)
    {
		for(j=0;j<10;j++)
       {
    	 if(b[i][j]!=0)
    	 {
    		printf("%d  ",b[i][j]);
		 }	
	   }
	}
}



/////////////////快速排序函数//////////////////////
int Partition(int arr[], int low, int high)
{
    int base = arr[low];
    while(low < high)
    {
        while(low < high && arr[high] >= base)
        {
            high --;
        }
    	 int t;
   		 t = arr[low];
    	 arr[low] = arr[high];
   		 arr[high] = t;
        while(low < high && arr[low] <= base)
        {
            low ++;
        }
   		 t = arr[low];
    	 arr[low] = arr[high];
   		 arr[high] = t;
    }
    return low;
}
 
void QuickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int base = Partition(arr, low, high);
        QuickSort(arr, low, base - 1);
        QuickSort(arr, base + 1, high);
    }
}


 void kuaisu( ) 
{
	system("cls");
    printf("     Hello, 小A!\n");
    int i=0,j=0, a[10]={0}, t=0;
    printf("10个数字的快速排序\n请输入10个数字，回车下一步：\n");
    for(i=0;i<10;i++)
       {
		printf("第%d个数字： ",i+1);
	    scanf("%d",&a[i]); 
	   }
    QuickSort(a, 0, 9);
    	printf("经过交换的数字排列：\n");
    for(j = 0; j < 10; j ++)
    {
        printf("%d  ",a[j]);
    }
}
 
 
 
/////////////////归并排序函数//////////////////////
void zhi(int a[],int b[], int left, int mid, int right)
{//实现“治”
    int i = left, j=mid+1, k = left;
    while(i!=mid+1 && j!=right+1)
    {
        if(a[i] > a[j])
            b[k++] = a[j++];
        else
            b[k++] = a[i++];
    }
    while(i != mid+1) 
        {
			b[k++] = a[i++];
		}
    while(j != right+1)
        {
			b[k++] = a[j++];
		}
    for(i=left; i<=right; i++)
        {
			a[i] = b[i];
		}
}

void fen(int a[],int b[],int left,int right)
{//实现“分”
	int mid;
	if(left < right)
	{
		mid =(left+right)/2;
		fen(a, b,left,mid);
		fen(a, b,mid+1,right);
		zhi(a, b,left,mid,right);
	}
}


  void guibing( ) 
{
	system("cls");
    printf("     Hello, 小A!\n");
    int i=0, a[10]={0},b[10]={0};
    printf("10个数字的归并排序\n请输入10个数字，回车下一步：\n");
    for(i=0;i<10;i++)
       {
		printf("第%d个数字： ",i+1);
	    scanf("%d",&a[i]); 
	   }
	fen(a,b,0,9);
     printf("经过交换的数字排列：\n");
    for(i=0;i<10;i++)
     {
     printf("%d  ",a[i]);
     }
}
 
 
 
/////////////////堆排序函数//////////////////////
void dui1(int a[],int n,int i)
{
	if(i>=n)
	{
		return;
	}
	int c1 = 2*i+1;
	int c2 = 2*i+2;
	int max = i;
	if(c1<n&&a[c1]>a[max])
	{
		max = c1;
	}
	if(c2<n&&a[c2]>a[max])
	{
		max = c2;
	}
	if(max!=i)
	{
		int t;
		t=a[i];
		a[i]=a[max];
		a[max]=t;
		dui1(a,n,max);
	}		
}
 
void dui2(int a[],int n)
{
	int last = n-1;
	int now = (last-1)/2;
	int i;
	for(i=now;i>=0;i--)
	{
		dui1(a,n,i);
	}
}
 
 
void dui3(int a[],int n)
{
	dui2(a,n);
	int i;
	for(i=n-1;i>=0;i--)
	{
		int t;
		t=a[i];
		a[i]=a[0];
		a[0]=t;	
		dui1(a,i,0);
	}
}
 
 
 void dui( ) 
{
	system("cls");
    printf("     Hello, 小A!\n");
    int i=0,j=0, a[10]={0}, t=0;
    printf("10个数字的堆排序\n请输入10个数字，回车下一步：\n");
    for(i=0;i<10;i++)
       {
		printf("第%d个数字： ",i+1);
	    scanf("%d",&a[i]); 
	   }
	dui3(a,10);
    printf("经过交换的数字排列：\n");
    for(i=0;i<10;i++)
    {
     printf("%d  ",a[i]);
    }
}
 
 
 
 
/////////////////计数排序函数//////////////////////
 void jishu1( ) 
{
	system("cls");
    printf("     Hello, 小A!\n");
    int i,j=0, a[10]={0},b[10]={0};
    printf("10个数字的计数排序\n请输入10个数字，回车下一步：\n");
	for(i=0;i<10;i++)
       {
		printf("第%d个数字： ",i+1);
	    scanf("%d",&a[i]); 
	    } 
	for(i=0;i<10;i++)
	   {         
		     int k=0;
	    	for(j=0;j<10;j++)
         	{
      	      if(a[i]>a[j])
    		  {
    		  k++;
    		  }
	     	}
	     	b[k]=a[i];
	   } 
    printf("经过交换的数字排列：\n");
    for(i=0;i<10;i++)
    {
    	if(b[i]==0)
    		printf("%d  ",b[i-1]);
    	else
    		printf("%d  ",b[i]);
	} 
}

 
 
/////////////////基数排序函数//////////////////////
 void jishu2( ) 
{
	system("cls");
    printf("     Hello, 小A!\n");
    int i,j=0, a[10]={0},b[10][10]={0};
    printf("10个数字(1~100以内)的基数排序\n请输入10个数字，回车下一步：\n");
	for(i=0;i<10;i++)
       {
		printf("第%d个数字： ",i+1);
	    scanf("%d",&a[i]); 
	    if(a[i]>=100||a[i]==0)
	    {
	    	printf("你的数字已经不在1~100内，请重新输入");
	    	printf("第%d个数字： ",i+1);
	    	scanf("%d",&a[i]); 
		}
		 j=a[i]%10 ;
	  	 b[j][i]=a[i];
	   }
         	  int k=0;
	for(i=0;i<10;i++)
	   {
	    	for(j=0;j<10;j++)
         	{
      	      if(b[i][j]!=0)
    		  {
			  a[k]=b[i][j];
			  b[i][j]=0;
    		  k++;
    		  }
	     	}
	   }
	for(i=0;i<10;i++)
 	{
	 	j=a[i]/10;
	 	b[j][i]=a[i];
 	}
	   
    printf("经过交换的数字排列：\n");
    for(i=0;i<10;i++)
    {
		for(j=0;j<10;j++)
       {
    	 if(b[i][j]!=0)
    	 {
    		printf("%d  ",b[i][j]);
		 }	
	   }
	}
}
