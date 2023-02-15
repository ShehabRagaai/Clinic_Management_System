#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct data
	{
	char firstName[25];
	char lastName[25];
	char Gender[25];
	int age;
	int ID;
	int Reserve;
	struct data *ptr;
	}record;
	
	int flag=0;
	int C1=0;
    int counter11=0;
	int counter12=0;
	int counter13=0;
	int counter14=0;
	
	int counter21=0;
	int counter22=0;
	int counter23=0;
	int counter24=0;
	
	int counter31=0;
	int counter32=0;
	int counter33=0;
	int counter34=0;
	
	int counter41=0;
	int counter42=0;
	int counter43=0;
	int counter44=0;

	int counter51=0;
	int counter52=0;
	int counter53=0;
	int counter54=0;
	
	int counter61=0;
	int counter62=0;
	int counter63=0;
	int counter64=0;
	
	int counter71=0;
	int counter72=0;
	int counter73=0;
	int counter74=0;
	
	int counter81=0;
	int counter82=0;
	int counter83=0;
	int counter84=0;
	
	int counter91=0;
	int counter92=0;
	int counter93=0;
	int counter94=0;
	
	int counter101=0;
	int counter102=0;
	int counter103=0;
	int counter104=0;
	int counter105=0;
	
	
record*pointer=NULL;

void Add(void);
void Edit(void);
void Reserve(void);
void Display(void);
void Data(void);
void Delete(void);




	
void main(void)
{

    char mode[5];
	char password[4];
	int flag=0;
	

 
	while(1)
	{		
	
	printf("please choose admin or user mode:");
	
	scanf("%s",&mode);
	
	
	
		if(strcmp(mode,"admin")==0||strcmp(mode,"Admin")==0)
		{
		        printf("please enter your passward:");
		        scanf("%s",&password);
				
				for (int i=0;i<3;i++)
				{
					
					if (strcmp(password,"1234")==0)
					{
						flag=1;
						break;
					}
					if(i!=2)
					{
					printf("please try again:");
		            scanf("%s",&password);
					}
					
				}
				if(flag==0)
				{
				printf("you have exceeds your trials\n");
				continue;
				}
				
			
				else
				{
					while(1)
					{
					int feature;
					printf("If you want Add new patiant record feature press 1\n");
					printf("If you want to Edit patiant informaion feature press 2\n");
					printf("If you want to reservation feature press 3\n");
					printf("If you want to delete reservation feature press 4\n");
					printf("If you want to return back press 5\n");
					
					
					
					printf("please choose your wanted feature:");
					scanf("%d",&feature);
					switch(feature)
					{
						case 1: Add(); break;
						case 2: Edit(); break;
						case 3: Reserve(); break;
						case 4: Delete(); break;
						
						
					}
					if (feature==5)
					{
						break;
					}
					
				    }
				}
				
		}	
				
				
		else if (strcmp(mode,"user")==0||strcmp(mode,"User")==0)
		{
			int option;
			printf("if you want to dispaly patiant basic informaion press 1\n");
			printf("if you want to display reservation of day with ID press 2\n");
			printf("choose your wanted feature:");
			scanf("%d",&option);
			switch(option)
			{
				case 1: Display(); break;
				case 2 : Data(); break;
				
				
			}
		}
		else
		{
			printf("incorect mode\n"); 
		}
		
	
	
	

	}
}


void Add(void)
{
	
  record*temp;
  
  
  record*ptr1=(record*)malloc(sizeof(record));
  ptr1->ptr=NULL;
  ptr1->Reserve=0;
  
  if(pointer==NULL)
  {
	pointer=ptr1;
  }
  else
  {
	temp=pointer;
	while(temp->ptr!=NULL)
	{
		
		temp=temp->ptr;
	}
	temp->ptr=ptr1;
  }
  
    printf("please enter first Name:");
    scanf("%s",&(ptr1->firstName));
	printf("please enter last Name:");
    scanf("%s",(ptr1->lastName));
	printf("please enter Gender:");
    scanf("%s",&(ptr1->Gender));
	while(strcmp(ptr1->Gender,"male")!=0&&strcmp(ptr1->Gender,"female")!=0)
	{
		printf("please enter Gender again either male or female:");
        scanf("%s",&(ptr1->Gender));
	}
	
	
	printf("please enter age:");
    scanf("%d",&(ptr1->age));
	printf("please enter ID:");
    scanf("%d",&(ptr1->ID));
	
	
	if(pointer==NULL)
	{
		
		
	}
	else
	{
		
		temp=pointer;
		
			
		
		while(temp->ptr!=NULL)
		{
			if(temp->ID==ptr1->ID)
			{
				printf("This is ID already exist please try again:");
				scanf("%d",&(ptr1->ID));
				temp=pointer;
				
			}
			
			else
			{
				temp=temp->ptr;
			}
		}
		
		
		
		
	}
	
	
	
	
}


