class Stack
{
	private:
		enum { MAX = 100 }; //ջ�����ռ�
		char items[MAX];    //����ջ�����ݵ�����
		int top;    //ָ��ջ��������
		int stacksize; //ջ�ĵ�ǰ��С
	public:
		Stack();
		bool isEmpty();//�ж�ջ�Ƿ�Ϊ��
		bool isFull();//�ж�ջ�Ƿ�����
		//push() ���ջ��������false�����򷵻�true
		void push(char& item);
		//pop() r���ջΪ�շ���false�����򷵻�true
		char pop(char& item);
		int size();
};

