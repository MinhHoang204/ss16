#include<stdio.h>
int main(){
	FILE* taptin = NULL;
	int kytuHientai = 0;
	taptin = fopen("test.txt", "r");
	if (taptin != NULL){
		// Vong lap lan luot doc tung ki tu
		do{
			kytuHientai = fgetc(taptin); // Doc ki tu
			printf("%c", kytuHientai); // In ki tu do ra man hinh
		} 
		while (kituHientai != EOF); // fgetc tiep tuc duoc goi lai vi bien kituHientai khac EOF
		fclose(taptin);
	}
	return 0;
}
