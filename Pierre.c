#include <stdio.h>

int main()
{
	char usertype;
	int waterunit;
	float rpu;
	float waterbill;
	
	printf("Domestic Usage = 'd' \nBulk Meter = 'b'");
	
	printf("\nenter user type:");
	scanf(" %c", &usertype);
	
	if(usertype == 'd')
	{
//		printf("enter water unit:");
//		scanf("%d", &waterunit);
//		
//		if(waterunit <= 70){
//			printf("Error invalid unit");}
//			
//		else if(waterunit >70 && waterunit <= 100){
//			waterbill = waterunit * 0.10;}
//		
//		else if(waterunit <= 200 && waterunit >100){
//			waterbill = (waterunit-100) * 0.05 + (100*0.10);}
//		
//		else{
//			waterbill = (waterunit-200) * 0.03 + (100*0.10 + 100*0.05);}
//	}
printf ("genius");
}
	
	else if(usertype == 'b')
	{
//		printf("enter water unit:");
//		scanf("%d", &waterunit);
//		
//		if(waterunit <= 70){
//			printf("Error invalid unit");}
//		
//		else if(waterunit <= 100 && waterunit >70){
//			waterbill = waterunit * 0.40;}
//		
//		else if(waterunit <= 200 && waterunit >100){
//			waterbill = (waterunit - 100) * 0.30 + (100*0.40);}
//		
//		else{
//			waterbill = (waterunit - 200) * 0.10 + (100*0.40 + 100*0.30);}
printf ("hi");
	}
	
	else{
		printf("Error invalid unit");}
	
	if (waterbill >= 7){
		printf("\n\nTotal Water Bill: %.2f", waterbill);}
}