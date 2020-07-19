//13460
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

const int INF = 987654321;
const int MAX = 10;

int row, col;
int min_cnt = INF;
int dy[4] = {-1, 0, 0, 1};
int dx[4] = {0, -1, 1, 0};

typedef struct{
	int y, x;
}coord;

void solve(string board[MAX], int dir, int cnt, coord R, coord B){
 
 	if(++cnt>10)
 		return;
 		
 	string copy[MAX];
 	for(int i=0; i<col; i++)
 		copy[i] = board[i];// 보드판 복사
	
	bool red = false;
	bool blue = false;
	//0: r 먼저 1:b먼저
	int order =0;
	
	switch(dir){
		
	case 0: //위
			if(B.y<R.y)
				order =1; // b가 r보다 위에 있는 경우
			break;
	case 1: //왼쪽
			if(B.x<R.x)
				order =1; // b가 r보다 왼쪽에 있는 경우
			break;
	case 2: //오른쪽
			if(B.x>R.x)
				order =1; // b가 r보다 오른쪽에 있는 경우
			break;
	case 3: //아래
			if(B.y>R.y)
				order =1; // b가 r보다 아래에 있는 경우
			break; 
	} 
	
	
	if(order==0) //r먼저
	{
		while(1)
		{
			int ny = R.y + dy[dir];
			int nx = R.x + dx[dir];
			if(copy[ny][nx]=='#')//막힘 
				break;
			if(copy[ny][nx]=='O')//구멍 
			{
				copy[R.y][R.x]='.';
				//R.y=R.x=-1;
				red=true;
				break;
			}
			copy[R.y][R.x]='.';
			copy[ny][nx]='R';
			R.x = nx;
			R.y = ny;
		}
		
		while(1)//B
		{
			int ny = B.y + dy[dir];
			int nx = B.x + dx[dir];
			if(copy[ny][nx]=='#'|| copy[ny][nx]=='R')//막힘 
				break;
			if(copy[ny][nx]=='O')//구멍 
			{
				//copy[B.y][B.x]='.';
				//B.y=B.x=-1;
				blue=true;
				break;
			}
			copy[B.y][B.x]='.';
			copy[ny][nx]='B';
			B.x = nx;
			B.y = ny;
		}
		 
	}
	 
 	else{ //b먼저 
 		while(1)//B
		{
			int ny = B.y + dy[dir];
			int nx = B.x + dx[dir];
			if(copy[ny][nx]=='#')//막힘 
				break;
			if(copy[ny][nx]=='O')//구멍 
			{
				copy[B.y][B.x]='.';
				//B.y=B.x=-1;
				blue=true;
				break;
			}
			copy[B.y][B.x]='.';
			copy[ny][nx]='B';
			B.x = nx;
			B.y = ny;
		}
		
		while(1)
		{
			int ny = R.y + dy[dir];
			int nx = R.x + dx[dir];
			if(copy[ny][nx]=='#'||copy[ny][nx]=='B')//막힘 
				break;
			if(copy[ny][nx]=='O')//구멍 
			{
				//copy[R.y][R.x]='.';
				//R.y=R.x=-1;
				red=true;
				break;
			}
			copy[R.y][R.x]='.';
			copy[ny][nx]='R';
			R.x = nx;
			R.y = ny;
		}
 		
	}
	
	if(blue)
		return;
	else if(red){
		min_cnt = min(cnt,min_cnt);
		return;
	} 
 
 	for(int i=0; i<4; i++)
	 	if(i!=dir || i!=(3-dir)){
	 		solve(copy,i,cnt,R,B);
		 }	
 } 
 
 
 
 
 
 //1.15
 int main(){
 	coord R,B;
 	string board[MAX];
 	cin>>col>>row;
 if (col < 3 || col>10 || row < 3 || row>10)

               exit(-1);
 	
 	for(int i=0; i<col; i++){
 		cin>>board[i];	
 		for(int j=0; j<row; j++){
 			
 			if(board[i][j]=='R')
 			{
 				R.y=i; R.x=j;
			 }
			else if(board[i][j]=='B')
			{
				B.y= i; B.x=j;	
			}
 			
		 }
	 }
	 
	 for(int i=0; i<4; i++){
	 	solve(board,i,0,R,B); // 보드,방향,cnt, 구슬위치 
	 }
	 
	 if(min_cnt==INF){
	 	cout<<-1<<endl;
	 }
	 else{
	 	cout<<min_cnt<<endl;
	 }
	 
	 return 0;
 }