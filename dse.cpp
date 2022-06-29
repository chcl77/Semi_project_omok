#include <stdio.h>
#include <Windows.h>
#include <conio.h>
//hehe
int step_x = 18, step_y = 9  ;
void omokpan(int s[][20]){
	for(int i = 0 ; i < 20 ; i++){
		for(int j = 0 ; j < 20 ; j ++){
			if(s[i][j] == 1) printf("┌ ");
			else if(s[i][j] == 0) printf("┬ ") ;
			else if(s[i][j] == 2) printf("┐ ");
			else if(s[i][j] == 3) printf("├ ");
			else if(s[i][j] == 4) printf("┼ ");
			else if(s[i][j] == 5) printf("┤ ");
			else if(s[i][j] == 6) printf("└ ") ;  
			else if(s[i][j] == 7) printf("┴ ") ; 
			else if(s[i][j] == 8) printf("┘ ") ;
			else if(s[i][j] == 15) printf("○") ; 
			else if(s[i][j] == 16) printf("●") ;
			if(j == 19 && i != 19) printf("\n") ; 
		}
		
	}
}


	
void CursorView()
{
    CONSOLE_CURSOR_INFO cursorInfo = { 0, };
    cursorInfo.dwSize = 1; 
    cursorInfo.bVisible = FALSE; 
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}


void gotoxy(int x, int y){
	COORD Pos ;
	Pos.X = x ;
	Pos.Y = y ;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos); 
}

void checker(){
	gotoxy(0, 22) ;
	printf("****************\n");
	printf("흑돌 차례입니다 \n");
	printf("****************\n");
}
void checker1(){
	gotoxy(0, 22) ;
	printf("****************\n");
	printf("백돌 차례입니다 \n");
	printf("****************\n");
}

int show_result(int e[][20]){
	int a ,b =2 ;
	
	gotoxy(50, 2) ;
	printf("***********************\n"); gotoxy(50, 3) ;
	printf("*                     *\n"); gotoxy(50, 4) ;
	printf("*                     *\n"); gotoxy(50, 5) ;
	printf("*  흑돌의 승리입니다  *\n"); gotoxy(50, 6) ;
	printf("*                     *\n"); gotoxy(50, 7) ;
	printf("*                     *\n"); gotoxy(50, 8) ;
	printf("*                     *\n"); gotoxy(50, 9) ;
	printf("*  >>   종료하기      *\n"); gotoxy(50, 10) ;
	printf("*                     *\n"); gotoxy(50, 11) ;
	printf("*                     *\n"); gotoxy(50, 12) ;
	printf("***********************\n"); gotoxy(0, 25) ;
	
//	while(1){
//		a = getch() ;
//		if(a == 224){
//			a = getch() ;
//			if(a == 72){
//				b = 2 ;
//				system("cls");
//				omokpan(e) ;
//				gotoxy(50, 2) ;
//	printf("***********************\n"); gotoxy(50, 3) ;
//	printf("*                     *\n"); gotoxy(50, 4) ;
//	printf("*                     *\n"); gotoxy(50, 5) ;
//	printf("*  흑돌의 승리입니다  *\n"); gotoxy(50, 6) ;
//	printf("*                     *\n"); gotoxy(50, 7) ;
//	printf("*                     *\n"); gotoxy(50, 8) ;
//	printf("*  >>   재시작        *\n"); gotoxy(50, 9) ;
//	printf("*                     *\n"); gotoxy(50, 10) ;
//	printf("*     메인 메뉴로     *\n"); gotoxy(50, 11) ;
//	printf("*                     *\n"); gotoxy(50, 12) ;
//	printf("***********************\n");
//			}
//			else if(a == 80){
//				b = 3 ;
//				system("cls");
//				omokpan(e) ;
//				gotoxy(50, 2) ;
//	printf("***********************\n"); gotoxy(50, 3) ;
//	printf("*                     *\n"); gotoxy(50, 4) ;
//	printf("*                     *\n"); gotoxy(50, 5) ;
//	printf("*  흑돌의 승리입니다  *\n"); gotoxy(50, 6) ;
//	printf("*                     *\n"); gotoxy(50, 7) ;
//	printf("*                     *\n"); gotoxy(50, 8) ;
//	printf("*       재시작        *\n"); gotoxy(50, 9) ;
//	printf("*                     *\n"); gotoxy(50, 10) ;
//	printf("* >>  메인 메뉴로     *\n"); gotoxy(50, 11) ;
//	printf("*                     *\n"); gotoxy(50, 12) ;
//	printf("***********************\n");
//			}
//		}
//		else if(a == 32){
//			return b ;
//			break ;
//		}
//	}
}