void Edit(void)
{
	int patiant_ID;
	int counter=0;
	printf("please enter patiant ID:"); 
	scanf("%d",&patiant_ID);
	record*temp;
	record*temp1;
	temp=pointer;
	while(temp!=NULL)
	{
		if(temp->ID==patiant_ID)
		{
			printf("The patiant first Name:%s\n",temp->firstName);
		    printf("The patiant last Name:%s\n",temp->lastName);
		    printf("The patiant Gender:%s\n",temp->Gender);
			printf("The patiant age:%d\n",temp->age);
			printf("The patiant ID:%d\n",temp->ID);




			printf("please enter first Name:");
            scanf("%s",&(temp->firstName));
	        printf("please enter last Name:");
            scanf("%s",(temp->lastName));
	        printf("please enter Gender:");
            scanf("%s",&(temp->Gender));
		    while(strcmp(temp->Gender,"male")!=0&&strcmp(temp->Gender,"female")!=0)
	{
		printf("please enter Gender again either male or female:");
        scanf("%s",&(temp->Gender));
	}
	        printf("please enter age:");
            scanf("%d",&(temp->age));
			printf("please enter ID:");
            scanf("%d",&(temp->ID));
			temp1=pointer;
			
			while(temp1->ptr!=NULL)
			{
			if(temp->ID==temp1->ID)
			{
				printf("this ID is already exist try again:");
				scanf("%d",&(temp->ID));
				temp1=pointer;
			}
			else
			{
				temp1=temp1->ptr;
			}
			}
			
			counter=1;
			break;
			
		}  
		temp=temp->ptr;
		
	  
	
	}
	
	if (counter==0)
	{
		printf("Incorect patiant ID\n");
	}
	
	
	

}


