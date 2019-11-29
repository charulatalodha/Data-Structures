//
//  main.c
//  charbanker
//
//  Created by Charulata on 22/04/14.
//  Copyright (c) 2014 Charulata Lodha. All rights reserved.
//

#include <stdio.h>
struct banker
{int r1,r2,r3,r4,vi;}all[5],req[5],avail,need[5];

int main()
{
    int i,n,k,flag=0;
    printf("enter no of process");
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        printf("enter allocation of process %d ",i);
         scanf("%d%d%d%d",&all[i].r1,&all[i].r2,&all[i].r3,&all[i].r4);
        printf("enter max req of proc %d ",i);
        scanf("%d%d%d%d",&req[i].r1,&req[i].r2,&req[i].r3,&req[i].r4);
        need[i].r1=req[i].r1-all[i].r1;
        need[i].r2=req[i].r2-all[i].r2;
        need[i].r3=req[i].r3-all[i].r3;
        need[i].r4=req[i].r4-all[i].r4;
        need[i].vi=0;
    }printf("enter available");
    scanf("%d%d%d%d",&avail.r1,&avail.r2,&avail.r3,&avail.r4);
    for (k=0; k<n; k++) {
        for (i=0; i<n; i++) {
            if (need[i].vi==0 && need[i].r1<=avail.r1 && need[i].r2<=avail.r2 && need[i].r3<=avail.r3 && need[i].r4<=avail.r4) {
                   avail.r1+=all[i].r1;
                   avail.r2+=all[i].r2;
                   avail.r3+=all[i].r3;
                   avail.r4+=all[i].r4;
                need[i].vi=1;
            }
        }
    }
    for (i=0; i<n; i++) {
        if (need[i].vi!=0)
            flag=1;
            else
                flag=0;
        }
        if(flag==1)
            printf("success \n total<=%d ,%d, %d, %d>",avail.r1,avail.r2,avail.r3,avail.r4);
        else
            printf("not success");
    }


