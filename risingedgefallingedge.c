#include <stdio.h>
int main()
{
int signal[50]={1,1,0,0,1,0,0,1,0,1,0,0,1,1,1,0,0,1,0,1,0,0,0,1,1,0,1,0,0,1,1,0,1,0,0,1,1,1,0,0,1,0,0,1,0,0,1,0,1,1};
int i,j;
for(i=1,j=i+1;i<=50,j<=51;i++,j++)
{
//j=i+1;
if(signal[i]==signal[j])
{
printf("Level\n");
}
else if(signal[i]<signal[j])
{
printf("Rising Edge Detected\n");
}
else if(signal[i]>signal[j])
{
printf("Falling Edge Detected\n");
}
}
return 0;
}
