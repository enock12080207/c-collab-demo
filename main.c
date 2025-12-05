#include <stdio.h>  

int main() {
    // 修正：\n 是換行符號，中間不能有空白 (原本寫成 \ n)
    printf("=== C Language Calculator ===\n");
    
    int a=10,b=20;
    int sum=a+b;
    int x = 50, y = 30;
    int diff = x - y;
   
    printf("add 10+ 20= %d\n",sum);
    printf("Sub: %d - %d = %d\n", x, y, diff);
    // Operations placeholders 
    printf("System Check OK.\n"); 
    
    return 0;
}