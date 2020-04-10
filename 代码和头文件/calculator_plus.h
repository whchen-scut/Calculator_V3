
/**************************************************************
*	Struct Define Section
**************************************************************/
    // ����ֵ�ṹ��
    typedef enum Status {
        ERROR = 0, SUCCESS = 1
    } Status;

	// ջ�ڵ�ṹ��
    typedef  struct StackNode
    {
    	char cData;
    	double data;
    	struct StackNode *next;
    }StackNode, *LinkStackPtr;

	// ��ջ
    typedef  struct  LinkStack{
    	LinkStackPtr top;
    	int	count;
    }LinkStack;
    
/**************************************************************
*	Prototype Declare Section
**************************************************************/

    Status initLStack(LinkStack *s);//��ʼ��ջ
    
    Status isEmptyLStack(LinkStack *s);//�ж�ջ�Ƿ�Ϊ��
    
    double getTopLStackint(LinkStack *s);//�õ�ջ��Ԫ��
    
    char getTopLStackchar(LinkStack *s);//�õ�ջ��Ԫ��
    
    Status pushLStackdouble(LinkStack *s,double data);//��ջdouble���� 
    
    Status pushLStackchar(LinkStack *s,char data);//��ջchar���� 
    
    Status popLStackdouble(LinkStack *s,double *data);//��ջdouble���� 
    
    Status popLStackchar(LinkStack *s,char *data);//��ջchar���� 
    
    void inputCheck(int *val);  //�������
    
    void inputString(char s[]); //�ַ���������
    
    Status checkString(char s[]); //����ַ�������ȷ
    
    Status convertString(char s1[],char s2[],LinkStack *s); //����׺���ʽת��Ϊ��׺���ʽ
    
    int judgePriority(char a, char b);// �жϷ������ȼ�
    
    double computeString(LinkStack *s1,char s[]);// ������
    
    Status destroyLStack(LinkStack *s)  ;
