#include "calculator_plus.c"
    
    int main()
    {
    	printf("欢迎使用四则运算计算器V3！\n"); 
        printf("计算结果保留到小数点后两位。\n"); 
        printf("不允许输入空格。\n\n"); 
        while(1){
        char aExpression1[100] = {0};
        char aExpression2[100] = {0};
        LinkStack *symbol = (LinkStack *)malloc(sizeof(LinkStack));
        LinkStack *number = (LinkStack *)malloc(sizeof(LinkStack));
        initLStack(symbol);
        initLStack(number);
        inputString(aExpression1);
        convertString(aExpression1,aExpression2,symbol);
        double temp = computeString(number,aExpression2);
        printf("计算结果：%.2lf\n\n", temp);
        destroyLStack(symbol);
        destroyLStack(number);
        free(symbol);
        free(number);
    }
		getch();
		getch();
        return 0;
    }
