/////////////////////////////////////////////////////////////////////
///Nicole Anderson
///CSC 238
///Due:4/1/2015
///TicTacToe with a two dimensional array!
////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

char board[4][4];
void drawBoard();
void choice(int);
int hasWon();
int main()
{

for (int i=1; i<4;i++)
{
for(int j =1; j<4; j++)
{
board[i][j]='*';
}
}

int player=2;

int i;
do
{
drawBoard();
if (player ==1)
{
player =2;
}
else
{
player=1;
}
choice(player);
i =hasWon();

}while(i==0);

drawBoard();
if(i==2)
{
cout<< "It's a Draw!"<< endl;
}
else
{
cout<< "Congratulations Player " << player << endl;
return 0;
}
}

///////////////////Choice///////////////////////
void choice(int pturn)
{
int x,y;
cout<< "Player" << pturn << " enter a column number(1-3), and a row number(1-3)" << endl;
cin>>x>>y;

if (board[x][y]== '*')
{
	if(pturn ==1)
	{
		board[x][y]='X';
	}
	else
	{
		board[x][y]='O';
	}
}
else
{
	cout<< "Sorry this has already been taken!"<< endl;
	choice(pturn);
}	
}

/////////////////Determines whos won///////////////////////
int hasWon()
{

if(board[1][1]==board[1][2]&&board[1][2]==board[1][3]&&board[1][1]!='*')
{
return 1;
}
else if(board[2][1]==board[2][2]&&board[2][2]==board[2][3]&&board[2][1]!='*')
{
return 1;
}
else if(board[3][1]==board[3][2]&&board[3][2]==board[3][3]&&board[3][1]!='*')
{
return 1;
}

else if(board[1][1]==board[2][1]&&board[2][1]==board[3][1]&&board[1][1]!='*')
{
return 1;
}
else if(board[1][2]==board[2][2]&&board[2][2]==board[3][2]&&board[1][2]!='*')
{
return 1;
}
else if(board[1][3]==board[2][3]&&board[2][3]==board[3][3]&&board[1][3]!='*')
{
return 1;
}

else if(board[1][1]==board[2][2]&&board[2][2]==board[3][3]&&board[1][1]!='*')
{
return 1;
}

else if(board[1][3]==board[2][2]&&board[2][2]==board[3][1]&&board[1][3]!='*')
{
return 1;
}
else if(board[1][1]!='*'&&board[1][2]!='*'&&board[1][3]!='*'&&board[2][1]!='*'&&board[2][2]!='*'&&board[2][3]!='*'&&board[3][1]!='*'&&board[3][2]!='*'&&board[3][3]!='*')
{
return 2;
}
else
{
return 0;
}
}

///////////////////////////////Draws the board/////////////////////////////////////////////////////////
void drawBoard()
{
cout<< "   1   2   3 "<<endl;
cout<< "     |   |	 "<< endl;
cout<< "1  " << board[1][1] << " | " << board[1][2] << " | " << board[1][3]<< endl;
cout<<" ____|___|____"<<endl;
cout<<"     |   |    "<<endl;
cout<< "2  " << board[2][1] << " | " << board[2][2] << " | " << board[2][3]<< endl;
cout<<" ____|___|____"<<endl;
cout<<"     |   |	  "<<endl;
cout<< "3  " << board[3][1] << " | " << board[3][2] << " | " << board[3][3]<< endl;
cout<< "     |   |	 "<< endl;
}
