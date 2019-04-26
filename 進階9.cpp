#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
    int a, b,c;
    
    printf("請輸入一個日期：\n");
    scanf("%d%d",&a,&b);

    c = (a*2+b)%3;

        if(c == 0 ) {
			printf("今日的運勢：普通");
        }
        if(c == 1 ) {
			printf("今日的運勢：吉");
        }
        if(c == 2 ){
			printf("今日的運勢：大吉");
        }
        
	system("PAUSE");
	return 0; 
}
