#include<stdio.h>
#include<stdlib.h>

int string_len(char*str)
{
    int i;
    for(i=0;str[i];i++);
    return i;
}


void string_print(char arr[])//int arr[]
{
    int i;
    for(i=0;arr[i]!=0; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");

}

int string_compare(char* arr1,char* arr2)
{
	int counter=0;
	int size=string_len(arr1);

	if(string_len(arr1)!=string_len(arr2))
	{
		return 0;
	}

	for(counter=0;counter<size;counter++)
	{
		if(arr1[counter]!=arr2[counter])
		{
			return 0;

		}

	}
	return 1;


}

void scan_string(char*p,int size)
{
	int flag=0;
	int counter=0;
	fflush(stdin);
	for(counter=0;counter<(size-1)&&flag==0;counter++) //abdnfbam
	{
		scanf("%c",(p+counter));

		if(*(p+counter)=='\n')
		{

			flag=1;
		}

	}

	*(p+size)=0;
	fflush(stdin);
}

int enter_email(char*email,char*user_name)
{
	char email_user[100]={0};
	scan_string(email_user,100);
	if((string_compare(email,email_user)||string_compare(user_name,email_user)))
	{

		return 1;
	}
	else
	{
		return 0;
	}

}

int enter_password(char*password)
{
	char password_user[100]={0};
	scan_string(password_user,100);
	if(string_compare(password,password_user))
	{

		return 1;
	}
	else
	{
		return 0;
	}

}

void _delay_(void)
{
	long long i=0;

	for(i=0;i<2900000000;i++);


}
int main()
{
	char first_name[20]={0};
	char second_name[20]={0};
	char user_name[100]={0};
	char email[100]={0};
	char password[100]={0};
	int compare_email_result=0;
	int flag=0;
	int compare_password_result=0;

	printf("First Name: ");
	scan_string(first_name,20);
	printf("Second name: ");
	scan_string(second_name,20);
	printf("User Name: ");
	scan_string(user_name,100);
	printf("Email: ");
	scan_string(email,100);
	printf("Password: ");
	scan_string(password,100);
	system("cls");

	while(flag==0)
	{
		system("COLOR 7");
		printf("Email or user name: ");
		compare_email_result=enter_email(email,user_name);
		printf("password: ");
		compare_password_result=enter_password(password);
		if(compare_email_result&&compare_password_result)
		{

			system("cls");
			printf("\n\nCorrect......\n\n");
			system("COLOR 2");
			_delay_();
			system("cls");
			// _delay_();
			printf("IF you want enter more corner cases write:0\n exit write: any number\n Enter you selection: ");
			scanf("%d",&flag);
			system("cls");
		}
		else
		{
			system("cls");
		}
		if(!(compare_email_result)&&!(compare_password_result))
		{
			printf("\n\nThe Email and Password is Not Correct\n");
			system("COLOR 4");
			_delay_();
			system("cls");
		}
		else if(!(compare_password_result))
		{
			printf("\n\nThe Password is Not Correct\n");
			system("COLOR 4");
			_delay_();
			system("cls");

		}
		else if(!(compare_email_result))
		{
			printf("\n\nThe Email is Not Correct\n");
			system("COLOR 4");
			_delay_();
			system("cls");
		}

	}

	system("COLOR 7");


}
