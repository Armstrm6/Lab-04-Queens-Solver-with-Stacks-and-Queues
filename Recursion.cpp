#include "Recursion.h"
#include <stack>
#include <stdbool.h>
#include<iostream>
#include<sstream>
#include<string>

using namespace std;

// 3! = 3 * 2 * 1
// 4! = 4 * 3 * 2 * 1


int FactorialByRecursion::CalculateFactorial(int num) {

	if (num <= 1)
	{
		return 1;
	}

	else 
	{
		return num * CalculateFactorial(num - 1);  
	}
}


int FactorialByStack::CalculateFactorial(int num) {

	int answer = 1;

	if (num <= 1) { return 1; }

	while (num > 1) {
		s.push(num);
		num--;
	}
	while (!s.empty()) {
		answer = answer * s.top();
		s.pop();
	}
	return answer;
}


bool ChessBoard::Solve(ChessBoard chessBoard, int col) {
	int row_1=1;
	int column_1=1;
	int destack;
	if (col >= 8) {
		return true;
	}

	for(col ;  col < 8; col=col+1){
		for (int i = 0; i < 8; ++i) {
			if (this->CheckSafeQueens(chessBoard, i, col)==true) {
				row_1=i;
				column_1=col;
				destack = 0;
				switch(i){
					case 0:
						while(destack > col){
							row1.pop();
							destack=destack-1;
						}
						row1.push(1);
						destack=destack+1;
						while(destack < 8){
							row1.push(0);
							destack=destack+1;
						}
					case 1:
					while(destack > col){
							row2.pop();
							destack=destack-1;
						}
						row2.push(1);
						destack=destack+1;
						while(destack < 8){
							row2.push(0);
							destack=destack+1;
						}
					break;
					case 2:
					while(destack > col){
							row3.pop();
							destack=destack-1;
						}
						row3.push(1);
						destack=destack+1;
						while(destack < 8){
							row3.push(0);
							destack=destack+1;
						}
						break;
					case 3:
					while(destack > col){
							row4.pop();
							destack=destack-1;
						}
						row4.push(1);
						destack=destack+1;
						while(destack < 8){
							row4.push(0);
							destack=destack+1;
						}
						break;
					case 4:
					while(destack > col){
							row5.pop();
							destack=destack-1;
						}
						row5.push(1);
						destack=destack+1;
						while(destack < 8){
							row5.push(0);
							destack=destack+1;
						}
						break;
					case 5:
					while(destack > col){
							row6.pop();
							destack=destack-1;
						}
						row6.push(1);
						destack=destack+1;
						while(destack < 8){
							row6.push(0);
							destack=destack+1;
						}
						break;
					case 6:
					while(destack > col){
							row7.pop();
							destack=destack-1;
						}
						row7.push(1);
						destack=destack+1;
						while(destack < 8){
							row7.push(0);
							destack=destack+1;
						}
						break;
					case 7:
					while(destack > col){
							row8.pop();
							destack=destack-1;
						}
						row8.push(1);
						destack=destack+1;
						while(destack < 8){
							row8.push(0);
							destack=destack+1;
						}
						break;
				}
			}
		}
	}
	

    return true;
}

bool ChessBoard::CheckSafeQueens(ChessBoard chessBoard, int i, int col){
	int board[8][8];
	int x,y;

	x=i;
	for(y = 0 ; y < 8 ; y = y+1){
		if(board[x][y]==1){
			return false;
		}
	}

	y=col;
	for(x = 0 ; x < 8 ; x = x+1){
		if(board[x][y]==1){
				return false;
		}
	}

	//+Diagonal
	for(x = col ; x < 8 ; x = x+1){
		for(y = i ; y > -1 ; y = y-1){
			if(board[x][y]==1){
				return false;
			}
		}
	}

	for(x = col ; x > -1 ; x = x-1){
		for(y = i ; y < 8 ; y = y+1){
			if(board[x][y]==1){
				return false;
			}
		}
	}
	//-Diagonal
	for(x = col ; x > -1 ; x = x-1){
		for(y = i ; y > -1 ; y = y-1){
			if(board[x][y]==1){
				return false;
			}
		}
	}

	for(x = col ; x < 8 ; x = x-1){
		for(y = i ; y < 8 ; y = y-1){
			if(board[x][y]==1){
				return false;
			}
		}
	}
	board[i][col]= '1';
	return true;
}