void show_result_1(){
		gotoxy(50, 2) ;
	printf("***********************\n"); gotoxy(50, 3) ;
	printf("*                     *\n"); gotoxy(50, 4) ;
	printf("*                     *\n"); gotoxy(50, 5) ;
	printf("*  백돌의 승리입니다  *\n"); gotoxy(50, 6) ;
	printf("*                     *\n"); gotoxy(50, 7) ;
	printf("*                     *\n"); gotoxy(50, 8) ;
	printf("*                     *\n"); gotoxy(50, 9) ;
	printf("*  >>   종료하기      *\n"); gotoxy(50, 10) ;
	printf("*                     *\n"); gotoxy(50, 11) ;
	printf("*                     *\n"); gotoxy(50, 12) ;
	printf("***********************\n"); gotoxy(0, 25) ;
}

int start_screen(){
	int a, b = 2 ;
	
	printf("********************** \n") ;
	printf("        오목\n") ;
	printf("**********************") ;
	printf("\n") ;
	printf("\n") ;
	
	printf("********************** \n") ;
	printf("*  >>   시작         *\n") ;
	printf("*                    *\n") ;
	printf("*     게임 방법      *\n") ;
	printf("**********************") ;
	while(1){
	
	a = getch() ;
	if(a == 224){
		a = getch() ;
		if(a == 72){
			system("cls");
			printf("********************** \n") ;
			printf("        오목\n") ;
			printf("**********************") ;
			printf("\n") ;
			printf("\n") ;
	
	printf("********************** \n") ;
	printf("*  >>   시작         *\n") ;
	printf("*                    *\n") ;
	printf("*     게임 방법      *\n") ;
	printf("**********************") ;
	b = 2 ;
		}
		else if(a == 80){
			system("cls");
			printf("********************** \n") ;
	printf("        오목\n") ;
	printf("**********************") ;
	printf("\n") ;
	printf("\n") ;
	
	printf("********************** \n") ;
	printf("*       시작         *\n") ;
	printf("*                    *\n") ;
	printf("*  >> 게임 방법      *\n") ;
	printf("**********************") ;
	b = 3 ;
		}
	}
	else if(a == 32){
		return b ;
		break ;
	}
}

	
	
 
//	printf("오목 \n ") ;
//	printf("┌ ");
//	for(int i = 0 ; i < 10 ; i++){
//		printf("─") ; 
//	}
//	printf("┐ \n");
//	for(int i = 0 ; i < 10 ; i++){
//		printf(" │") ; 
//		for(int j = 0 ; j < 10 ; j++){
//			printf(" ");
//		}
//		printf("│\n") ; 
//	}
//	printf("└ ") ;
//	for(int i = 0 ; i < 10 ; i++){
//		printf("─") ; 
//	}
//	printf("┘ ") ;
}

