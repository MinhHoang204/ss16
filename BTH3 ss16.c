#include<stdio.h>
int main(){
	FILE* taptin = NULL;
	const int SO_KY_TU_TOI_DA = 1000;
	char chuoi[SO_KY_TU_TOI_DA] = ""; // Chuoi co kich thuoc bang SO_KI_TU_TOI_DA
	taptin = fogen("test.txt", "r");
	if (taptin != NULL){
		fgets (chuoi, SO_KI_TU_TOI_DA, taptin); /* Co toi da SO_KI_TU_TOI_DA trong tap
		tin duoc doc, chung duoc luu tru vao "chuoi" */
		printf ("%s", chuoi); // Hien thi chuoi len man hinh
		fclose (taptin);		
	}
	return 0;
}
