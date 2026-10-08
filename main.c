#include <stdio.h>

int get_integer(void) {
    int val;
    printf("정수를 입력하세요: "); 
    scanf("%d", &val);            
    return val;                   
}

int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) { 
        res *= i;                 
    }
    return res;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int main(void) {
    int n, r, result;
    
   printf("n 값으로 사용할 ");
    n = get_integer();
    printf("r 값으로 사용할 ");
    r = get_integer();

    result = combination(n, r);

    printf("Combination(%d, %d)의 결과: %d\n", n, r, result);

    return 0;
}
