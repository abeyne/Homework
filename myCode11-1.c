
#include <stdio.h>

// 閏年を判別するし、閏年なら1を返す関数
int isLeapYear(int year) {
  if (year % 4 == 0) {
	  if (year % 100 == 0) {
		  if (year % 400 == 0) {
			  return 1;
		  }
		  else {
			  return 0;
		  }
	  }
	  else {
		  return 1;
	  }
  }
  else {
	  return 0;
  }

}




int main(void) {
  int year;
  printf("西暦を入力してください\n");
  scanf_s("%d", &year);
  int k = isLeapYear(year);
if (k == 1) {
	  printf("閏年です\n");
  }
  else {
	  printf("閏年ではありません\n");
  }

  return 0;
}
