#include<stdio.h>
int main(){
	FILE* taptin = NULL;
	int tuoi = 0;
	taptin = fopen("test.txt", "w");
	if(taptin != NULL){
		// Sau day chung ta se hoi toi
		printf("Ban bao nhieu tuoi ?");
		scanf("%d", &tuoi);
		// Ghi du lieu vao tep tin
		fprintf (taptin, "Nguoi dang su dung chiec may tinh nay %d tuoi", tuoi);
		fclose(taptin);
	}
	return 0;
}
