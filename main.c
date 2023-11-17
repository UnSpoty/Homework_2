#include <stdio.h>
#define n 7

int task1()
{
    int i, j;
    int array[n][n]={0};
    for ( i = 0; i < n; i++ ) {
        for ( j = 0; j < n; j++ )
        {
            array[i][j]=i*n+j+1;
        }
    }
    for ( i = 0; i < n; i++ ) {
        for ( j = 0; j < n; j++ )
        {
            printf( "%d\t",array[i][j] );
        }
    printf( "\n" );
    }
    return 0;
}

int task2()
{
    int i,tmp;
    tmp=0;
    int Array[n]={0};
    for ( i = 0; i < n; i++ ) {
        Array[i]=i+1i;
    }
    for ( i = 0; i < n/2; i++ ) {
        tmp=Array[i];
        Array[i]=Array[n-i-1];
        Array[n-i-1]=t;
    }
    for ( i = 0; i < n; i++ ) {
        printf( "%d  ",Array[i]);
    }
    return 0;
}

int task3()
{
    int i, j;
    int Array[n][n]={0};
    for ( j = 0; j < n; j++ ) {
        for ( i = 0; i < n; i++ )
        {   
            if(i>=n-1-j){
                Array[i][j]=1;
            }
        }
    }
    for ( i = 0; i < n; i++ ) {
        for ( j = 0; j < n; j++ )
        {
            printf( "%d\t",Array[i][j] );
        }
    printf( "\n" );
    }
    return 0;
}

int task4()
{
    int i, j,cout,d_i,d_j;
    int Array[n][n]={0};
    i=0;
    j=0;
    d_i=0;
    d_j=1;
    for(cout=1; cout<n*n+1; cout++)
    {
        Array[i][j]=cout;
        i=i+d_i; 
        j=j+d_j;
        if ((Array[i][j-1]!=0) && (Array[i-1][j]!=0))
        {
            d_i=0; d_j=1;
        }
        if (((i-1<0) || (Array[i-1][j]!=0)) && ((j+1>n-1) || (Array[i][j+1]!=0)))
        {
            d_i=1; d_j=0;
        }
        if (((i+1>n-1) || (Array[i+1][j]!=0)) && ((j+1>n-1) || (Array[i][j+1]!=0)))
        {
            d_i=0; d_j=-1;
        }
        if ((i+1>n-1) && (j-1<0) || ((Array[i][j-1]!=0) && (Array[i+1][j]!=0) && (Array[i-1][j]==0)))
        {
            d_i=-1; d_j=0;
        }
    }
    for ( i = 0; i < n; i++ ) {
        for ( j = 0; j < n; j++ )
        {
            printf( "%d\t",Array[i][j] );
        }
    printf( "\n" );
    }
    return 0;
}

int main(void) 
{
   unsigned int task_num;

   printf("Please, select task from 1..4\n");
   scanf("%u", &task_num);
   printf("Task: %u\n", task_num);

  switch(task_num)
  {
    case 1:
     task1();
    break;
    case 2:
     task2();
    break;
    case 3:
     task3();
    break;
    case 4:
     task4();
    break;

   default:
    printf("Selected task %u does not exist\n", task_num);
  }

 return 0;
}
