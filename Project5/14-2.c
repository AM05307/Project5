#include <stdio.h>
int main() {
	FILE *out;    //--> 파일의 구조체 변수
		int i, c;
	char temp[80];  //--->입력 문자열을 저장하는 변수
		fopen_s(&out,"test.txt", "w");  //------->파일을 오픈하여 쓰기 모드 지정
		printf("입력문자열: \n");
	fflush(stdout);  //  ------------> 버퍼를 클리어
		gets(temp);    //------------->문자열을 입력
		for (i = 0; temp[i]; i++) //--------------->문자열을 문자 배열로  전환
			fputc(temp[i], out);    //----------------> 파일에 한문자씩 출력
			fclose(out);                   //    ------> 파일의 객체를 닫음
			fopen_s(&out,"test.txt", "r");//->파일 오픈하여 읽기 모드 지정
			while ((c = fgetc(out)) != EOF) {
				//----------> 파일의 마지막 까지  한문자씩  읽어 들임
					putchar(c);            //      --------------> 화면에 출력
			}
	fclose(out);                //   ------------->파일의 객체를 닫음
		return 0;
}