#define POSTFIXSIZE 1000

class stack{
    int top;
public:
    int a[POSTFIXSIZE];
    stack(){
        top=-1;
    }
    void push(int x){
        if(top>=(POSTFIXSIZE-1)){
            return;
        }
        a[++top] = x;
    }
    
    int pop(){
        if(top<0){
            return -1;
        }
        else{
            int n = a[top--];
            return n;
        }
    }
};


void EvalPostfix(char arr[]){
    Stack s;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]>='0' && arr[i]<'9'){  
            int ab = arr[i] - '0';
            s.push(ab);
        }
        else{
            if(arr[i]=='+'){
                int a1 = s.pop();
                int a2 = s.pop();
                int ans = a1+a2;
                s.push(ans);
            }
            else if(arr[i]=='-'){
                int a1 = s.pop();
                int a2 = s.pop();
                int ans = a1-a2;
                if(ans<0){
                    ans = ans*(-1);
                }
                s.push(ans);
            }
            else if(arr[i]=='*'){
                int a1 = s.pop();
                int a2 = s.pop();
                int ans = a1*a2;
                s.push(ans);
            }
            else if(arr[i]=='/'){
                int a1 = s.pop();
                int a2 = s.pop();
                int ans = a1/a2;
                s.push(ans);
            }
            else if(arr[i]==')'){
                while(top>=0){
                    cout<<s.pop()<<endl;
                }
            }
        }
        
    }
    
}

int main()
 {

	int i ;

	char postfix[POSTFIXSIZE];


	for (i = 0 ; i <= POSTFIXSIZE - 1 ; i++)
	{
		scanf("%c", &postfix[i]);

		if ( postfix[i] == ')' ) 
		{ break; } 
	}

	EvalPostfix(postfix);
	
	return 0;
 }
