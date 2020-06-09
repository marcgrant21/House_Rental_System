#include<stdio.h>
//#include<ncurses.h>
#include<iostream>
#include<string.h>


struct RENTALS
{
	
	int         choice;
	int         option;
	int            tel;  
	int            age;
	char       a,b,c,d;
	char           End; 
    char  tempName[20];
	char firstname[15];
	char  lastname[20];
		
};


void choice1(RENTALS []);
void choice2(RENTALS []);
void choice3(RENTALS []);
void choice4(RENTALS []);
void choice5(RENTALS []);
void choice6(RENTALS []);

void welcomesreen(void);
void welcomescreen(void)
{
	
	printf("******************************************************************************\n");
	printf("******************************************************************************\n");
	printf("*                                Welcome to                                  *\n");
	printf("\n**                                the                                       **\n");
	printf("\n*                      Springfield's House Rental                            *\n");
	printf("\n**                           Easy go service                                **\n");
	printf("\n*                                                                            *\n"); 
	printf("\n**                                                                          **\n");
	printf("\n*                                                                            *\n");
	printf("\n**                                                                          **\n");
	printf("******************************************************************************\n");
	printf("******************************************************************************\n");
	
printf("\n\n\n\n");
    system("pause");
	system("CLS");
	
	
	
}

int startmenu(void);
int startmenu(void)
{


int choice;
	system("cls");
	printf("\n******************************OPTIONS*****************************************\n");
	printf("\n 1. Enter customer's information\n");
	printf("\n 2. Rental Prices\n");	 
	printf("\n 3. Payment Plans\n");
	printf("\n 4. internet and cable services\n"); 
	printf("\n 5. 24 hours Security\n");
	printf("\n 6. End.\n");
	
	printf("\n\n Enter number to make a choice:\t");
	scanf("%d",&choice);
return choice;	
}



struct Room
{
int id;
char description [50];
float cost;

};



struct Payments
{
int id;
char description [50];
float cost;

};



struct internetandcable
{
int id;
char description [50];
float cost;

};



struct secure
{
int id;
char description [50];
float cost;

};



