#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct patient
{
	char name[30];
	char disease[30];
	int age,phone,cabin;	
}x[100];

 typedef struct patient p;
 void read();
 void add();
 void view();
 void search();
 void edit();
 void del();
 void show();
 int n,i,j,sum =0,flag,num=0;
int main()
{	
	int c;	
   do	
	{
	
	printf("*******Welcome to Hospital  Management*******\n");
	printf("Enter your choice\n");
	printf("1.Add information\n");
	printf("2.View Information\n");
	printf("3.Search for an patient\n");
	printf("4.Edit Information\n");
	printf("5.Delete information\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			{
			
			add();
			}
		case 2 :
			{
			
				view();
			}
			case 3 :
			{
				search();
			}
		
		case 4 :
			{
			
			edit();
			}
		case 5 :
			{
			
			del();
			}
		default:
		exit(0);			
			
	}
	}while(c!=6);
	return 0;
}
void add()
{
	printf("\n\n");
	printf("Already Inputed on the database = %d \n",num);
	printf("How many entry do you want to add = \n");
	scanf("%d",&n);
	sum = n + num;
	for(i=num;i<sum;i++)
	{
		printf("\n");
		printf("Enter the patients Name =\n");
		scanf("%s",&x[i].name);
		printf("Enter Disease = \n");
		scanf("%s",&x[i].disease);
		printf("Enter the age = \n");
		scanf("%d",&x[i].age);
		printf("Enter cabin no =\n ");
		scanf("%d",&x[i].cabin);
		printf("Enter patients phone no \n");
		scanf("%d",&x[i].phone);
		printf("\n");
		i++;	
		num++;
	}
	
}
void view()
{
	for(i=0;i<num;i++)
	{
		printf("\n");
		printf("Serial Number is = %5d \n",i+1);
		printf("Name\n");
		puts(x[i].name);
		printf("disease\n");
		puts(x[i].disease);
		printf("Cabin no = %d\n Phone No. = %d\nAge =%d\n",x[i].cabin,x[i].phone,x[i].age);		
	}
	printf("\n");
}
void edit()
{
	int p,q;
	printf("What do you want to edit ?\n");
	printf("Enter you option\n");
	printf("1.Name\n2.disease\n3.Age\n4.Cabin5.Phone No.\n");
	printf("option =");
	scanf("%d",&q);
	if(p<=5)
	{
		printf("Enter the serial no of the patient =(0-%d)",num-1);
		scanf("%d",&p);
		if(q==1)
		{
			printf("Enter the new name");
			scanf("%s",&x[p].name);
		}
		else if(q==2)
		{
			printf("Enter the new disease");
			scanf("%s",&x[p].disease);
		}
		else if(q==3)
		{
			printf("Enter the new age");
			scanf("%s",&x[p].age);
		}
		else if(q==4)
		{
			printf("Enter the new cabin no");
			scanf("%s",&x[p].cabin);
		}
		else if(q==4)
		{
			printf("Enter the new phone");
			scanf("%s",&x[p].phone);
		}
		else
		{
			printf("\n\n Enter any valid no ");
		}
	}
}


