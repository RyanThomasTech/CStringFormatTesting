#include <stdio.h>

#define TVPRICE 400.00
#define VCRPRICE 220.00
#define REMOTEPRICE 35.00
#define CDPRICE 300.00
#define RECORDERPRICE 150.00
#define TAXRATE 0.0625

int main(){
	int tvsSold, vcrsSold, remotesSold, cdsSold,recordersSold;
	float tvsTotal, vcrsTotal, remotesTotal, cdsTotal, recordersTotal,
	      subtotal, taxTotal, grandTotal;
	printf("How many TVs were sold?");
	scanf("%d",&tvsSold);
	tvsTotal = tvsSold*TVPRICE;
	printf("How many VCRS were sold?");
	scanf("%d", &vcrsSold);
	vcrsTotal=vcrsSold*VCRPRICE;
	printf("How many remote controllers were sold?");
	scanf("%d",&remotesSold);
	remotesTotal=remotesSold*REMOTEPRICE;
	printf("How many cds were sold?");
	scanf("%d",&cdsSold);
	cdsTotal = cdsSold*CDPRICE;
	printf("How many tape recorders were sold?");
	scanf("%d",&recordersSold);
	recordersTotal = recordersSold*RECORDERPRICE;
	subtotal = tvsTotal + vcrsTotal + remotesTotal + cdsTotal + recordersTotal;
	taxTotal = subtotal*TAXRATE;
	grandTotal = subtotal + taxTotal;

	printf("%-8s %-15s %-14s %-15s \n", "QTY", "DESCRIPTION", "UNITS","TOTAL PRICE");
	printf("%-8s %-15s %-14s %-15s \n", "---", "-----------", "-----","-----------");
	printf("%-8.2d %-15s %-14.2f %-15.2f \n", tvsSold, "TV", TVPRICE, tvsTotal);

	printf("%-8.2d %-15s %-14.2f %-15.2f \n", vcrsSold, "VCR", VCRPRICE, vcrsTotal);

	printf("%-8.2d %-15s %-14.2f %-15.2f \n", remotesSold, "REMOTE CTRLR", REMOTEPRICE, remotesTotal);

	printf("%-8.2d %-15s %-14.2f %-15.2f \n", cdsSold, "CD PLAYER", CDPRICE, cdsTotal);
	printf("%-8.2d %-15s %-14.2f %-15.2f \n", recordersSold, "TAPE RECORDER", RECORDERPRICE, recordersTotal);
	printf("%52s", "-----------\n");
	printf("%24s %-14s %.2f \n","","SUBTOTAL",subtotal);
	printf("%24s %-14s %.2f \n","","TAX",taxTotal);
	printf("%24s %-14s %.2f \n","","TOTAL",grandTotal);
	return 0;
}

