//
//  main.c
//  code vi du 2
//
//  Created by Hiếu Hee on 14/06/2022.
//

#include <stdio.h>

int main()
{
    int sochan;
    int min;
    int max;
    printf("nhap so max\n");
    scanf("%d",&max);
    printf("nhap so min\n");
    scanf("%d",&min);
    printf("so tu min den max la\n");
            for(sochan=min; sochan <=max; sochan++){
            if(sochan%2==0)
            printf("\n %d\n",sochan);
        }
    return 0;
}
