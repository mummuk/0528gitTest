// calc.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.


#include <iostream>
#include "add.h"
#include "mul.h"
#include "sub.h"


int main()
{
    printf("1 + 2 = %d\n", add(1, 2));
    printf("1 - 2 = %d\n", sub(1, 2));
    printf("1 * 2 = %d\n", mul(1, 2));
}