string ChessBoard::ToString() {
	
	//for (int j = 0; j < 8; ++j) {
	//		int temp = m_board[i][j];
	//		stringstream ss;
	//		ss << temp;
	//		string str = ss.str();
	//		answer = answer + str;
	//	}
	//	answer = answer + "\n";
	string answer = "";
	int tempInt = 0;
	int destack=8;
	

	for (int i = 0; i < 8; ++i) {
		tempInt = row1.top(); //not front in this case, top
		std:: cout << tempInt;
		row1.pop();
		tempInt = row2.top();
  		std:: cout << tempInt;
		row2.pop();
		tempInt = row3.top();
  		std:: cout << tempInt;
		row3.pop();
		tempInt = row4.top();
  		std:: cout << tempInt;
		row4.pop();
		tempInt = row5.top();
  		std:: cout << tempInt;
		row5.pop();
		tempInt = row6.top();
  		std:: cout << tempInt;
		row6.pop();
		tempInt = row7.top();
  		std:: cout << tempInt;
		row7.pop();
		tempInt = row8.top();
  		std:: cout << tempInt;
		row8.pop();
		std:: cout << endl;
	}
	return 0;
}

extern std::string CallSimpleExceptionMethod(int i)
{    
	std::string retVal;
	MyFakeClass* resourceThatNeedsToBeCleanedup = nullptr;
	resourceThatNeedsToBeCleanedup = new MyFakeClass();
	try{
		SimpleExceptionMethod(i);
		retVal = "I did not get an Exception";
	}
	catch(MyException1){
		retVal = "I got Exception 1";
	}catch(MyException2){
		retVal = "I got Exception 2";
	}catch(MyException3){
		retVal = "I got Exception 3";
	}
	delete resourceThatNeedsToBeCleanedup;
	return retVal;
}

// NOTE this function should not be editted.
extern void SimpleExceptionMethod(int i)
{
	int retVal = 0;
	if (i == 1)
	{
		throw MyException1();
	}
	else if (i == 2)
	{
		throw MyException2();

	}
	else if (i == 3)
	{
		throw MyException3();
	}
	else
	{
		retVal = 20;
	}
	return;
}

PalindromeByStack::PalindromeByStack(){};
PalindromeByStack::~PalindromeByStack(){
	stackedString.clear();
};

bool PalindromeByStack::stringToList(std::string str){
	for(int i = 0; i < str.size(); i++){
		stackedString.push_back(str[i]);
	}
	return true;
}


bool PalindromeByStack::listEmpty(){
	return stackedString.empty();
}
bool PalindromeByStack::testPalindrome(){
	int size = stackedString.size();
	bool retVal = false;
	if(stackedString.empty()){
		return false;
	}
	std::string test1;
	std::string test2;
	while((size != 1) && (size != 0)){
		test1 = stackedString.front();
		test2 = stackedString.back();
		if(test1 == test2){
			stackedString.pop_front();
			stackedString.pop_back();
			size = size - 2;
		}else{
			return false;
		}
	}
	return true;
}

PalindromeByRecursion::PalindromeByRecursion(){}
PalindromeByRecursion::~PalindromeByRecursion(){
	stackedString.clear();
}

bool PalindromeByRecursion::stringToList(std::string str){
	for(int i = 0; i < str.size(); i++){
		stackedString.push_back(str[i]);
	}
	return true;
}
bool PalindromeByRecursion::listEmpty(){
	return stackedString.empty();
}
bool PalindromeByRecursion::testPalindrome(){
	int size = stackedString.size();
	std::string test1;
	std:;string test2;
	if((size != 1) && (size != 0)){
		test1 = stackedString.front();
		test2 = stackedString.back();
		if(test1 == test2){
			stackedString.pop_front();
			stackedString.pop_back();
			size = size - 2;
			return testPalindrome();
		}else{
			return false;
		}
	}
	return true;
}

char const* MyBaseException::what() const throw() {
	return "MyBaseException";
}
char const* MyException1::what() const throw() {
	return "MyException1";
}
char const* MyException2::what() const throw() {
	return "MyException2";
}
char const* MyException3::what() const throw() {
	return "MyException3";
}
