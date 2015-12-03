//
//  main.c
//  6栈的学习
//
//  Created by 田月 on 15/11/22.
//  Copyright (c) 2015年 hold on. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char a[101],s[101];
    int i,len,mid,next,top;
    
    gets(a);//读入一行字符
    len = strlen(a); //求字符串的长度
    mid = len/2 -1;//求字符串的中点
    
    top = 0;//栈的初试化
    //将mid前的字符依次入栈
    for (i=0; i<=mid; i++)
        s[++top]=a[i];
        
    //判断字符串的长度是奇数还是偶数
    if (len%2==0)
        next=mid+1;
    else
        next = mid + 2;
    //开始匹配
        for(i=next;i<=len-1;i++)
        {
            if (a[i]!= s[top])
                break;
            top--;
            
        }
        if (top == 0)
            printf("YES");
        else
            printf("NO");

    
    return 0;
}