int main()
{
	int          count;    // for array locations
	int         choice;	
	int         option;
	char        address[50];
	int            tel;  
	int            age;
	char  description[50];
	char       a,b,c,d;
	char checkpassword (char[]); //function header or prototype
	char           End; 
    	char  tempName[20];
	char firstname[15];
	char  lastname[20];
	
	struct  Room Roomlisting[10];

	
	Roomlisting [0].id =1001;
	strcpy(Roomlisting[0].description,"1 Bedroom, Kitchen and Bathroom"); 
	Roomlisting[0].cost= 10000;


	
	Roomlisting [1].id =1002;
	strcpy(Roomlisting[1].description,"1 Bedroom,Kitchen,Bathroom and Living room "); 
	Roomlisting[1].cost=14000 ;


	
	Roomlisting [2].id =1003;
	strcpy(Roomlisting[2].description,"2 Bedrooms,Kitchen,Bathroom and Living room"); 
	Roomlisting[2].cost= 20000;

 
	
	Roomlisting [3].id =1004;
	strcpy(Roomlisting[3].description,"2 Bedrooms,2 Bathrooms,Kitchen and Living room"); 
	Roomlisting[3].cost= 25000;
	

struct Payments Weeklypayments[14];
	
    Weeklypayments[0].id=1001;
    strcpy(Weeklypayments[0].description,"1 Bedroom, Kitchen and Bathroom");
    Weeklypayments[0].cost= 2500;
    
    Weeklypayments[1].id=1002;
    strcpy(Weeklypayments[1].description,"1 Bedroom,Kitchen,Bathroom and Living room ");
    Weeklypayments[1].cost= 3500;
	
    Weeklypayments[2].id=1003;
    strcpy(Weeklypayments[2].description,"2 Bedrooms,Kitchen,Bathroom and Living room");
    Weeklypayments[2].cost= 5000;
    

    Weeklypayments[3].id=1004;
    strcpy(Weeklypayments[3].description,"2 Bedrooms,2 Bathrooms,Kitchen and Living room");
    Weeklypayments[3].cost= 6250;


struct internetandcable fees[10];
    
    fees[0].id=1001;
    strcpy(fees[0].description,"internet only");
    fees[0].cost= 3500;
    
    fees[1].id=1002;
    strcpy(fees[1].description,"Cable only");
    fees[1].cost= 2700;
	
    fees[2].id=1003;
    strcpy(fees[2].description,"Both internet and cable");
    fees[2].cost= 6200;
    
     
struct secure security[10];
    
    security[0].id=1001;
    strcpy(security[0].description,"24 hours security cameras");
    security[0].cost= 4500;
    
    security[1].id=1002;
    strcpy(security[1].description,"Sensors");
    security[1].cost= 2500;
    
	security[2].id=1003;
    strcpy(security[2].description,"Alarms");
    security[2].cost= 3000;
    
    




welcomescreen();
choice = startmenu();
	

	
	
	

	
	while(choice!=6)
{
		
   if ( choice==1)
	
		{
			
	
	     system("CLS");
		
	     printf("----[CHOICE #1]----");
		 
		 char password[15];
        
        printf("\n Please enter user password;\n");
        scanf("%s", password);
        
        if (checkpassword(password) == 'T')
        {
        	printf("\n Access Granted.");
        
        	
         printf("\n\n Please enter the firstname:\t");
	     scanf("%s",&firstname);
	
         printf("\n\n Please enter lastname:\t");
         scanf("%s",&lastname);
    
         printf("\n\n Please enter age:\t");
         scanf("%d",&age);
         
         printf("\n\n Please enter address:\t");
         scanf("%s",&address);
         
         printf("\n\n Please enter tel:\t");
         scanf("%s",&tel);
         
         
         
    
	    firstname[0] = toupper(firstname[0]);
         lastname[0] = toupper(lastname[0]);//let us make all letters after the first in the lastname lowercase
     
		
	     printf("\n\n**The firstname is  %s\n", firstname);
	     printf("\n**The lastname is %s \n \t", lastname);
	     printf("\n**The age is %d\n", age);
	      printf("\n**The address is %s\n", address);
	
	
	
	
	     printf("\n\n\n Welcome to Springfield's Rental Company  \t%s %s\n", firstname, lastname);
        	
		}
		else
		{
			printf("\n Access Denied.");
			
		}		 
		 	

		
		
		
	    }	
	
	
	
		if ( choice==2)
	{
		
	
	system("CLS");
		
	printf("----[CHOICE #2]----");
		
		
		printf("\n ******************************House Rental Options*****************************");
		
		printf("\n\t\t\tAll are avaliable for weekly payments");
		
		printf("\n\n 1. Room rentals:\n");
		
		 for(count=0; count<4; count++)
		 {
		 
	       printf("\n\n%d %s $%0.2f", Roomlisting[count].id,Roomlisting[count].description,Roomlisting[count].cost  );    
	   
	
	    }
		             printf("\n\n\t\t\tAll are avaliable for weekly payments\n");
		             
		             
						
	}// end if;
	
	
	
	
	if ( choice==3)
		{
		
      	system("CLS");
		
    	printf("----[CHOICE #3]----");
			
			
			printf("\n\n\n 1. Weekly Payments\n");
			
	
		 for(count=0; count<4; count++)
		 {
		 
	       printf("\n\n%d %s $%0.2f", Weeklypayments[count].id,Weeklypayments[count].description,Weeklypayments[count].cost  );    
	   
	
	    }	
		
	
	                 

        }// end if	
        
	
		if (choice==4)
	{
		
	
	system("CLS");
		
	printf("----[CHOICE #4]----");
		
		
		
		printf("\n ************************Internet and cable Options*****************************");
		
	for(count=0; count<3; count++)
		 {
		 
	       printf("\n\n\n\n%d %s $%0.2f", fees[count].id,fees[count].description,fees[count].cost  );    
	   
	
	    }	
						
				
	}// end if
	
	
	
		if(choice==5)
	{
		
	
	system("CLS");
		
	printf("----[CHOICE #5]----");
		
		
		
		printf("\n ******************************Security Options*****************************");
		
	for(count=0; count<3; count++)
		 {
		 
	       printf("\n\n\n\n%d %s $%0.2f", security[count].id,security[count].description,security[count].cost  );    
	   
	
	    }	
				
				
				
				
	}// end if
	
	
	
void choice6(RENTALS []);
{
	if (choice6)
	{
		
		printf(" Ending program....");
		
	    printf("\n\n\n");   // prints 3 blank lines
    system("pause");    // pauses program execution
    system("cls");      // clears the screen
		
		
		
	}// end if	
}

	printf("\n\n\n");   // prints 3 blank lines
    
   choice = startmenu();
	
}// end while	

	getchar ();
	return 0;
	
	
}





char checkpassword (char p[])
{
	if ( strcmp (p,"password")==0)
	 return 'T';
   else
	 return 'F';	
	
}