void search()
{
	int s,h,f;
	int g;
	char u[100];
	printf("By what do you want to search ?\n");
	printf("1.Searial no \n 2. Name \n 3.Disease\n 4.Cabin no \n 5. Phone No. \n 6. Age \n Enter your option");
	scanf("%d",&h);
	 if ( h == 1 )  
    {  
        printf ( " Enter Serial number of the patient = " ) ;  
        scanf ( " % d " , & s ) ;  
        if ( s < num )  
        {  
            printf ( " \ n " ) ;  
            printf ( " Serial Number = % d \ n " , s ) ;  
            printf ( " Name = " ) ;  
            puts ( x [ s ].name ) ;  
            printf ( " Disease = " ) ;  
            puts ( x [ s ].disease ) ;  
            printf ( " Cabin no = % d \ n Phone number = 0 % d \ n Age = % d " , x [ s ].cabin , x [ s ].phone , x [ s ].age ) ;  
            printf ( " \ n \ n " ) ;  
        }  
        else  
            printf ( " \ n \ n Not Found \ n \ n " ) ;  
    }  
    else if ( h == 2 ) 
    {  
        int f = 1 ; 
		  printf ( " Enter your name = " ) ;  
        gets ( u ) ;  
        fflush ( stdin ) ;  
        int g;
        for ( g=0 ; g<num ; g ++ )  
        {  
            if ( strcmp ( u , x [ g ].name ) == 0 )  
            {  
                printf ( " \ n " ) ;  
                printf ( " Serial Number = % d \ n " , g ) ;  
                printf ( " Name = " ) ;  
                puts ( x [ g ].name ) ;  
                printf ( " Disease = " ) ;  
                puts ( x [ g ].disease ) ; 
                printf ( " Cabin no = % d \ n Phone number = 0 % d \ n Age = % d " , x [ g ].cabin , x [ g ].phone , x [ g ].age ) ;  
                 printf ( " \ n \ n " ) ;  
                f = 0 ;  
  
            }  
        }  
        if ( f == 1 )  
            printf ( " \ n Not Found \ n " ) ;  
    }  
    else if ( h  == 3 )  
    {  
        int f = 1 ;  
        fflush ( stdin ) ;  
        printf ( " Enter Disease = " ) ;  
        gets ( u ) ;  
        fflush ( stdin ) ;
		  
        for ( g = 0; g<num; g ++)  
        {  
            if ( strcmp ( u , x [ g ].disease ) == 0 )  
            {  
                printf ( " \ n " ) ;  
                printf ( " Serial Number = % d \ n " , g ) ;  
                printf ( " Name = " ) ;  
                puts ( x [ g ].name ) ;  
                printf ( " Disease = " ) ;  
                puts ( x [ g ].disease ) ; 
				 printf ( " Cabin no = % d \ n Phone number = 0 % d \ n Age = % d " , x [ g ].cabin , x [ g ].phone , x [ g ].age ) ; 
				 printf ( " \ n \ n " ) ;   
                f = 0 ;  
            }  
  
  
        }  
        if ( f == 1 )  
            printf ( " \ n Not Found \ n " ) ;  
  
  
    }  
    else if ( h == 4 )   
    {  
        int f = 1 ;  
        printf ( " Enter Cabin number = " ) ;  
        scanf ( " % d " , & f ) ;  
        for ( g =0 ; g<num ; g++)  
        {  
            if ( f == x [ g ].cabin )  
            {  
                printf ( " \ n " ) ;  
                printf ( " Serial Number = % d \ n " , g ) ;  
                printf ( " Name = " ) ;  
                puts ( x [ g ].name ) ;  
                printf ( " Disease = " ) ;   
                puts ( x [ g ].disease ) ;  
                printf ( " Cabin no = % d \ n Phone number = 0 % d \ n Age = % d " , x [ g ].cabin , x [ g ].phone , x [ g ].age ) ;  
                printf ( " \ n \ n " ) ;  
                f = 0 ;  
            }  
  
        }  
        if ( f == 1 )   
            printf ( " Not Found \ n \ n " ) ;  
  
    }  
    else if ( h == 5 )  
    {  
        int f = 1 ;  
        printf ( " Enter Phone number = " ) ;  
        scanf ( " % d " , & f ) ;  
        for ( g = 0 ; g < num ; g ++)  
        {  
            if ( f == x [ g ].phone )  
            {  
                printf ( " \ n " ) ;  
                printf ( " Serial Number = % d \ n " , g ) ;  
                printf ( " Name = " ) ;  
                puts ( x [ g ].name ) ;  
                printf ( " Disease = " ) ;  
                puts ( x [ g ].disease ) ;  
                printf ( " Cabin no = % d \ n Phone number  = 0 % d \ n Age = % d " , x [ g ].cabin , x [ g ].phone , x [ g ].age ) ;   
				  printf ( " \ n \ n " ) ;  
                f = 0 ;  
            }  
  
        }  
        if ( f == 1 )  
            printf ( " Not Found \ n \ n " ) ;  
  
    }  
    else  
    {
        printf ( " \ n \ n Invalid input \ n \ n " ) ;  
    }
} 

void del()
{
	int f,h;
	printf("Enter the serial number of the patients that you want to delete");
	scanf("%d",&f);
	if(f<num)
	{
		printf("What do you want ?\n ");
		printf ( "1.Remove the whole record \n 2.Remove Name \ n 3.Remove Disease \n4.Remove age \n 5.Remove Cabin \n 6.Remove phone number \n Option = " );
		scanf("%d",&h);
		if(h==1)
		{
			while(f<num)
			{
				strcpy ( x [f].name,x[f+1].name );  
                strcpy ( x [f].disease,x[f+1].disease);  
                x [f].age = x[f+1].age;  
                x [f].cabin = x [ f + 1 ].cabin ;  
                x [f].phone = x [f+1].phone ;  
                f++;
			}
			num--;
		}
		 else if ( h == 2 )  
        {  
            strcpy ( x [ f ].name , " Cleared " ) ;  
  
        }  
        else if ( h == 3 )  
        {  
            strcpy ( x [ f ].disease , " Cleared " ) ;  
        }  
        else if ( h == 4 )  
        {  
            x [ f ].age = 0 ;  
        }  
        else if ( h == 5 )  
        {  
            x [ f ].cabin = 0 ;  
        }  
        else if ( h == 6 )  
        {  
            x [ f ].phone = 0 ;  
        }  
  
    }  
    else 
	{ 
        printf ( " \ n \ n Invalid Serial number \ n " ) ;  
  	}    
}
