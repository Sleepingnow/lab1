class Stack
{
	private:
		enum { MAX = 100 }; //栈的最大空间
		char items[MAX];    //保存栈的数据的数组
		int top;    //指向栈顶的索引
		int stacksize; //栈的当前大小
	public:
		Stack();
		bool isEmpty();//判断栈是否为空
		bool isFull();//判断栈是否已满
		//push() 如果栈已满返回false，否则返回true
		void push(char& item);
		//pop() r如果栈为空返回false，否则返回true
		char pop(char& item);
		int size();
};