int show_method(){
	int a;
	system("cls");
	printf("***********************************************\n") ;
	printf("*  ↑ 위로 가기                               *\n");
	printf("*  ↓ 아래로 가기                             *\n");
	printf("*  ←왼쪽으로 가기                            *\n");
	printf("*  →오른쪽으로 가기                          *\n");
	printf("*  스페이스바 => 바둑돌 놓기                  *\n");
	printf("*  모든 돌의 이동은 방향키를 통해 조작합니다  *\n");
	printf("*  먼저 5개의 돌을 나란히 두면 승리합니다     *\n");
	printf("***********************************************\n") ;
	printf("\n") ; 
	printf("\n") ; 
	
	printf("*******************************\n") ;
	printf("나가시려면 스페이스바를 누르세요. \n") ;
	printf("*******************************\n") ;
	a = getch() ;
	if(a == 32){
		system("cls");
	} return 0 ;
}
void start(){
	int b ;
	while(1){
	
	b = start_screen() ;
	if(b == 3) show_method() ;
	if(b == 2){
		system("cls") ;
		break ;
		} 
	}
}
void moving(int a[][20]) {
		int move ;
		
		gotoxy(step_x, step_y);
		printf("○");
		while(1){
		
		checker() ;
		
		move = getch() ;
		
		if(move == 224) {
			
			move = getch() ;
			if(move == 72){
				if(step_y== 0 ){
					continue ;
				}
				step_y = step_y - 1 ;
//				if(a[step_y][step_x / 2] == 15 || a[step_y][step_x / 2] == 16  ){
//					step_y = step_y + 1 ;
//					continue ;
//
//				}
				system("cls") ;
				omokpan(a);
				gotoxy(step_x , step_y);
				printf("○");
		
			}
			else if(move == 80){
				if(step_y >= 19 ){
					continue ;
				}
				step_y = step_y + 1 ;
//				if(a[step_y][step_x / 2] == 15 || a[step_y][step_x / 2] == 16  ){
//					step_y = step_y - 1 ;
//					continue ;
//
//				}
				system("cls") ;
				omokpan(a);
				gotoxy(step_x , step_y);
				printf("○");
			}
				else if(move == 75){
				if(step_x <= 0 ){
					continue ;
				}
				step_x = step_x - 2 ;
//				if(a[step_y][step_x / 2] == 15 || a[step_y][step_x / 2] == 16  ){
//					step_x = step_x + 2 ;
//					continue ;
//
//				}
				system("cls") ;
				omokpan(a);
				gotoxy(step_x , step_y);
				printf("○");
			}
				else if(move == 77){
				if(step_x >= 38 ){
					continue ;
				}
				step_x = step_x + 2 ;
//				if(a[step_y][step_x / 2] == 15 || a[step_y][step_x / 2] == 16  ){
//					step_x = step_x - 2 ;
//					continue ;
//
//				}
				system("cls") ;
				omokpan(a);
				gotoxy(step_x , step_y);
				printf("○");
			}
	}
	else if(move == 32){
		// 0 ~ 38                 0 ~ 20
		int t_x, t_y ;
		t_x = step_x / 2 ;
		t_y = step_y ;
		if(a[t_y][t_x] == 15 || a[t_y][t_x] == 16){
			continue ;
		}
		a[t_y][t_x] = 15 ;
		system("cls") ;
		omokpan(a) ;
		  
		break ;
	}
			
		}
}

moving1(int a[][20]){
	int move ;
	gotoxy(step_x, step_y);
	printf("●");
		while(1){
		int c = 0 , se = 1 ;
		checker1() ;
		move = getch() ;
		
		if(move == 224) {
			
			move = getch() ;
			if(move == 72){                   // up
				if(step_y== 0 ){
					continue ;
				}
				
				step_y = step_y - 1 ;
//				if(a[step_y][step_x / 2] == 15 || a[step_y][step_x / 2] == 16  ){
//					step_y = step_y + 1 ;
//					continue ;
//
//				}

				system("cls") ;
				omokpan(a);
				gotoxy(step_x , step_y);
				printf("●");
		
			}
			else if(move == 80){               //down
				if(step_y >= 19 ){
					continue ;
				}
				step_y = step_y + 1 ;
//				if(a[step_y][step_x / 2] == 15 || a[step_y][step_x / 2] == 16  ){
//					step_y = step_y - 1 ;
//					continue ;
//
//				}
				
				system("cls") ;
				omokpan(a);
				gotoxy(step_x , step_y);
				printf("●");
			}
				else if(move == 75){                // left
				if(step_x <= 0 ){
					continue ;
				}
				step_x = step_x - 2 ;
//				if(a[step_y][step_x / 2] == 15 || a[step_y][step_x / 2] == 16  ){
//					step_x = step_x + 2 ;
//					continue ;
//
//				}
				system("cls") ;
				omokpan(a);
				gotoxy(step_x , step_y);
				printf("●");
			}
				else if(move == 77){                   //right
				if(step_x >= 38 ){
					continue ;
				}
				step_x = step_x + 2 ;
//				if(a[step_y][step_x / 2] == 15 || a[step_y][step_x / 2] == 16  ){
//					step_x = step_x - 2 ;
//					continue ;
//
//				}
				system("cls") ;
				omokpan(a);
				gotoxy(step_x , step_y);
				printf("●");
			}
	}
	else if (move == 114 || move == 82){
		
		
		system("cls") ;
		omokpan(a);
		step_x = 0 ;
		step_y = 0 ;
		gotoxy(step_x, step_y) ;
		printf("●");
		 
		continue ;
	}
	else if(move == 32){
		int t_x, t_y ;
		t_x = step_x / 2 ;
		t_y = step_y ;
		if(a[t_y][t_x] == 15 || a[t_y][t_x] == 16){
			continue ;
		}
		a[t_y][t_x] = 16 ;
		system("cls") ;
		omokpan(a) ;
		
		  
		break ;
	}
			
		}
}



