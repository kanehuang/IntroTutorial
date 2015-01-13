//
//  main.cpp
//  IntroTutorial
//
//  Created by CKHuang on 1/13/15.
//  Copyright (c) 2015 CKHuang. All rights reserved.
//

#include <iostream>
using namespace std;
const int MAX = 1000;
int trans(const int, const int, char *a, int *i);
int show(int, int);

int main(int argc, const char * argv[]) {
    int size, target, index;
//    int i,j;
    char inArr[MAX];
    
    scanf("%d %d \n",&target ,&size);
    fflush(stdin);
    fgets(inArr, MAX, stdin);

//    printf("str:%s %c\n",inArr, inArr[0]);
//    for (int i=0; i < size+1; i++) {
//        printf("str[%d]:%c strVal:%s\n", i, inArr[i], inArr);
//    }
    
    int intArr[size];
    index = trans(size, target, inArr, intArr);
    
//    printf("index:%d size:%d inArr:%s\n", index, size, inArr);
    printf("%d\n", index);
    return 0;
}

//transfer input char to int and compare value
int trans(const int size, const int value, char *array, int *iArr) {
    int i, count = 0;
    int num = 0;
    i=0;
    while (array[i] != '\0') {
//        printf("a[%d]:%c\n", i, array[i]);
        if (array[i] != ' ') {
            int temp = 0;
            temp = array[i] - 48;
            num = num * 10 + temp;
            if (num == value) {
                return count;
            }
//            printf("not space num:%d temp:%d\n", num, temp);
        }
        else{
            num = 0;
            count++;
        }
        
        i++;
    }
    return -1;
}
