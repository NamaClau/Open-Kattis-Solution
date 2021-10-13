#include<stdio.h>

int main()
{
    int jml=0, mile=0, hour[100];
    int total[100], dis=0, totDis=0;
    int n=0;
    
    while(jml != -1)
    {
        scanf("%d",&jml); getchar();
        totDis=0;
        
        for(int i=0; i<jml; i++)
        {
            scanf("%d %d",&mile, &hour[i]); getchar();
            
            if(i>=1)
            {
                dis=mile*(hour[i]-hour[i-1]);
            }
            else
            {
                dis=mile*hour[i];
            }
            totDis+=dis;
        }
        total[n]=totDis;
        n++;
    }

    for(int j=0; j<n-1; j++)
    {
        printf("%d miles\n",total[j]);
    }

    return 0;
