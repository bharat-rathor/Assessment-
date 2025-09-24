#include <stdio.h>
#include <string.h>


void length(char name[])
{
    printf("Enter Name : ");
    getchar(); 
    fgets(name, 20, stdin);
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);
    printf("The Length of String Is : %d\n", len);
}


void str_concatenation(char name1[], char name2[])
{
    char fullname[50]; 
    printf("Enter name 1 : ");
    getchar();
    fgets(name1, 20, stdin);
    name1[strcspn(name1, "\n")] = '\0';

    printf("Enter name 2 : ");
    fgets(name2, 20, stdin);
    name2[strcspn(name2, "\n")] = '\0';

    strcpy(fullname, name1);
    strcat(fullname, " ");
    strcat(fullname, name2);

    printf("The concatenation name is: %s\n", fullname);
}


void copy_string(char name1[], char name2[])
{
    printf("Enter Name : ");
    getchar();
    fgets(name1, 20, stdin);
    name1[strcspn(name1, "\n")] = '\0';

    strcpy(name2, name1);
    printf("The Copy String Is : %s\n", name2);
}


void reverse_string(char name[])
{
    printf("Enter Name : ");
    getchar();
    fgets(name, 20, stdin);
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = name[i];
        name[i] = name[len - i - 1];
        name[len - i - 1] = temp;
    }

    printf("The Reverse String Is : %s\n", name);
}


void freq_string(char name[])
{
    int count;
    printf("Enter String : ");
    getchar();
    fgets(name, 20, stdin);
    name[strcspn(name, "\n")] = '\0'; 

    int len = strlen(name);
    for (int i = 0; i < len; i++)
    {
        count = 1;
        if (name[i] == '0')
            continue;

        for (int j = i + 1; j < len; j++)
        {
            if (name[i] == name[j])
            {
                count++;
                name[j] = '0'; 
            }
        }
        if (name[i] != '0')
        {
            printf("Character '%c' frequency is : %d\n", name[i], count);
        }
    }
}
void palindrome()
{
	char name[20];
	printf("Enter name : ");
	getchar();
	fgets(name,20,stdin);
	int len=strlen(name);
	int ispal;
	for(int i=0;i<len/2;i++)
	{
		ispal=0;
		for(int j=len;j>0;j--)
		{
			if(name[i]==name[j])
			{
				ispal=1;
			}
		}
		if(ispal)
		{
			printf("This Is Palindrome");
			break;
		}
		else{
			printf("This Is Not Palindrome ");
			break;
		}
	}
}
void blank_space()
{
	char name[20];
	printf("Enter String : ");
	getchar();
	fgets(name,20,stdin);
	int count=0;
	for(int i=0;name[i]!=NULL;i++)
	{
		if(name[i]==' ')
		{
			count++;
		}
	}
	printf("The Blank Space Count Is : %d",count);
}

int main()
{
    char name[20];
    char name1[20];
    char name2[20];
    int choice;
    char ch;

    do
    {
        printf("\n------ String Operation ------\n");
        printf("1 For Length of String\n");
        printf("2 For Concatenation String\n");
        printf("3 For Copy String\n");
        printf("4 For Reverse String\n");
        printf("5 Frequency of Character\n");
		printf("6 Palindrome\n");
		printf("7 Find Blank Space\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            length(name);
            break;
        case 2:
            str_concatenation(name1, name2);
            break;
        case 3:
            copy_string(name1, name2);
            break;
        case 4:
            reverse_string(name);
            break;
        case 5:
            freq_string(name);
            break;
        case 6:
        	palindrome();
        	break;
        case 7:
        	blank_space();
        	break;
        default:
            printf("Enter Valid Choice!\n");
        }
        printf("Do You Want To Continue : ");
        scanf(" %c",&ch);
    } while (ch=='Y' || ch=='y');

    return 0;
}