void Reserve(void)
{
	record*temp;
	record*temp1;
	int patiant_ID;
	int counter=0;
	if(flag==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	
	else if(flag==1)
	{
	if(counter11==0&&counter12==0&&counter13==0&&counter14==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter11==0&&counter12==0&&counter13==0&&counter14==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO chosse  2:30pm to 3pm press 2\n");
		printf("To chosse 3pm to 3:30pm press 3\n");
		printf("To chosse 4pm to 4:30pm press 4\n");
		
		
	}
	 else if(counter11==0&&counter12==0&&counter13==1&&counter14==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30pm to 3pm press 2\n");
		printf("To chosse 3pm to 3:30pm press 3\n");
		printf("To chosse 4:30pm to 5pm press 5\n");
	}
	else if(counter11==0&&counter12==0&&counter13==1&&counter14==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2:30pm to 3pm press 2\n");
		printf("To choose 3pm to 3:30pm press 3\n");
		
	}
	else if(counter11==0&&counter12==1&&counter13==0&&counter14==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2:30 pm to 3 pm press 2\n");
		printf("TO choose 4 pm to 4:30 pm press 4\n");
		printf("TO choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter11==0&&counter12==1&&counter13==0&&counter14==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2:30 pm to 3 pm press 2\n");
		printf("To choose  4 pm to 4:30 pm press 4\n");
		
	}
	else if(counter11==0&&counter12==1&&counter13==1&&counter14==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2:30pm to 3pm press 2\n");
		printf("To choose 4:30pm to 5pm press 5\n");
	}
	else if(counter11==0&&counter12==1&&counter13==1&&counter14==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2:30pm to 3pm press 2\n");

	}
	else if(counter11==1&&counter12==0&&counter13==0&&counter14==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter11==1&&counter12==0&&counter13==0&&counter14==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
	}
	else if(counter11==1&&counter12==0&&counter13==1&&counter14==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");

	}
	else if(counter11==1&&counter12==0&&counter13==1&&counter14==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
	}
	else if(counter11==1&&counter12==1&&counter13==0&&counter14==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter11==1&&counter12==1&&counter13==0&&counter14==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
	}
	else if(counter11==1&&counter12==1&&counter13==1&&counter14==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter11==1&&counter12==1&&counter13==1&&counter14==1)
	{
		printf("No available slots :\n");
		C1=1;
		
	}
	}
	
	else if(flag==2)
	{
	if(counter21==0&&counter22==0&&counter23==0&&counter24==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter21==0&&counter22==0&&counter23==0&&counter24==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO chosse  2 pm to 2:30 pm press 1\n");
		printf("To chosse 3pm to 3:30 pm press 3\n");
		printf("To chosse 4pm to 4:30 pm press 4\n");
		
		
	}
	 else if(counter21==0&&counter22==0&&counter23==1&&counter24==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 3pm to 3:30pm press 3\n");
		printf("To chosse 4:30pm to 5pm press 5\n");
	}
	else if(counter21==0&&counter22==0&&counter23==1&&counter24==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To choose 3pm to 3:30pm press 3\n");
		
	}
	else if(counter21==0&&counter22==1&&counter23==0&&counter24==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2 pm to 2:30 pm press 1\n");
		printf("TO choose 4 pm to 4:30 pm press 4\n");
		printf("TO choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter21==0&&counter22==1&&counter23==0&&counter24==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2 pm to 2:30 pm press 1\n");
		printf("To choose  4 pm to 4:30 pm press 4\n");
		
	}
	else if(counter21==0&&counter22==1&&counter23==1&&counter24==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To choose 4:30pm to 5pm press 5\n");
	}
	else if(counter21==0&&counter22==1&&counter23==1&&counter24==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");

	}
	else if(counter21==1&&counter22==0&&counter23==0&&counter24==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter21==1&&counter22==0&&counter23==0&&counter24==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
	}
	else if(counter21==1&&counter22==0&&counter23==1&&counter24==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");

	}
	else if(counter21==1&&counter22==0&&counter13==1&&counter14==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
	}
	else if(counter21==1&&counter22==1&&counter23==0&&counter24==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter21==1&&counter22==1&&counter23==0&&counter24==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
	}
	else if(counter21==1&&counter22==1&&counter23==1&&counter24==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter21==1&&counter22==1&&counter23==1&&counter24==1)
	{
		printf("No available slots :\n");
		C1=1;
	}
	}
	
	else if(flag==3)
	{
	if(counter31==0&&counter32==0&&counter33==0&&counter34==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter31==0&&counter32==0&&counter33==0&&counter34==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO chosse  2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 4pm to 4:30 pm press 4\n");
		
		
	}
	 else if(counter31==0&&counter32==0&&counter33==1&&counter34==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 4:30pm to 5pm press 5\n");
	}
	else if(counter31==0&&counter32==0&&counter33==1&&counter34==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To choose 2:30 pm to 3 pm press 2\n");
		
	}
	else if(counter31==0&&counter32==1&&counter33==0&&counter34==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2 pm to 2:30 pm press 1\n");
		printf("TO choose 4 pm to 4:30 pm press 4\n");
		printf("TO choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter31==0&&counter32==1&&counter33==0&&counter34==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2 pm to 2:30 pm press 1\n");
		printf("To choose  4 pm to 4:30 pm press 4\n");
		
	}
	else if(counter31==0&&counter32==1&&counter33==1&&counter34==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To choose 4:30pm to 5pm press 5\n");
	}
	else if(counter31==0&&counter32==1&&counter33==1&&counter34==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");

	}
	else if(counter31==1&&counter32==0&&counter33==0&&counter34==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter31==1&&counter32==0&&counter33==0&&counter34==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
	}
	else if(counter31==1&&counter32==0&&counter33==1&&counter34==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm pr\ness 2");
		printf("To choose 4:30 pm to 5 pm press 5\n");

	}
	else if(counter31==1&&counter32==0&&counter33==1&&counter34==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
	}
	else if(counter31==1&&counter32==1&&counter33==0&&counter34==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter31==1&&counter32==1&&counter33==0&&counter34==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
	}
	else if(counter31==1&&counter32==1&&counter33==1&&counter34==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter31==1&&counter32==1&&counter33==1&&counter34==1)
	{
		
		printf("No available slots :\n");
		C1=1;
		
	}
	}
	
	else if(flag==4)
	{
	if(counter41==0&&counter42==0&&counter43==0&&counter44==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse  3pm to 3:30 pm press 3\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter41==0&&counter42==0&&counter43==0&&counter44==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO chosse  2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3pm to 3:30 pm press 3\n");
		
		
	}
	 else if(counter41==0&&counter42==0&&counter43==1&&counter44==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 4:30pm to 5pm press 5\n");
	}
	else if(counter41==0&&counter42==0&&counter43==1&&counter44==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To choose 2:30 pm to 3 pm press 2\n");
		
	}
	else if(counter41==0&&counter42==1&&counter43==0&&counter44==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2 pm to 2:30 pm press 1\n");
		printf("TO choose 3 pm to 3:30 pm press 3\n");
		printf("TO choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter41==0&&counter42==1&&counter43==0&&counter44==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2 pm to 2:30 pm press 1\n");
		printf("To choose  3 pm to 3:30 pm press 3\n");
		
	}
	else if(counter41==0&&counter42==1&&counter43==1&&counter44==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To choose 4:30pm to 5pm press 5\n");
	}
	else if(counter41==0&&counter42==1&&counter43==1&&counter44==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");

	}
	else if(counter41==1&&counter42==0&&counter43==0&&counter44==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter41==1&&counter42==0&&counter43==0&&counter44==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
	}
	else if(counter41==1&&counter42==0&&counter43==1&&counter44==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");

	}
	else if(counter41==1&&counter42==0&&counter43==1&&counter44==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
	}
	else if(counter41==1&&counter42==1&&counter43==0&&counter44==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter41==1&&counter42==1&&counter43==0&&counter44==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
	}
	else if(counter41==1&&counter42==1&&counter43==1&&counter44==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter41==1&&counter42==1&&counter43==1&&counter44==1)
	{
		
		printf("No available slots :\n");
		C1=1;
		
	}
	}
	
	else if(flag==5)
	{
		
	if(counter51==0&&counter52==0&&counter53==0&&counter54==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse  3pm to 3:30 pm press 3\n");
		printf("To choose 4 pm to 4:30 pm press 4\n");
	}
	else if(counter51==0&&counter52==0&&counter53==0&&counter54==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO chosse  2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3pm to 3:30 pm press 3\n");
		
		
	}
	 else if(counter51==0&&counter52==0&&counter53==1&&counter54==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
	}
	else if(counter51==0&&counter52==0&&counter53==1&&counter54==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To choose 2:30 pm to 3 pm press 2\n");
		
	}
	else if(counter51==0&&counter52==1&&counter53==0&&counter54==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2 pm to 2:30 pm press 1\n");
		printf("TO choose 3 pm to 3:30 pm press 3\n");
		printf("TO choose 4 pm to 4:30 pm press 4\n");
	}
	else if(counter51==0&&counter52==1&&counter53==0&&counter54==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2 pm to 2:30 pm press 1\n");
		printf("To choose  3 pm to 3:30 pm press 3\n");
		
	}
	else if(counter51==0&&counter52==1&&counter53==1&&counter54==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To choose 4 pm to 4:30 pm press 4\n");
	}
	else if(counter51==0&&counter52==1&&counter53==1&&counter54==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");

	}
	else if(counter51==1&&counter52==0&&counter53==0&&counter54==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To choose 4 pm to 4:30 pm press 4\n");
	}
	else if(counter51==1&&counter52==0&&counter53==0&&counter54==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
	}
	else if(counter51==1&&counter52==0&&counter53==1&&counter54==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To choose 4 pm to 4:30 pm press 4\n");

	}
	else if(counter51==1&&counter52==0&&counter53==1&&counter54==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
	}
	else if(counter51==1&&counter52==1&&counter53==0&&counter54==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To choose 4 pm to 4:30 pm press 4\n");
		
	}
	else if(counter51==1&&counter52==1&&counter53==0&&counter54==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
	}
	else if(counter51==1&&counter52==1&&counter53==1&&counter54==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 4 pm to 4:30 pm press 4\n");
		
	}
	else if(counter51==1&&counter52==1&&counter53==1&&counter54==1)
	{
		printf("No available slots :\n");
		C1=1;
		
	}
	}
	
	else if (flag==6)
	{
		if(counter61==0&&counter62==0&&counter63==0&&counter64==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter61==0&&counter62==0&&counter63==0&&counter64==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("TO chosse  2:30pm to 3pm press 2\n");
		printf("To chosse 3pm to 3:30pm press 3\n");
		printf("To chosse 4pm to 4:30pm press 4\n");
		
		
	}
	 else if(counter61==0&&counter62==0&&counter63==1&&counter64==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30pm to 3pm press 2\n");
		printf("To chosse 3pm to 3:30pm press 3\n");
		printf("To chosse 4:30pm to 5pm press 5\n");
	}
	else if(counter61==0&&counter62==0&&counter63==1&&counter64==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("TO choose 2:30pm to 3pm press 2\n");
		printf("To choose 3pm to 3:30pm press 3\n");
		
	}
	else if(counter61==0&&counter62==1&&counter63==0&&counter64==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To choose 2:30 pm to 3 pm press 2\n");
		printf("TO choose 4 pm to 4:30 pm press 4\n");
		printf("TO choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter61==0&&counter62==1&&counter63==0&&counter64==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To choose 2:30 pm to 3 pm press 2\n");
		printf("To choose  4 pm to 4:30 pm press 4\n");
		
	}
	else if(counter61==0&&counter62==1&&counter63==1&&counter64==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("TO choose 2:30pm to 3pm press 2\n");
		printf("To choose 4:30pm to 5pm press 5\n");
	}
	else if(counter61==0&&counter62==1&&counter63==1&&counter64==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("TO choose 2:30pm to 3pm press 2\n");

	}
	else if(counter61==1&&counter62==0&&counter63==0&&counter64==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter61==1&&counter62==0&&counter63==0&&counter64==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
	}
	else if(counter61==1&&counter62==0&&counter63==1&&counter64==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");

	}
	else if(counter61==1&&counter62==0&&counter63==1&&counter64==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
	}
	else if(counter61==1&&counter62==1&&counter63==0&&counter64==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter61==1&&counter62==1&&counter63==0&&counter64==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
	}
	else if(counter61==1&&counter62==1&&counter63==1&&counter64==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter61==1&&counter62==1&&counter63==1&&counter64==1)
	{
		C1=0;
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		
	}
	}
	
	else if (flag==7)
	{
		if(counter71==0&&counter72==0&&counter73==0&&counter74==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n"); 
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter71==0&&counter72==0&&counter73==0&&counter74==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO chosse  2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3pm to 3:30 pm press 3\n");
		printf("To chosse 4pm to 4:30 pm press 4\n");
		
		
	}
	 else if(counter71==0&&counter72==0&&counter73==1&&counter74==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3pm to 3:30pm press 3\n");
		printf("To chosse 4:30pm to 5pm press 5\n");
	}
	else if(counter71==0&&counter72==0&&counter73==1&&counter74==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To choose 3pm to 3:30pm press 3\n");
		
	}
	else if(counter71==0&&counter72==1&&counter73==0&&counter74==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("TO choose 4 pm to 4:30 pm press 4\n");
		printf("TO choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter71==0&&counter72==1&&counter73==0&&counter74==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To choose  4 pm to 4:30 pm press 4\n");
		
	}
	else if(counter71==0&&counter72==1&&counter73==1&&counter74==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To choose 4:30pm to 5pm press 5\n");
	}
	else if(counter71==0&&counter72==1&&counter73==1&&counter74==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");

	}
	else if(counter71==1&&counter72==0&&counter73==0&&counter74==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter71==1&&counter72==0&&counter73==0&&counter74==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
	}
	else if(counter71==1&&counter72==0&&counter73==1&&counter74==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");

	}
	else if(counter71==1&&counter72==0&&counter73==1&&counter74==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
	}
	else if(counter71==1&&counter72==1&&counter73==0&&counter74==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter71==1&&counter72==1&&counter73==0&&counter74==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
	}
	else if(counter71==1&&counter72==1&&counter73==1&&counter74==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter71==1&&counter72==1&&counter73==1&&counter74==1)
	{
		C1=0;
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		
	}
	}
	
	else if (flag==8)
	{
		
		if(counter81==0&&counter82==0&&counter83==0&&counter84==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter81==0&&counter82==0&&counter83==0&&counter84==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO chosse  2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4pm to 4:30 pm press 4\n");
		
		
	}
	 else if(counter81==0&&counter82==0&&counter83==1&&counter84==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4:30pm to 5pm press 5\n");
	}
	else if(counter81==0&&counter82==0&&counter83==1&&counter84==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To choose 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		
	}
	else if(counter81==0&&counter82==1&&counter83==0&&counter84==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2 pm to 2:30 pm press 1\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("TO choose 4 pm to 4:30 pm press 4\n");
		printf("TO choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter81==0&&counter82==1&&counter83==0&&counter84==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2 pm to 2:30 pm press 1\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To choose  4 pm to 4:30 pm press 4\n");
		
	}
	else if(counter81==0&&counter82==1&&counter83==1&&counter84==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To choose 4:30pm to 5pm press 5\n");
	}
	else if(counter81==0&&counter82==1&&counter83==1&&counter84==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");

	}
	else if(counter81==1&&counter82==0&&counter83==0&&counter84==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter81==1&&counter82==0&&counter83==0&&counter84==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
	}
	else if(counter81==1&&counter82==0&&counter83==1&&counter84==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm pr\ness 2");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");

	}
	else if(counter81==1&&counter82==0&&counter83==1&&counter84==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
	}
	else if(counter81==1&&counter82==1&&counter83==0&&counter84==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter81==1&&counter82==1&&counter83==0&&counter84==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
	}
	else if(counter81==1&&counter82==1&&counter83==1&&counter84==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter81==1&&counter82==1&&counter83==1&&counter84==1)
	{
		C1=0;
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		
	}
		
	}
	
	else if (flag==9)
	{
		if(counter91==0&&counter92==0&&counter93==0&&counter94==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse  3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n ");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter91==0&&counter92==0&&counter93==0&&counter94==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO chosse  2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n ");
		
		
	}
	 else if(counter91==0&&counter92==0&&counter93==1&&counter94==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n ");
		printf("To chosse 4:30pm to 5pm press 5\n");
	}
	else if(counter91==0&&counter92==0&&counter93==1&&counter94==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To choose 2:30 pm to 3 pm press 2\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n ");
		
	}
	else if(counter91==0&&counter92==1&&counter93==0&&counter94==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2 pm to 2:30 pm press 1\n");
		printf("TO choose 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n ");
		printf("TO choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter91==0&&counter92==1&&counter93==0&&counter94==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2 pm to 2:30 pm press 1\n");
		printf("To choose  3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n ");
		
	}
	else if(counter91==0&&counter92==1&&counter93==1&&counter94==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n ");
		printf("To choose 4:30pm to 5pm press 5\n");
	}
	else if(counter91==0&&counter92==1&&counter93==1&&counter94==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n ");

	}
	else if(counter91==1&&counter92==0&&counter93==0&&counter94==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n ");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter91==1&&counter92==0&&counter93==0&&counter94==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n ");
	}
	else if(counter91==1&&counter92==0&&counter93==1&&counter94==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n ");
		printf("To choose 4:30 pm to 5 pm press 5\n");

	}
	else if(counter91==1&&counter92==0&&counter93==1&&counter94==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n ");
	}
	else if(counter91==1&&counter92==1&&counter93==0&&counter94==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n ");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter91==1&&counter92==1&&counter93==0&&counter94==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n ");
	}
	else if(counter91==1&&counter92==1&&counter93==1&&counter94==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n ");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter91==1&&counter92==1&&counter93==1&&counter94==1)
	{
		C1=0;
		printf("To chosse 4 pm to 4:30 pm press 4\n ");
		
	}
	
}

