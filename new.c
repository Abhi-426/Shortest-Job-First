#include<stdio.h> 
int main() 
{ 
  int count,n;
  int time=0;
  printf("\n\nEnter the Total number of Process:\t "); 
  scanf("%d",&n);
  int waiting_time,turn_around_time,arrival_time[n],burst_time[n],rt[n],t[n];
  for(count=0;count<n;count++) 
  { 
    printf("Enter Arrival Time and Burst Time for Process Process Number %d :",count+1); 
    scanf("%d",&arrival_time[count]); 
    scanf("%d",&burst_time[count]); 
    rt[count]=burst_time[count]; 
  } 

  printf("\n\nProcess\t  Arrival Time  |  Burst Time   |Turnaround Time|Waiting Time\n\n"); 



 int i;
 
for(count=0;count<n;count++)
{	
int a;
int min=100;
for(i=0;i<n;i++){
	if(time!=0){
	if(rt[i]<=min && rt[i]!=0 && arrival_time[i]<=time){
		a=i;
		min=rt[i];
	}
}
else{
	 if(arrival_time[i]<=min){
		a=i;
		min=arrival_time[i];
	}
}
}
if(arrival_time[a]>time){
	time=arrival_time[a]+rt[a];
	rt[a]=0;
	t[a]=time;
}
else{

time=time+rt[a]	;
	rt[a]=0;
	t[a]=time;
}
}
for (count=0;count<n;count++){ 
      printf("P[%d]\t|\t%d\t|\t%d\t|\t%d\t|\t%d\n",count+1,arrival_time[count],burst_time[count],t[count]-arrival_time[count],t[count]-arrival_time[count]-burst_time[count]); 
      waiting_time+=time-arrival_time[count]-burst_time[count]; 
      turn_around_time+=time-arrival_time[count]; 
      
}
}
