#include"stdio.h"

int main()
{
    int jam=0, menit=0,a=0,b=0, c=0;
    
    scanf("%d %d",&jam, &menit);  //misal scanf 1 30
    
    b=menit-45; //bangun 45mnt sebelumnya
    if(b<0) //kalo dikurangi, dan hasilnya kurang dari 0
    {
        a=45-menit; //berarti var. a sekarang 45-30=15 
        c=60-a; //menit menjadi 60-15= 45
        
        jam-=1;
        
        if(jam<0)
        {
            jam=23;
        }
    
        printf("%d %d\n",jam, c);
    }
    else
    {
        printf("%d %d\n", jam, b);
     } 
    
    return 0;
}
