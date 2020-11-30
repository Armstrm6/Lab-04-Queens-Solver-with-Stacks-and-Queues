#include <vector>
#include <stack>
#include <string>
#include <iostream>
#include <list>


using namespace std;

class  IFactorialComputer
{
public:
	IFactorialComputer() {};
	virtual int CalculateFactorial(int numberToComputer) = 0;
};


class  FactorialByRecursion : public IFactorialComputer
{
public:
	FactorialByRecursion() {};
	int CalculateFactorial(int num);
};



class  FactorialByStack : public IFactorialComputer
{
public:
	FactorialByStack() {};
	
	int CalculateFactorial(int num);

private:
	std::stack <int> s;
};


class PalindromeByRecursion{
	public:
	PalindromeByRecursion();
	~PalindromeByRecursion();
	bool stringToList(std::string str);
	bool testPalindrome(); //only thing handled by recursion
	bool listEmpty();

	private:
	list<char> stackedString;
};


class PalindromeByStack{
	public:
	PalindromeByStack();
	~PalindromeByStack();
	bool stringToList(std::string str);
	bool testPalindrome();
	bool listEmpty();

	private:
	list<char> stackedString;
};


class  MyFakeClass
{
public:
	MyFakeClass() {std::cout << "Constructor for MyFakeClass was called" << std::endl;}
	~MyFakeClass() { std::cout << "Destructor for MyFakeClass was called" << std::endl; }

};

class  MyBaseException : public std::exception
{
public:

	virtual char const* what() const throw();
};

class  MyException1 : MyBaseException
{
public:
	
	virtual char const* what() const throw();
};


class  MyException2 : MyBaseException
{
public:
	
	virtual char const* what() const throw();
};

class MyException3 : MyBaseException
{
public:
	virtual char const* what() const throw();
};


extern  std::string CallSimpleExceptionMethod(int i);
extern  void SimpleExceptionMethod(int i);


// This class is exported from the RecursionList.dll
class  ChessBoard {
public:
	ChessBoard() 
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if(i==0){row1.push(0);}
				if(i==1){row2.push(0);}
				if(i==2){row3.push(0);}
				if(i==3){row4.push(0);}
				if(i==4){row5.push(0);}
				if(i==5){row6.push(0);}
				if(i==6){row7.push(0);}
				if(i==7){row8.push(0);}
				m_board[i][j] = 0;
			}
		}
	}

	ChessBoard(int board[8][8])
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				m_board[i][j] = board[i][j];
			}
		}
	}

	std::string ToString();
	
	bool Solve(ChessBoard chessboard, int col);


	

private:
    bool CheckSafeQueens(ChessBoard chessBoard, int i, int col);
	int m_board[8][8]; //zero is free, while 1 is a placed queen
	stack <int> row1;
	stack <int> row2;
	stack <int> row3;
	stack <int> row4;
	stack <int> row5;
	stack <int> row6;
	stack <int> row7;
	stack <int> row8;
};