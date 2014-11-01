//
//  main.c
//  C_Helldwold
//
//  Created by bb on 14-9-22.
//  Copyright (c) 2014年 bb. All rights reserved.
//

#include <stdio.h>
#include<string.h>

void test(){
    char s1[] = "charvenhe";
    char s2[2] ;
    scanf("%s",s2);
    printf("%s %s\n",s1,s2);
}

//scanf
void test2(){
    // insert code here...
    int d = 0;
    int b = 0;
    printf("请输入数字");
    scanf("%d %d",&d,&b);
    //  printf("Hello, World! %-5d %.2f\n",26,1.55);
    printf("输入的是%d,%d\n",d,b);
}

//strlen
void test3(){
    int len = strlen("何嘉文");
    printf("%d\n",len);
}

//strcpy
void test4(){
    char left[10];
    strcpy(left, "sadasdasd");
    printf("%s\n",left);
}

//strcat
void test5(){
    char left[15]={'k','i','\0'};
    strcat(left, "sadasdasd");
    printf("%s\n",left);
}
//Ptr
void testPtr(){
    char test[20] = "charvenhe";
    char *p = test;
    for(;*p != '\0';p++){
        printf("%c",*p);
    }
    for(int i =0 ;i<20;i++,p++){
        printf("%c",*p);
    }
    
    printf("%ld",strlen(test));
    printf("%ld",sizeof(test));
}

int add(int a,int b){
    return a + b;
}

int move(int a,int b){
    return a - b;
}


//Ptr2
void testPtr2(){
    char * test  = "charvenhe";
    char *p = test;
    for(;*p != '\0';p++){
        printf("%c",*p);
    }
    printf("%ld",strlen(test));
    printf("%ld",sizeof(test));
    int a = 5;
    int * test2 = &a ;
    printf("%ld",sizeof(test2));
    
}

int count (int a,int b,int (*p) (int ,int)){
    return p(a,b);
}

//函数指针
void testPorter(){
    int(*p)(int a,int b);
    p = move;
    printf("%d\n",count(5, 6, p));
}


int main(int argc, const char * argv[])
{
   testPorter();
   return 0;
}

