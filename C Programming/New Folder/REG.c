#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

void OpenFiles(void);
void SetupArray(void);
void ProcessLoop(void);
void PrintMenu(void);
void UpdEnroll(void);
void LookUpCallNum (void);
void FindEmptyRec(void);
void AddCourse(void);
void DletCourse(void);
void DisplayAll(void);
void SaveKeys(void);

FILE *keyFile;
int recKey;

FILE *dataFile;
struct courseData {
	int callNum;
	char dept[15];
	int enroll;
};

struct courseData course;
int openFlag = 0;
int key[20];
int recNum;
int choice = 0;
int iCallNum;
int iEnroll;
int loc;
char wait;

main()
{
	//clrscr();
	SetupArray();
	OpenFiles();
	if(openFlag == 3);
	{
		ProcessLoop();
		SaveKeys();
		fclose(dataFile);
		/*fclose(dataFile);*/

	}
	exit(0);
	return 0;
}
void SetupArray(void)
{
	keyFile = fopen("c:\\course.key","r");
	if (keyFile == NULL)
	{
		printf("Cannot Open Files\n");
	}
	else
	{
		openFlag = 1;
		for (recNum = 1; recNum<= 20; recNum++)
		{
			fscanf(keyFile,"%d",&recKey);
		key[recNum - 1] = recKey;
		}
		fclose(keyFile);
	}
	return;
}
void OpenFiles(void)
{
	keyFile = fopen("c:\\course.key","w");
	if(keyFile == NULL)
		printf("Cannot Open key file\n");
	else
		openFlag = openFlag + 1;

	dataFile = fopen ("c:\\course.dat", "r+");
	if (dataFile == NULL)
		printf("Cannot Open data file\n");

	else
		openFlag = openFlag + 1;
	return;
}
void ProcessLoop (void)
{
	while(choice < 5)
	{
		PrintMenu();
		switch(choice) {
			case 1:
				UpdEnroll();
				break;
			case 2:
				AddCourse();
				break;
			case 3:
				DletCourse();
				break;
			case 4:
				DisplayAll();
				break;
			default:
				break;
		}
	}
	return;
}
void PrintMenu (void)
{
	system("cls");
	printf("\nCourse Maintenance System\n");
	printf("\nSelect one:\n\n"
	       "	1) Update Registration\n"
	       "	2) Add Registration\n"
	       "	3) Delete Registration\n"
	       " 	4) Display all Registered\n"
	       "	5) Quit\n"
	       "\nEnter choice (1 - 5) ===> ");
	scanf("%d",&choice);
	while (choice < 1 || choice > 5)
	{
		printf("\nError...re-enter choice (1 - 5) ===> ");
		scanf("%d",&choice);
	}
	return;
}
void UpdEnroll (void)
{
	system("cls");
	printf("\nUPDATE ENROLLMENT:");
	LookUpCallNum();
	if (loc == -1)
	{
		printf("\n\Error: Record does not exist ");
		printf(" - press 'Enter'to continue ");
		wait = getch();
	}
	else
	{
	fseek (dataFile, (loc - 1) * sizeof(struct courseData),SEEK_SET);
	fread(&course,sizeof(struct courseData),1, dataFile);
	printf("\n3d % -15s %2d\n",course.callNum, course.dept, course.enroll);
	printf("\nEnter new enrollment: ");
	scanf("%d",&iEnroll);
	course.enroll = iEnroll;
	fseek (dataFile, (loc - 1) * sizeof(struct courseData), SEEK_SET);
	fwrite(&course, sizeof(struct courseData), 1, dataFile);
	}
	return;
}
void LookUpCallNum(void)
{
	printf("Enter call number:");
	scanf("%d",&iCallNum);
	recNum = -1;
	loc = -1;
	while (recNum < 20 && loc == -1)
	{
		if(iCallNum == key[recNum - 1])
			loc = recNum;
		recNum = recNum + 1;
	}
	return;
}
void DletCourse(void)
{
	system("cls");
	printf("\nDELETE COURSE:");
	LookUpCallNum();
	if (loc == -1)
	{
		printf("\nRecord does not exist");
		printf(" - press 'Enter' to continue.");
		wait = getch();
	}
	else
	{
		key[loc - 1] = 0;
		printf("\nRecord deleted - press 'Enter' to continue");
		wait = getch();
	}
	return;
}
void AddCourse(void)
{
	system("cls");
	printf("\nADD COURSE:");
	LookUpCallNum();
	if (loc != -1)
	{
		printf("\nRecord already exist");
		printf(" - press 'Enter' to continue");
		wait = getch();
	}
	else
	{
		FindEmptyRec();
		key[loc - 1] = iCallNum;
		course.callNum = iCallNum;
		printf("    Enter department & number:  ");
		scanf("%s", &course.dept);
		printf("    Enter student enrollment:   ");
		scanf("%s", &course.enroll);
		fseek(dataFile, (loc - 1) * sizeof(struct courseData),SEEK_SET);
		fwrite(&course, sizeof(struct courseData), 1, dataFile);
		printf("\nCall# %3d added - press 'Enter' to continue.",iCallNum);
		wait = getch();
	}
	return;
}
void FindEmptyRec(void)
{
	recNum = 1;
	loc = -1;
	while(recNum <= 20 && loc == -1)
	{
		if (key[recNum - 1] == 0)
			loc = recNum;
		recNum = recNum + 1;
	}
	return;
}
void DisplayAll(void)
{
	system("cls");
	fseek(dataFile, 0, SEEK_SET);
	printf("\nRec# Key Call# Dept Course#  Enrollment");
	printf("\n---------------------------------------");
	for (recNum = 1;  recNum <= 20;recNum++)
	{
		fread(&course,sizeof(struct courseData), 1,dataFile);
		if (key[recNum -1] != 0)
		{
			printf("\n %2d %3d %3d %-15s     %2d",recNum, key[recNum - 1], course.callNum,course.dept, course.enroll);
		}
	}
	printf("\n\nPress 'Enter' to continue.");
	wait = getch();
	return;
}
void SaveKeys (void)
{
	for(recNum = 1;recNum <= 20;recNum++)
	{
		fprintf(keyFile, "%d\n", key[recNum - 1]);
	}
	return;
}






