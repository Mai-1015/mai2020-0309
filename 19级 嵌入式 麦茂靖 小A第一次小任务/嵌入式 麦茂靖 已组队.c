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
	
    printf("     Hello, СA!\n");
    int x,i=0; 
    printf("10�����ֵ�ð������,  �밴1\n");
    printf("10�����ֵ�Ͱ����,    �밴2\n");
    printf("10�����ֵĿ�������,  �밴3\n");
    printf("10�����ֵĹ鲢����,  �밴4\n");
    printf("10�����ֵĶ�����,    �밴5\n");
    printf("10�����ֵļ�������,  �밴6\n");
    printf("10�����ֵĻ�������,  �밴7\n");
    printf("�رմ���,            �밴8\n");
    printf("���������֣�");
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
			printf("\nлл�ۿ���\n");
    		break;
			}
			
		default:
			{
			printf("\n���������������\n\n\n");
			goto main;
			}
    	
	}
	return 0;
}



/////////////////�˳�����//////////////////////
int tuichu(int x)
{

    printf("\n\n�������˵�,  �밴1\n");
    printf("�˳�����,    �밴2\n");
	printf("���������֣�");
    scanf("%d",&x);
    if(x!=1&&x!=2)
    {		
		printf("\n���������������");
		tuichu(x);
	} 
	return x; 
}

/////////////////ð��������//////////////////////
 void maopao( ) 
{
	system("cls");
    printf("     Hello, СA!\n");
    int i=0,j=0, a[10]={0}, t=0;
    printf("10�����ֵ�ð������\n������10�����֣��س���һ����\n");
    for(i=0;i<10;i++)
       {
		printf("��%d�����֣� ",i+1);
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
    printf("�����������������У�\n");
    for(i=0;i<10;i++)
    {
     printf("%d  ",a[i]);
    }
}


/////////////////Ͱ������//////////////////////
 void tong( ) 
{
	system("cls");
    printf("     Hello, СA!\n");
    int i,j=0, a[10]={0},b[100][10]={0};
    printf("10������(1~100����)��Ͱ����\n������10�����֣��س���һ����\n");
	for(i=0;i<10;i++)
       {
		printf("��%d�����֣� ",i+1);
	    scanf("%d",&a[i]); 
	    if(a[i]>=100||a[i]==0)
	    {
	    	printf("��������Ѿ�����1~100�ڣ�����������");
	    	printf("��%d�����֣� ",i+1);
	    	scanf("%d",&a[i]); 
		}
	    b[a[i]][j]=a[i];
	    j++;
	   }
    printf("�����������������У�\n");
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



/////////////////����������//////////////////////
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
    printf("     Hello, СA!\n");
    int i=0,j=0, a[10]={0}, t=0;
    printf("10�����ֵĿ�������\n������10�����֣��س���һ����\n");
    for(i=0;i<10;i++)
       {
		printf("��%d�����֣� ",i+1);
	    scanf("%d",&a[i]); 
	   }
    QuickSort(a, 0, 9);
    	printf("�����������������У�\n");
    for(j = 0; j < 10; j ++)
    {
        printf("%d  ",a[j]);
    }
}
 
 
 
/////////////////�鲢������//////////////////////
void zhi(int a[],int b[], int left, int mid, int right)
{//ʵ�֡��Ρ�
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
{//ʵ�֡��֡�
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
    printf("     Hello, СA!\n");
    int i=0, a[10]={0},b[10]={0};
    printf("10�����ֵĹ鲢����\n������10�����֣��س���һ����\n");
    for(i=0;i<10;i++)
       {
		printf("��%d�����֣� ",i+1);
	    scanf("%d",&a[i]); 
	   }
	fen(a,b,0,9);
     printf("�����������������У�\n");
    for(i=0;i<10;i++)
     {
     printf("%d  ",a[i]);
     }
}
 
 
 
/////////////////��������//////////////////////
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
    printf("     Hello, СA!\n");
    int i=0,j=0, a[10]={0}, t=0;
    printf("10�����ֵĶ�����\n������10�����֣��س���һ����\n");
    for(i=0;i<10;i++)
       {
		printf("��%d�����֣� ",i+1);
	    scanf("%d",&a[i]); 
	   }
	dui3(a,10);
    printf("�����������������У�\n");
    for(i=0;i<10;i++)
    {
     printf("%d  ",a[i]);
    }
}
 
 
 
 
/////////////////����������//////////////////////
 void jishu1( ) 
{
	system("cls");
    printf("     Hello, СA!\n");
    int i,j=0, a[10]={0},b[10]={0};
    printf("10�����ֵļ�������\n������10�����֣��س���һ����\n");
	for(i=0;i<10;i++)
       {
		printf("��%d�����֣� ",i+1);
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
    printf("�����������������У�\n");
    for(i=0;i<10;i++)
    {
    	if(b[i]==0)
    		printf("%d  ",b[i-1]);
    	else
    		printf("%d  ",b[i]);
	} 
}

 
 
/////////////////����������//////////////////////
 void jishu2( ) 
{
	system("cls");
    printf("     Hello, СA!\n");
    int i,j=0, a[10]={0},b[10][10]={0};
    printf("10������(1~100����)�Ļ�������\n������10�����֣��س���һ����\n");
	for(i=0;i<10;i++)
       {
		printf("��%d�����֣� ",i+1);
	    scanf("%d",&a[i]); 
	    if(a[i]>=100||a[i]==0)
	    {
	    	printf("��������Ѿ�����1~100�ڣ�����������");
	    	printf("��%d�����֣� ",i+1);
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
	   
    printf("�����������������У�\n");
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