else if(flag==10)
{
	if(counter101==0&&counter102==0&&counter103==0&&counter104==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse  3pm to 3:30 pm press 3\n");
		printf("To choose 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter101==0&&counter102==0&&counter103==0&&counter104==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO chosse  2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3pm to 3:30 pm press 3\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
		
	}
	 else if(counter101==0&&counter102==0&&counter103==1&&counter104==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2 pm to 2:30 pm press 1\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter101==0&&counter102==0&&counter103==1&&counter104==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To choose 2:30 pm to 3 pm press 2\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter101==0&&counter102==1&&counter103==0&&counter104==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2 pm to 2:30 pm press 1\n");
		printf("TO choose 3 pm to 3:30 pm press 3\n");
		printf("TO choose 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter101==0&&counter102==1&&counter103==0&&counter104==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 2 pm to 2:30 pm press 1\n");
		printf("To choose  3 pm to 3:30 pm press 3\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter101==0&&counter102==1&&counter103==1&&counter104==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To choose 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter101==0&&counter102==1&&counter103==1&&counter104==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("TO choose 2 pm to 2:30 pm press 1\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");

	}
	else if(counter101==1&&counter102==0&&counter103==0&&counter104==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To choose 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter101==1&&counter102==0&&counter103==0&&counter104==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter101==1&&counter102==0&&counter103==1&&counter104==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To choose 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");

	}
	else if(counter101==1&&counter102==0&&counter103==1&&counter104==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 2:30 pm to 3 pm press 2\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter101==1&&counter102==1&&counter103==0&&counter104==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To choose 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter101==1&&counter102==1&&counter103==0&&counter104==1)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To chosse 3 pm to 3:30 pm press 3\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
	}
	else if(counter101==1&&counter102==1&&counter103==1&&counter104==0)
	{
		C1=0;
		printf("The available slots are :\n");
		printf("To choose 4 pm to 4:30 pm press 4\n");
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	else if(counter101==1&&counter102==1&&counter103==1&&counter104==1)
	{
		C1=0;
		printf("To choose 4:30 pm to 5 pm press 5\n");
		
	}
	
}
	
	
	
	if(C1==0)
	{
		
	
	
	printf("please enter patiant ID: ");
	scanf("%d",&patiant_ID);
	temp=pointer;
	while(temp!=NULL)
	{
	if(patiant_ID==temp->ID && temp->Reserve==0)
	{
		counter=1;
	   printf("please enter patiant desired slot:");
	   scanf("%d",&(temp->Reserve));
	   if(temp->Reserve==1)
	   {
		    counter11=0;
	        counter12=0;
	        counter13=0;
	        counter14=0;
		   
	       flag=1;
		   temp1=pointer;
		   while(temp1!=NULL)
		   {
			   if (temp1->Reserve==2)
			   {
				  counter11=1; 
			   }
			   else if(temp1->Reserve==3)
			   {
				  counter12=1; 
			   }
			  
			   else if(temp1->Reserve==4)
			   {
				  counter13=1; 
			   }
			   else if(temp1->Reserve==5)
			   {
				  counter14=1; 
			   }
			   temp1=temp1->ptr;
			   
		   } 
		   
	   }
	   
	   else if(temp->Reserve==2)
	   {
		    counter21=0;
	        counter22=0;
	        counter23=0;
	        counter24=0;
		   
		  temp1=pointer;
		  flag=2;
		   while(temp1!=NULL)
		   {
			   
			   if(temp1->Reserve==1)
			   {
				  counter21=1; 
			   }
			  
			   else if(temp1->Reserve==3)
			   {
				  counter22=1; 
			   }
			   
			   else if(temp1->Reserve==4)
			   {
				  counter23=1; 
			   }
			   else if(temp1->Reserve==5)
			   {
				  counter24=1; 
			   }
			   temp1=temp1->ptr; 
	   }
	  }
	   else if(temp->Reserve==3)
	   {  
             counter31=0;
	         counter32=0;
	         counter33=0;
	         counter34=0;
			
	       flag=3;
		   temp1=pointer;
		   while(temp1!=NULL)
		   {
			   if(temp1->Reserve==1)
			   {
		          counter31=1;
				  
			   }
			   
			   else if(temp1->Reserve==2)
			   {
				  counter32=1; 
			   }
			   else if(temp1->Reserve==4)
			   {
				  counter33=1; 
			   }
			   else if(temp1->Reserve==5)
			   {
				  counter34=1; 
			   }
			   temp1=temp1->ptr; 
	   }
	   }
	   else if(temp->Reserve==4)
	   {  
            counter41=0;
	        counter42=0;
	        counter43=0;
	        counter44=0;
		   
		   flag=4;
		   temp1=pointer;
		   while(temp1!=NULL)
		   {
			   if(temp1->Reserve==1)
			   {
		          counter41=1;
				  
			   }
			   
			   if(temp1->Reserve==2)
			   {
		          counter42=1;
				  
			   }
			   
			   else if(temp1->Reserve==3)
			   {
				  counter43=1; 
			   }
			   else if(temp1->Reserve==5)
			   {
				  counter44=1; 
			   }
			   temp1=temp1->ptr; 
	   }
	   }
	   
	   else if(temp->Reserve==5)
		   
	   {
		    counter51=0;
	        counter52=0;
	        counter53=0;
	      	counter54=0;
		   
	       flag=5;
		   temp1=pointer;
		   while(temp1!=NULL)
		   {
		   
		       if(temp1->Reserve==1)
			   {
				  counter51=1; 
			   }
		       else if(temp1->Reserve==2)
			   {
				  counter52=1; 
			   }
			   else if(temp1->Reserve==3)
			   {
				  counter53=1; 
			   }
			   
			   
			   else if(temp1->Reserve==4)
			   {
				  counter54=1; 
			   }
			   temp1=temp1->ptr;
			   
		   }
		  }		   
	   
	   
	   
	}
	temp=temp->ptr;
	}
	
	if(counter==0)
	{
		printf("This ID is not exist OR the patiant already reserve a slot\n");
	}
	}
	

}

void Display(void)
{
	record*temp;
	temp=pointer;
	int patiant_ID;
	int counter=0;
	printf("please enter patiant ID : ");
	scanf("%d",&patiant_ID);
	while(temp!=NULL)
	{
		if(patiant_ID==temp->ID)
		{
			counter=1;
			printf("The patiant Name : %s %s\n",temp->firstName,temp->lastName);
			printf("The patiant gender : %s \n",temp->Gender);
			printf("The patiant age  : %d \n", temp->age);
			
		}
		temp=temp->ptr;
		
	}
		if(counter==0)
		{
			printf("This password is not exist");
		}
}

void Data(void)
{
	record*temp;
	temp=pointer;
	while(temp!=0)
	{
		if(temp->Reserve!=0)
		{
			if(temp->Reserve==1)
			{
				printf("%d --> 2 pm to 2:30 pm\n",temp->ID);
			}
			else if(temp->Reserve==2)
			{
				printf("%d --> 2:30 pm to 3 pm\n",temp->ID);
			}
			else if(temp->Reserve==3)
			{
				printf("%d --> 3 pm to 3:30 pm\n",temp->ID);
			}
			else if(temp->Reserve==4)
			{
				printf("%d --> 4 pm to 4:30 pm\n",temp->ID);
			}
			else if(temp->Reserve==5)
			{
				printf("%d --> 4:30 pm to 5 pm\n",temp->ID);
			}
		}
		temp=temp->ptr;
		
	}

}

void Delete(void)
{
	int patiant_ID;
	record*temp;
	int counter=0;
	record*temp1;
	temp=pointer;
	printf("please enter patiant ID :");
	scanf("%d",&patiant_ID);
	while(temp!=NULL)
	{
	   if(patiant_ID==temp->ID&&temp->Reserve!=0)
	   {
		   counter=1;
		   if(temp->Reserve==1)
		   {
			    counter61=0;
	            counter62=0;
	            counter63=0;
	            counter64=0;
			   
			   temp1=pointer;
			   flag=6;
			   while(temp1!=NULL)
			   {
				   if(temp1->Reserve==2)
				   {
					   counter61=1;
				   }
				   else if (temp1->Reserve==3)
				   {
					   counter62=1;
				   }
				   else if (temp1->Reserve==4)
				   {
					   counter63=1;
				   }
				   else if (temp1->Reserve==5)
				   {
					   counter64=1;
				   }
				   temp1=temp1->ptr;
			   }
			   
		   }
		   else if(temp->Reserve==2)
		   {
			    counter71=0;
	          	counter72=0;
	            counter73=0;
	            counter74=0;
			   
			   temp1=pointer;
			   flag=7;
			   while(temp1!=NULL)
			   {
				   if(temp1->Reserve==1)
				   {
					   counter71=1;
				   }
				   else if (temp1->Reserve==3)
				   {
					   counter72=1;
				   }
				   else if (temp1->Reserve==4)
				   {
					   counter73=1;
				   }
				   else if (temp1->Reserve==5)
				   {
					   counter74=1;
				   }
				   temp1=temp1->ptr;
			   }
			   
		   }
		   else if(temp->Reserve==3)
		   {
			    counter81=0;
	            counter82=0;
	            counter83=0;
	            counter84=0;
			   
			   temp1=pointer;
			   flag=8;
			   while(temp1!=NULL)
			   {
				   if(temp1->Reserve==1)
				   {
					   counter81=1;
				   }
				   else if (temp1->Reserve==2)
				   {
					   counter82=1;
				   }
				   else if (temp1->Reserve==4)
				   {
					   counter83=1;
				   }
				   else if (temp1->Reserve==5)
				   {
					   counter84=1;
				   }
				   temp1=temp1->ptr;
			   }
		   }
		   else if(temp->Reserve==4)
		   {
			   
			    counter91=0;
	            counter92=0;
	            counter93=0;
	            counter94=0;
			   
			   temp1=pointer;
			   flag=9;
			   while(temp1!=NULL)
			   {
				   if(temp1->Reserve==1)
				   {
					   counter91=1;
				   }
				   else if (temp1->Reserve==2)
				   {
					   counter92=1;
				   }
				   else if (temp1->Reserve==3)
				   {
					   counter93=1;
				   }
				   else if (temp1->Reserve==5)
				   {
					   counter94=1;
				   }
				   temp1=temp1->ptr;
			   }
		   }
		   else if(temp->Reserve==5)
		   {
			    counter101=0;
	            counter102=0;
	            counter103=0;
	            counter104=0;
	            counter105=0;
			   
			   temp1=pointer;
			   flag=10;
			   while(temp1!=NULL)
			   {
				   if(temp1->Reserve==1)
				   {
					   counter101=1;
				   }
				   else if (temp1->Reserve==2)
				   {
					   counter102=1;
				   }
				   else if (temp1->Reserve==3)
				   {
					   counter103=1;
				   }
				   else if (temp1->Reserve==4)
				   {
					   counter104=1;
				   }
				   temp1=temp1->ptr;
			   }
		   }
		   temp->Reserve=0;
	   }
	   temp=temp->ptr;
	}
	if(counter==0)
	{
		printf("This ID is not exist Or this patiant not have reservation\n");	
	}
}












