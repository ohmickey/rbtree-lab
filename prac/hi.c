#include <stdio.h>
//누적합이 특정값을 초과하면 출력하고 중지


int main(void) {
    int i = 0, hap = 0;

    //A)
    while(hap<=100){
        hap += ++i;
        // printf("%d\n",hap);

    }
    printf("1부터 %d 까지의 합은%d이다.\n",i,hap);

    //B)
    i = 0, hap = 0;

    while(1) //무한루프
    {   hap += ++i;
        if (hap>100)
            break;

    }
    printf("1부터 %d 까지의 합은%d이다.\n",i,hap);





    return 0;
}
