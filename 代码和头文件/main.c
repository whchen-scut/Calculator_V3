#include "calculator_plus.c"
    
    int main()
    {
    	printf("��ӭʹ���������������V3��\n"); 
        printf("������������С�������λ��\n"); 
        printf("����������ո�\n\n"); 
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
        printf("��������%.2lf\n\n", temp);
        destroyLStack(symbol);
        destroyLStack(number);
        free(symbol);
        free(number);
    }
		getch();
		getch();
        return 0;
    }
