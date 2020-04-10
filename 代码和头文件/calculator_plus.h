
/**************************************************************
*	Struct Define Section
**************************************************************/
    // 返回值结构体
    typedef enum Status {
        ERROR = 0, SUCCESS = 1
    } Status;

	// 栈节点结构体
    typedef  struct StackNode
    {
    	char cData;
    	double data;
    	struct StackNode *next;
    }StackNode, *LinkStackPtr;

	// 链栈
    typedef  struct  LinkStack{
    	LinkStackPtr top;
    	int	count;
    }LinkStack;
    
/**************************************************************
*	Prototype Declare Section
**************************************************************/

    Status initLStack(LinkStack *s);//初始化栈
    
    Status isEmptyLStack(LinkStack *s);//判断栈是否为空
    
    double getTopLStackint(LinkStack *s);//得到栈顶元素
    
    char getTopLStackchar(LinkStack *s);//得到栈顶元素
    
    Status pushLStackdouble(LinkStack *s,double data);//入栈double数据 
    
    Status pushLStackchar(LinkStack *s,char data);//入栈char数据 
    
    Status popLStackdouble(LinkStack *s,double *data);//出栈double数据 
    
    Status popLStackchar(LinkStack *s,char *data);//出栈char数据 
    
    void inputCheck(int *val);  //检查输入
    
    void inputString(char s[]); //字符串的输入
    
    Status checkString(char s[]); //检查字符串的正确
    
    Status convertString(char s1[],char s2[],LinkStack *s); //将中缀表达式转化为后缀表达式
    
    int judgePriority(char a, char b);// 判断符号优先级
    
    double computeString(LinkStack *s1,char s[]);// 计算结果
    
    Status destroyLStack(LinkStack *s)  ;