void mover(int a[][20]){                                  // 랜덤위치 
	int xs = step_x / 2 , ys = step_y ;
	for(int i = 1 ; i <= 20 ; i ++){
		if(a[ys][xs + i] != 15 &&  a[ys][xs + i] != 16 && step_x < 38  ){
//			gotoxy(step_x + 2 * i , ys);
			step_x = step_x + 2 * i ;
			break ;
		}
		else if( a[ys][xs - i] != 15 &&  a[ys][xs - i] != 16 && step_x > 0){
//			gotoxy(step_x - 2 * i , ys);
			step_x = step_x - 2 * i ;
			break ;
		}
		else if(a[ys - i][xs] != 15 &&  a[ys - i][xs] != 16 && step_y != 0){
//			gotoxy(step_x , ys - i);
			step_y = step_y -  i ;
			break ;
		}
		else if(a[ys + i][xs] != 15 &&  a[ys + i][xs] != 16 && step_y < 19){
			step_y = step_y +  i ;
//			gotoxy(step_x , ys + i);
			break ;
		}
		
		
	}
}

int discriminate(int s[][20]) {
	for(int i = 0 ; i  < 20 ; i++){
		for(int j = 0 ; j < 20 ; j++ ){
			if(s[i][j] == 15 && s[i][j + 1] == 15 && s[i][j + 2] == 15 && s[i][j + 3] == 15 && s[i][j + 4] == 15 ){
			
				
				
				return 1 ;
			}
			else if(s[i][j] == 16 && s[i][j + 1] == 16 && s[i][j + 2] == 16 && s[i][j + 3] == 16 && s[i][j + 4] == 16 ){
				
				return 0 ;
			}
			else if(s[i][j] == 15 && s[i + 1][j] == 15 && s[i + 2][j] == 15 && s[i + 3][j] == 15 && s[i + 4][j] == 15 ){
				
				return 1 ;
			}
			else if(s[i][j] == 16 && s[i + 1][j] == 16 && s[i + 2][j] == 16 && s[i + 3][j] == 16 && s[i + 4][j] == 16 ){
				
				return 0 ;
			}
			else if(s[i][j] == 15 && s[i + 1][j + 1] == 15 && s[i + 2][j + 2] == 15 && s[i + 3][j + 3] == 15 && s[i + 4][j + 4] == 15 ){
				
				return 1 ;
			}
			else if(s[i][j] == 16 && s[i + 1][j + 1] == 16 && s[i + 2][j + 2] == 16 && s[i + 3][j + 3] == 16 && s[i + 4][j + 4] == 16 ){
				
				return 0 ;
			}
			else if(s[i][j] == 15 && s[i - 1][j + 1] == 15 && s[i - 2 ][j + 2] == 15 && s[i - 3 ][j + 3] == 15 && s[i - 4][j + 4] == 15 ){
				
				return 1 ;
			}
			else if(s[i][j] == 16 && s[i - 1][j + 1] == 16 && s[i - 2 ][j + 2] == 16 && s[i - 3 ][j + 3] == 16 && s[i - 4][j + 4] == 16 ){
				
				return 0 ;
			}
			
			
			
			
			
			
			
			
			
		}
	}
	
}


int main(){
	int b , c ;
	int a[20][20] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2 ,
	                 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5 ,
					 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8} ;

	CursorView() ;
//	                        
	start() ;
	omokpan(a);
	gotoxy(step_x , step_y);
	printf("○");
	
	while(1){
		
		
		moving(a) ;
		b = discriminate(a) ;
		if(b == 1){
			show_result(a);
			return 0 ;
		} 
		else if(b == 0){
			show_result_1();	
			return 0 ;
		} 
		mover(a) ; 
		
		moving1(a) ;
		b = discriminate(a) ;
		if(b == 1){
			show_result(a);
			return 0 ;
		} 
		else if(b == 0){
			show_result_1();	
			return 0 ;
		}
		mover(a) ;
	}

		
}
	

