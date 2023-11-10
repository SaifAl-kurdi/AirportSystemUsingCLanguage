#include<stdio.h>
#include"foc_fa21.h"
#include<string.h>

int menu();			//menu decleration.
int destinations();		//destinations decleration.
int americaDestination();	//americaDestination decleration.
int europeDestination();	//europeDestination decleration.
int africaDestination();	//africaDestination decleration.
int back();			//back decleration.
int Employee();			//Employee decleration.
int getStatistcis();		//getStatistcis decleration.
int Checkname();		//Checkname decleration.
int back2();			//back2 decleration.

int main()	
{
	menu(); 			//menu calling.
	return 0;
}
int menu() 				//definition menu.
{
	int choose;
	printf("\n		**Welcome to international Queen Alia Airport**\n");
	printf("1.Passenger.\n2.Employee.\n3.Quit.\nSelect a choice>  ");
	scanf("%d",&choose);
	
	switch(choose) 
	{
		case 1:		 
		destinations();	//destinations calling.
		break;			 
		
		case 2:		 
		Employee();		//Employee calling.
		break;			 
		
		case 3:		 
		printf("Thanks for your visitors.\n");
		break;			 
	}

return 0;
}
int destinations()			//defention destinations.

{	
	int destination;
	printf("\nPassenger.\n\n");
	printf("1.America.\n2.Europe.\n3.Africa.\n4.back.\nWhere is your destination? ");
	scanf("%d",&destination);
	
	switch(destination)		 
		{
		case 1:		 
		americaDestination();//americaDestination calling.
		break;			 
		
		case 2:		  
		europeDestination();//europeDestination calling.
		break;			 
		
		case 3:		 
		africaDestination();//africaDestination calling.
		break;			 
		
		case 4:		 
		back();//back calling.
		break;			 
		}
	return 0;
}	
int back()//defention back.
{
	menu();//menu calling.
	return 0;	
}
int americaDestination()		//americaDestination defention.
{
	FILE *Amrica;			//Open a pointer.
	Amrica = fopen("Amrica.txt","a");	//Open Amerca.txt file.
	printf("\nAmerica.\n\n");
	char firstName[30];
	int visa;
	printf("Please enter your first name: ");
	scanf(" %s", firstName);
	fprintf(Amrica,"%s	",firstName);	
	printf("Your first name is %s.\n",firstName);
	printf("PLease give me a visa number: ");
	scanf("%d",&visa);
	fprintf(Amrica,"%d\n",visa);	
	if (12300 <= visa && visa < 12400)	//The condition If it is false, the condition does not work, but if true, the condition works.	
		{
			if(12350<=visa && visa<=12380)		
			{
			{printf("Please move to counter number Four.\n\n");}
			}
			else					
			{
			printf("Your visa number is not valied");
			}
			
		}
	
	else 					//if was condition false workes (else).
	{printf("Sorry! your visa needs to be validated please check that with the USA Embassy.\n\n");};
	fclose(Amrica);	//clsose America file and close file. 
	menu();		//menu claiing.

	return 0;
}
int europeDestination()	//definition europeDestination.
{
		FILE *Europe;	//Open a pointer.
		Europe = fopen("Europe.txt","a");	//Open Europe.txt file.
		int digits;
		printf("\nEurope.\n\n");
		printf("Please give me a number Schengen: " );
		scanf(" %d",&digits);
		fprintf(Europe,"%d\n",digits);	//print in the file .
		if(0<= digits && digits<10 )			
			{printf("Invalid Schengen Number.\n\n");}
		else if (10<= digits && digits < 100)		
			{printf("Germany, Window 10.\n\n");}
		else if (100<= digits && digits <=999)	
			{printf("Italy, Window 11.\n\n");}
		else if (1000<= digits && digits <= 9999)	
			{printf("Spain, Window 12.\n\n");}
		else if (10000<=digits)			
			{printf("Greece, Window 13.\n\n");}
		fclose(Europe);	//clsose Europe file and close file. 
	menu();		//menu claiing.
	return 0;
}
int africaDestination()	//definition africaDestination.
{
	printf("\nAfrica.\n\n");
	printf("Move to this location.\n");
	FILE *Africa;		//Open a pointer.
	Africa = fopen("Africa.txt","a");	//Open Africa.txt file.
	
	int img[200][400],Perc;
	//black image.
	for (int i=0;i < 200;i++)	
	for (int j=0;j < 400;j++)	
	img[i][j]=0;		//colur image.
	//Columes coordinate.
	for(int i=0;i < 200;i++)	
	for(int j=200;j <= 200;j++)	
	img[i][j]=255;		//colur columes.
	//Row coordinate.
	for(int i=100;i <= 100;i++)	
	for(int j=0;j < 400;j++)	
	img[i][j]=255;		//colur row.
	//Location.
	for(int i=40;i <= 60;i++)
	for(int j=290;j < 310;j++)	
	img[i][j]=255;		//colur location.
	
	showArray(200, 400, img); //Show image and colum and row and location.
	int num;
	fprintf(Africa,"%d.\n",num);
	fclose(Africa);	////clsose Africa file and close file.	
	menu();		//menu claiing.
	return 0;
}
int Employee()			//definition Employee.
{
	char password[6]= "admin"; 
	char pass[6];
	int choose;
	printf("\nPlease enter your password: ");
	scanf("%s", pass);	
	if (strcmp(password,pass) == 0) //Comparison between the password entered by the user and the word in the robot.
	{
		printf("\n1.get Statistcis.\n2.Check name.\n3.back.\nselect choice: ");
		scanf("%d",&choose);
		switch (choose){
		case 1:
		getStatistcis();	//getStatistcis calling.
		break;
		case 2:
		Checkname();		//Checkname calling.
		break;
		case 3:
		back2();		//back2 calling.
		break;
				}
	}
	else {
	printf("\nWrong password.\n");
	menu();	//menu claiing.
	}
			
	return 0;
}
int back2()		//definition back2.
{
	menu();	//menu claiing.
	return 0;
}
int getStatistcis()		//definition getStatistcis.
{
	printf("get Statistcis.\n");
	
	//I will have him tell me how many people he will travel on america.
	char name[6];
	int data;
	int theDigitA=0;
	FILE *ber;
	ber = fopen("Amrica.txt","r");		
	if (ber != NULL)
		{
		//I will make him read what is in the file, whether it is names or visas, and I will make him read all the lines. 
		while (fscanf(ber,"%s	%d",name,&data) != EOF)
		theDigitA++;
		}
	else {printf("Sorry this file is not here!");}
	printf("The number of travelers to America is %d.\n",theDigitA);
	fclose(ber);
	
	//I will have him tell me how many people he will travel on Europe.
	int schen[6];
	int theDigitE=0;
	FILE *per;
	per =fopen("Europe.txt","r");
	if (per != NULL)
		{
		while(fscanf(per,"%d",schen) != EOF)
		theDigitE++;
		}
	else {printf("Sorry this file is not here!");}
	printf("The number of travelers to Europe is %d. \n",theDigitE);
	fclose(per);
	
	//I will have him tell me how many people he will travel on Africa.
	double visitorsF[6];
	double theDigitF=0;
	FILE *perF;
	perF =fopen("Africa.txt","r");
	if (perF != NULL)
		{
		while(fscanf(perF,"%lf",visitorsF) != EOF)
		theDigitF++;
		}
	else {printf("Sorry this file is not here!");}
	printf("The number of travelers to Africa is %.1f. \n",theDigitF);
	fclose(perF);
	
	//It will collect the number of passengers traveling to all countries.
	double sum, A;
	sum = (theDigitA+theDigitE+theDigitF);
	printf("the sum = %.1f\n",sum);
	
	//The percentage of the number of travelers who will travel to America.
	A=(theDigitA/sum)*100;
	printf("%.1f\n",A);
	
	//The percentage of the number of travelers who will travel to Europe.
	double E;
	E = ((theDigitE/sum)*100);
	printf("%.1f\n",E);
	
	//The percentage of the number of travelers who will travel to Africa.
	double F;
	F = ((theDigitF/sum)*100);
	printf("%.1f\n",F);
	
	//White image.
	int img[200][600];
	for(int i=0;i < 200;i++){
	for(int j=0;j < 600;j++){
	img[i][j]=255;
	}
	}
	
	//The first column in which the percentage of the number of travelers to America.
	for(int i= 100 ; i < 200 ;i++){
	for(int j= 100 ; j < 120 ; j++){
	img[i][j]=0;
	}
	}
	for(int i=101;i < 199;i++){
	for(int j=101;j < 119;j++){
	img[i][j]=255;
		if(i<=200&&i>=200-A)
		{img[i][j]=0;}
	}
	}	
	
	
	//The first column in which the percentage of the number of travelers to Euorpe.
	for(int i= 100 ; i < 200 ;i++){
	for(int j= 280 ; j < 300 ; j++){
	img[i][j]=0;
	}
	}
	for(int i=101;i < 199;i++){
	for(int j=281;j < 299;j++){
	img[i][j]=255;
		if(i<=200&&i>=200-E)
		{img[i][j]=0;}
	}
	}
	
	
	//The first column in which the percentage of the number of travelers to Africa.
	for(int i= 100 ; i < 200 ;i++){
	for(int j= 480 ; j < 500 ; j++){
	img[i][j]=0;
	}
	}
	for(int i=101;i < 199;i++){
	for(int j=481;j < 499;j++){
	img[i][j]=255;
		if(i<=200&&i>=200-F)
		{img[i][j]=0;}
	}
	}
	
	//Show image.
	showArray(200, 600, img);
	
	menu();		//menu claiing.
	return 0;
}
int Checkname()		//definition Checkname.
{	
	char name[6],name2[6];
	int data,Name;
	printf("\nCheck name.\n\n");
	printf("Please enter a name to check it: ");
	scanf("%s", name);
	FILE *nm;//Open a pointer.
	nm = fopen("names.txt","r");//Open names.txt file.
	if(nm != NULL)
	{
		while (fscanf(nm,"%s %d",name2,&data) != EOF)
		{
			Name=strcmp(name2,name);	//Comparison between the name entered by the user and the name in the robot.
			
			if (Name==0&&data==1)
			{printf("This passenger (%s) can travel\n",name);}
			
			else if(Name==0&&data==0)
			{printf("This passenger (%s) cannot travel\n",name);}
			
		}
	}
	fclose(nm);//clsose names(nm) file and close file.
	menu();
	return 0;
}