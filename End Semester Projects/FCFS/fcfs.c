/* This program prints only the waiting time and turnaround time for every process.  */ 
#include<stdio.h>
int main()
{
      int n;
      printf("enter the number of process: ");
      scanf("%d",&n);
      int po[n],a[n],b[n],w[n],gval[n+1],tt[n],temp,i,j; //array "a" is to store arrival time and "b" is to store burst time
      float att=0,awt=0;
      
      for(i=0;i<n;i++)
      {
           a[i]=0; b[i]=0; w[i]=0;po[i]=i+1;
      }
      for(i=0;i<n;i++)
      {
      	    printf("-----------------\n");
            printf("Process %d\n",i+1);
            printf("Arrival Time: ");
            scanf("%d",&a[i]);
            printf("Burst Time: ");
            scanf("%d",&b[i]);
            
      }
      for(i=0;i<n;i++)
      {
      		for(j=i+1;j<n;j++)
      		{
      			if(a[j]<a[i])
      			{
      				temp=a[i];
      				a[i]=a[j];
      				a[j]=temp;
      				temp=po[i];
      				po[i]=po[j];
      				po[j]=temp;
      				temp=b[i];
      				b[i]=b[j];
      				b[j]=temp;
      			}
      		}
      }
      
      gval[0]=a[0];
      for(i=1;i<n+1;i++)
      	gval[i]=gval[i-1]+b[i-1];
      
      for(i=1;i<n;i++)
      	w[i]=gval[i]-a[i];
      
      for(i=0;i<n;i++)
      	tt[i]=gval[i+1]-a[i];         
                  
      printf("\n\nP\tAT\tBT\tWT\tTT\n");
      printf("-------------------------------------\n");
      for(i=0;i<n;i++)
      {
      	printf("%d",po[i]);
      	printf("\t%d",a[i]);
      	printf("\t%d",b[i]);
      	printf("\t%d",w[i]);
      	printf("\t%d\n",tt[i]);
      }
      
      for(i=0;i<n;i++)
      {
      		att+=tt[i];
      		awt+=w[i];
      }
      att/=n;
      awt/=n;
      printf("\n\nAverage turnaround time:\t%f\n",att);
      printf("Average wait time:\t%f\n\n\n\n",awt);
      
      
      printf("Gantt chart\n");
      for(i=0;i<n;i++)
        printf("----------------");
      printf("\n");
      for(i=0;i<n;i++)
  	 printf("|\tP%d\t",po[i]);
      printf("|\n");
      for(i=0;i<n;i++)
        printf("----------------");
      printf("\n");

      for(i=0;i<=n;i++)
      {
      	printf("%d\t \t",gval[i]);
      }
      printf("\n\n\n");
      
}
