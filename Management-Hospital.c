#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct node1{ //Pedriatic
	char name[30];
	char birth[15];
	char address[25];
	int status;
	int age;
	char doc[30];
	char treatdate[20];
	char diagnose[50];
	char drug[30];
	int checkQ;
	int queue;
	float pay;

	struct node1 *next;
};

struct node2{ //Dental
	char name[30];
	char birth[15];
	char address[25];
	int status;
	int age;
	char doc[30];
	char treatdate[20];
	char diagnose[50];
	char drug[30];
	int checkQ;
	int queue;
	float pay;
	
	struct node2 *next;
};

struct node3{ //Beauty
	char name[30];
	char birth[15];
	char address[25];
	int status;
	int age;
	char doc[30];
	char treatdate[20];
	char diagnose[50];
	char drug[30];
	int checkQ;
	int queue;
	float pay;
	
	struct node3 *next;
};

struct node4{ //Nutrition
	char name[30];
	char birth[15];
	char address[25];
	int status;
	int age;
	char doc[30];
	char treatdate[20];
	char diagnose[50];
	char drug[30];
	int checkQ;
	int queue;
	float pay;
	
	struct node4 *next;
};

struct node1 *front1 = NULL;
struct node1 *rear1 = NULL;

struct node2 *front2 = NULL;
struct node2 *rear2 = NULL;

struct node3 *front3 = NULL;
struct node3 *rear3 = NULL;

struct node4 *front4 = NULL;
struct node4 *rear4 = NULL;

void list_of_doctors(){
	system("cls");
	printf("================================================================================================================\n");
	printf("Doctor's Name 1\t\t|\t\t Doctor's Name 2\t\t|\t\t Clinic\t\t\t|\n");
	printf("================================================================================================================\n");
	printf("Dr. Alfhin\t\t\t\t Dr. Gilbert\t\t\t\t\t Pedriatic\t\t\n");
	printf("Dr. Joshua\t\t\t\t Dr. Edwin\t\t\t\t\t Dental\t\t\n");
	printf("Dr. Wilona\t\t\t\t Dr. Rina\t\t\t\t\t Beauty\t\t\n");
	printf("Dr. Morgan\t\t\t\t Dr. Awin\t\t\t\t\t Nutrition\t\t\n\n");
	printf("Press Enter to Continue...");getch();
	system("cls");
}

void registration(){
	system("cls");
	int opt = -1;
	int doc1, doc2, doc3, doc4;
	printf("List's Clinics\n");
	printf("1. Pedriatic\n");
	printf("2. Dental\n");
	printf("3. Beauty\n");
	printf("4. Nutrition\n");
	printf("Enter Option : ");
	scanf("%d", &opt);
	
	//Pedriatic Clinic
	if(opt == 1){
		struct node1 *newnode1 = (struct node1*)malloc(sizeof(struct node1));
		
		newnode1->checkQ = 0;
		
		printf("Name : ");getchar();
		scanf("%[^\n]", newnode1->name);
		printf("Date of Birth : ");getchar();
		scanf("%[^\n]", newnode1->birth);
		printf("Age : ");
		scanf("%d", &newnode1->age);
		printf("Address : ");getchar();
		scanf("%[^\n]", newnode1->address);
		printf("Status\n");
		printf("1. BPJS\n2. Inhealth\n3. Mandiri\n");
		printf("Enter Option : ");
		scanf("%d", &newnode1->status);
		printf("Pedriatic Clinic\n1. Dr. Alfhin\n2. Dr. Gilbert\n");
		printf("Select Your Doctor : ");
		scanf("%d", &doc1);
			
		if(doc1 == 1){
			printf("Dr. Alfhin\n");
			printf("Treatment Date : ");getchar();
			scanf("%[^\n]", newnode1->treatdate);
			printf("\n");
			printf("Patient's Name : %s\n", newnode1->name);
			strcpy(newnode1->doc, "Dr. Alfhin");
			printf("Doctor's Name : %s\n", newnode1->doc);
			printf("Treatment Date : %s\n", newnode1->treatdate);
			if(newnode1->status == 1){
				printf("Status : BPJS\n");
			}
			if(newnode1->status == 2){
				printf("Status : Inhealth\n");
			}
			if(newnode1->status == 3){
				printf("Status : Mandiri\n");
			}
		}
		else if(doc1 == 2){
			printf("Dr. Gilbert\n");
			printf("Treatment Date : ");getchar();
			scanf("%[^\n]", newnode1->treatdate);
			printf("\n");
			printf("Patient's Name : %s\n", newnode1->name);
			strcpy(newnode1->doc, "Dr. Gilbert");
			printf("Doctor's Name : %s\n", newnode1->doc);
			printf("Treatment Date : %s\n", newnode1->treatdate);
			if(newnode1->status == 1){
				printf("Status : BPJS\n");
			}
			if(newnode1->status == 2){
				printf("Status : Inhealth\n");
			}
			if(newnode1->status == 3){
				printf("Status : Mandiri\n");
			}
		}
		newnode1->next = NULL;

		if(rear1 == NULL){
			front1 = newnode1;
			rear1 = newnode1;
		}
		else{
			rear1->next = newnode1;
			rear1 = rear1->next;
		}	
	}
	
	// Dental Clinic
	else if(opt == 2){
		struct node2 *newnode2 = (struct node2*)malloc(sizeof(struct node2));
		
		newnode2->checkQ = 0;
		
		printf("Name : ");getchar();
		scanf("%[^\n]", newnode2->name);
		printf("Date of Birth : ");getchar();
		scanf("%[^\n]", newnode2->birth);
		printf("Age : ");
		scanf("%d", &newnode2->age);
		printf("Address : ");getchar();
		scanf("%[^\n]", newnode2->address);
		printf("Status\n");
		printf("1. BPJS\n2. Inhealth\n3. Mandiri\n");
		printf("Enter Option : ");
		scanf("%d", &newnode2->status);
		printf("Pedriatic Clinic\n1. Dr. Joshua\n2. Dr. Edwin\n");
		printf("Select Your Doctor : ");
		scanf("%d", &doc2);
					
		if(doc2 == 1){
			printf("Dr. Joshua\n");
			printf("Treatment Date : ");getchar();
			scanf("%[^\n]", newnode2->treatdate);
			printf("\n");
			printf("Patient's Name : %s\n", newnode2->name);
			strcpy(newnode2->doc, "Dr. Joshua");
			printf("Doctor's Name : %s\n", newnode2->doc);
			printf("Treatment Date : %s\n", newnode2->treatdate);
			if(newnode2->status == 1){
				printf("Status : BPJS\n");
			}
			if(newnode2->status == 2){
				printf("Status : Inhealth\n");
			}
			if(newnode2->status == 3){
				printf("Status : Mandiri\n");
			}
		}
			
		else if(doc2 == 2){
			printf("Dr. Edwin\n");
			printf("Treatment Date : ");getchar();
			scanf("%[^\n]", newnode2->treatdate);
			printf("\n");
			printf("Patient's Name : %s\n", newnode2->name);
			strcpy(newnode2->doc, "Dr. Edwin");
			printf("Doctor's Name : %s\n", newnode2->doc);
			printf("Treatment Date : %s\n", newnode2->treatdate);
			if(newnode2->status == 1){
				printf("Status : BPJS\n");
			}
			if(newnode2->status == 2){
				printf("Status : Inhealth\n");
			}
			if(newnode2->status == 3){
				printf("Status : Mandiri\n");
			}
		}
		newnode2->next = NULL;
		if(rear2 == NULL){
			front2 = newnode2;
			rear2 = newnode2;
		}
		else{
			rear2->next = newnode2;
			rear2 = rear2->next;
		}
	}
	
	//Beauty Clinic
	else if(opt == 3){
		struct node3 *newnode3 = (struct node3*)malloc(sizeof(struct node3));
		
		newnode3->checkQ = 0;
		
		printf("Name : ");getchar();
		scanf("%[^\n]", newnode3->name);
		printf("Date of Birth : ");getchar();
		scanf("%[^\n]", newnode3->birth);
		printf("Age : ");
		scanf("%d", &newnode3->age);
		printf("Address : ");getchar();
		scanf("%[^\n]", newnode3->address);
		printf("Status\n");
		printf("1. BPJS\n2. Inhealth\n3. Mandiri\n");
		printf("Enter Option : ");
		scanf("%d", &newnode3->status);
		printf("Pedriatic Clinic\n1. Dr. Wilona\n2. Dr. Rina\n");
		printf("Select Your Doctor : ");
		scanf("%d", &doc2);
					
		if(doc2 == 1){
			printf("Dr. Wilona\n");
			printf("Treatment Date : ");getchar();
			scanf("%[^\n]", newnode3->treatdate);
			printf("\n");
			printf("Patient's Name : %s\n", newnode3->name);
			strcpy(newnode3->doc, "Dr. Wilona");
			printf("Doctor's Name : %s\n", newnode3->doc);
			printf("Treatment Date : %s\n", newnode3->treatdate);
			if(newnode3->status == 1){
				printf("Status : BPJS\n");
			}
			if(newnode3->status == 2){
				printf("Status : Inhealth\n");
			}
			if(newnode3->status == 3){
				printf("Status : Mandiri\n");
			}
		}
			
		else if(doc2 == 2){
			printf("Dr. Rina\n");
			printf("Treatment Date : ");getchar();
			scanf("%[^\n]", newnode3->treatdate);
			printf("\n");
			printf("Patient's Name : %s\n", newnode3->name);
			strcpy(newnode3->doc, "Dr. Rina");
			printf("Doctor's Name : %s\n", newnode3->doc);
			printf("Treatment Date : %s\n", newnode3->treatdate);
			if(newnode3->status == 1){
				printf("Status : BPJS\n");
			}
			if(newnode3->status == 2){
				printf("Status : Inhealth\n");
			}
			if(newnode3->status == 3){
				printf("Status : Mandiri\n");
			}
		}
		newnode3->next = NULL;
		if(rear3 == NULL){
			front3 = newnode3;
			rear3 = newnode3;
		}
		else{
			rear3->next = newnode3;
			rear3 = rear3->next;
		}
	}
	
	//Nutrition Clinic
	else if(opt == 4){
		struct node4 *newnode4 = (struct node4*)malloc(sizeof(struct node4));
		
		newnode4->checkQ = 0;
		
		printf("Name : ");getchar();
		scanf("%[^\n]", newnode4->name);
		printf("Date of Birth : ");getchar();
		scanf("%[^\n]", newnode4->birth);
		printf("Age : ");
		scanf("%d", &newnode4->age);
		printf("Address : ");getchar();
		scanf("%[^\n]", newnode4->address);
		printf("Status\n");
		printf("1. BPJS\n2. Inhealth\n3. Mandiri\n");
		printf("Enter Option : ");
		scanf("%d", &newnode4->status);
		printf("Pedriatic Clinic\n1. Dr. Morgan\n2. Dr. Awin\n");
		printf("Select Your Doctor : ");
		scanf("%d", &doc2);
					
		if(doc2 == 1){
			printf("Dr. Morgan\n");
			printf("Treatment Date : ");getchar();
			scanf("%[^\n]", newnode4->treatdate);
			printf("\n");
			printf("Patient's Name : %s\n", newnode4->name);
			strcpy(newnode4->doc, "Dr. Morgan");
			printf("Doctor's Name : %s\n", newnode4->doc);
			printf("Treatment Date : %s\n", newnode4->treatdate);
			if(newnode4->status == 1){
				printf("Status : BPJS\n");
			}
			if(newnode4->status == 2){
				printf("Status : Inhealth\n");
			}
			if(newnode4->status == 3){
				printf("Status : Mandiri\n");
			}
		}
			
		else if(doc2 == 2){
			printf("Dr. Awin\n");
			printf("Treatment Date : ");getchar();
			scanf("%[^\n]", newnode4->treatdate);
			printf("\n");
			printf("Patient's Name : %s\n", newnode4->name);
			strcpy(newnode4->doc, "Dr. Awin");
			printf("Doctor's Name : %s\n", newnode4->doc);
			printf("Treatment Date : %s\n", newnode4->treatdate);
			if(newnode4->status == 1){
				printf("Status : BPJS\n");
			}
			if(newnode4->status == 2){
				printf("Status : Inhealth\n");
			}
			if(newnode4->status == 3){
				printf("Status : Mandiri\n");
			}
		}
		newnode4->next = NULL;
		if(rear4 == NULL){
			front4 = newnode4;
			rear4 = newnode4;
		}
		else{
			rear4->next = newnode4;
			rear4 = rear4->next;
		}
	}
	printf("\n");
	printf("Press Enter to Continue...");getch();
	system("cls");
}
		

void current_clinic(){
	system("cls");
	struct node1 *curr1 = front1;
	struct node2 *curr2 = front2;
	struct node3 *curr3 = front3;
	struct node4 *curr4 = front4;
	
	int queue1 = 1, queue2 = 1, queue3 = 1, queue4 = 1; 
	
	printf("Pedriatic Clinic\n");
	if(front1 == NULL){
		printf("Empty!\n");
	}
	else{
		while(curr1 != NULL){
			if(curr1->checkQ != 0){
				continue;
			}
			else{
				printf("Queue -%d\n", queue1);
				printf("Patient's Name : %s\n", curr1->name);
				printf("Doctor's Name : %s\n", curr1->doc);
				if(curr1->status == 1){
					printf("Status : BPJS\n");
				}
				if(curr1->status == 2){
					printf("Status : Inhealth\n");
				}
				if(curr1->status == 3){
					printf("Status : Mandiri\n");
				}
				curr1->queue = queue1;
				queue1++;
				curr1 = curr1->next;
				printf("\n");
			}
		}
	}
	
	printf("Dental Clinic\n");
	if(front2 == NULL){
		printf("Empty!\n");
	}
	else{
		while(curr2 != NULL){
			if(curr2->checkQ != 0){
				continue;
			}
			else{
				printf("Queue -%d\n", queue2);
				printf("Patient's Name : %s\n", curr2->name);
				printf("Doctor's Name : %s\n", curr2->doc);
				if(curr2->status == 1){
					printf("Status : BPJS\n");
				}
				if(curr2->status == 2){
					printf("Status : Inhealth\n");
				}
				if(curr2->status == 3){
					printf("Status : Mandiri\n");
				}
				curr2->queue = queue2;
				queue2++;
				curr2 = curr2->next;
				printf("\n");
			}
		}
	}
	
	printf("Beauty Clinic\n");
	if(front3 == NULL){
		printf("Empty!\n");
	}
	else{
		while(curr3 != NULL){
			if(curr3->checkQ != 0){
				continue;
			}
			else{
				printf("Queue -%d\n", queue3);
				printf("Patient's Name : %s\n", curr3->name);
				printf("Doctor's Name : %s\n", curr3->doc);
				if(curr3->status == 1){
					printf("Status : BPJS\n");
				}
				if(curr3->status == 2){
					printf("Status : Inhealth\n");
				}
				if(curr3->status == 3){
					printf("Status : Mandiri\n");
				}
				curr3->queue = queue3;
				queue3++;
				curr3 = curr3->next;
				printf("\n");
			}
		}
	}
	
	printf("Nutrition Clinic\n");
	if(front4 == NULL){
		printf("Empty!\n");
	}
	else{
		while(curr4 != NULL){
			if(curr4->checkQ != 0){
				continue;
			}
			else{
				printf("Queue -%d\n", queue4);
				printf("Patient's Name : %s\n", curr4->name);
				printf("Doctor's Name : %s\n", curr4->doc);
				if(curr4->status == 1){
					printf("Status : BPJS\n");
				}
				if(curr4->status == 2){
					printf("Status : Inhealth\n");
				}
				if(curr4->status == 3){
					printf("Status : Mandiri\n");
				}
				curr4->queue = queue4;
				queue4++;
				curr4 = curr4->next;
				printf("\n");
			}
		}
	}
	printf("\n");
	printf("Press Enter to Continue...");getch();
	system("cls");
}		

			
void outpatient(){
	system("cls");
	struct node1 *curr1 = front1;
	struct node2 *curr2 = front2;
	struct node3 *curr3 = front3;
	struct node4 *curr4 = front4;
	
	char pat_name[30];
	int opt;
	
	printf("Input Patient's Name : ");getchar();
	scanf("%[^\n]", pat_name);
	printf("Patient examination process. Press Enter to Continue...");getch();
	
	while(curr1 != NULL){
		if(strcmp(curr1->name, pat_name) == 0){
			printf("\nComplaints\n");
			printf("1. Fever\n");
			printf("2. Toothache\n");
			printf("3. Chapped Lips\n");
			printf("4. Indigestion\n");
			printf("Enter Option : ");
			scanf("%d", &opt);
			
			if(opt == 1){
				strcpy(curr1->diagnose, "Fever");
			}
			if(opt == 2){
				strcpy(curr1->diagnose, "Toothache");
			}
			if(opt == 3){
				strcpy(curr1->diagnose, "Chapped Lips");
			}
			if(opt == 4){
				strcpy(curr1->diagnose, "Indigestion");
			}
			if(strlen(curr1->diagnose) != 0){
				curr1->checkQ = 1;
			}
			printf("Name : %s\n", curr1->name);
			printf("Diagnose : %s\n", curr1->diagnose);
		}
		curr1 = curr1->next;
	}
	
	while(curr2 != NULL){
		if(strcmp(curr2->name, pat_name) == 0){
			printf("\nComplaints\n");
			printf("1. Fever\n");
			printf("2. Toothache\n");
			printf("3. Chapped Lips\n");
			printf("4. Indigestion\n");
			printf("Enter Option : ");
			scanf("%d", &opt);
				
			if(opt == 1){
				strcpy(curr2->diagnose, "Fever");
			}
			if(opt == 2){
				strcpy(curr2->diagnose, "Toothache");
			}
			if(opt == 3){
				strcpy(curr2->diagnose, "Chapped Lips");
			}
			if(opt == 4){
				strcpy(curr2->diagnose, "Indigestion");
			}
			if(strlen(curr2->diagnose) != 0){
				curr2->checkQ = 1;
			}
			printf("Name : %s\n", curr2->name);
			printf("Diagnose : %s\n", curr2->diagnose);
		}
	curr2 = curr2->next;
	}
	
		

	while(curr3 != NULL){
		if(strcmp(curr3->name, pat_name) == 0){
			printf("\nComplaints\n");
			printf("1. Fever\n");
			printf("2. Toothache\n");
			printf("3. Chapped Lips\n");
			printf("4. Indigestion\n");
			printf("Enter Option : ");
			scanf("%d", &opt);
				
			if(opt == 1){
				strcpy(curr3->diagnose, "Fever");
			}
			if(opt == 2){
				strcpy(curr3->diagnose, "Toothache");
			}
			if(opt == 3){
				strcpy(curr3->diagnose, "Chapped Lips");
			}
			if(opt == 4){
				strcpy(curr3->diagnose, "Indigestion");
			}
			if(strlen(curr3->diagnose) != 0){
				curr3->checkQ = 1;
			}
			printf("Name : %s\n", curr3->name);
			printf("Diagnose : %s\n", curr3->diagnose);
		}
		curr3 = curr3->next;
	}
	
	
	while(curr4 != NULL){
		if(strcmp(curr4->name, pat_name) == 0){
			printf("\nComplaints\n");
			printf("1. Fever\n");
			printf("2. Toothache\n");
			printf("3. Chapped Lips\n");
			printf("4. Indigestion\n");
			printf("Enter Option : ");
			scanf("%d", &opt);
				
			if(opt == 1){
				strcpy(curr4->diagnose, "Fever");
			}
			if(opt == 2){
				strcpy(curr4->diagnose, "Toothache");
			}
			if(opt == 3){
				strcpy(curr4->diagnose, "Chapped Lips");
			}
			if(opt == 4){
				strcpy(curr4->diagnose, "Indigestion");
			}
			if(strlen(curr4->diagnose) != 0){
				curr4->checkQ = 1;
			}
			printf("Name : %s\n", curr4->name);
			printf("Diagnose : %s\n", curr4->diagnose);
		}
		curr4 = curr4->next;
	}
	printf("\n");
	printf("Please go to the pharmacy to pick up the medicine. Press Enter to Continue...");getch();
	system("cls");
	}



void pharmacy(){
	system("cls");
	struct node1 *curr1 = front1;
	struct node2 *curr2 = front2;
	struct node3 *curr3 = front3;
	struct node4 *curr4 = front4;
	
	int count = 1;
	printf("QUEUE\n");
	printf("============================\n");
	printf("Pedriatic\n");
	if(front1 == NULL){
		printf("Empty\n");
	}
	else{
		while(curr1 != NULL){
			if(curr1->checkQ == 1){
				printf("Queue -%d\n", count);
				printf("Patien's Name : %s\n", curr1->name);
				printf("Doctor's Name : %s\n", curr1->doc);
				if(curr1->status == 1){
					printf("Status : BPJS\n");
				}
				if(curr1->status == 2){
					printf("Status : Inhealth\n");
				}
				if(curr1->status == 3){
					printf("Status : Mandiri\n");
				}
				curr1->queue = count;
				count++;
				curr1 = curr1->next;
			}
			else{
				curr1 = curr1->next;
				continue;
			}
		}
		printf("\n");
	}
	
	printf("Dental\n");
	if(front2 == NULL){
		printf("Empty\n");
	}
	else{
		while(curr2 != NULL){
			if(curr2->checkQ == 1){
				printf("Queue -%d\n", count);
				printf("Patien's Name : %s\n", curr2->name);
				printf("Doctor's Name : %s\n", curr2->doc);
				if(curr2->status == 1){
					printf("Status : BPJS\n");
				}
				if(curr2->status == 2){
					printf("Status : Inhealth\n");
				}
				if(curr2->status == 3){
					printf("Status : Mandiri\n");
				}
				curr2->queue = count;
				count++;
				curr2 = curr2->next;
			}
			else{
				curr2 = curr2->next;
				continue;
			}
		}
		printf("\n");
	}
	
	printf("Beauty\n");
	if(front3 == NULL){
		printf("Empty\n");
	}
	else{
		while(curr3 != NULL){
			if(curr3->checkQ == 1){
				printf("Queue -%d\n", count);
				printf("Patien's Name : %s\n", curr3->name);
				printf("Doctor's Name : %s\n", curr3->doc);
				if(curr3->status == 1){
					printf("Status : BPJS\n");
				}
				if(curr3->status == 2){
					printf("Status : Inhealth\n");
				}
				if(curr3->status == 3){
					printf("Status : Mandiri\n");
				}
				curr3->queue = count;
				count++;
				curr3 = curr3->next;
			}
			else{
				curr3 = curr3->next;
				continue;
			}
		}
		printf("\n");
	}
	
	printf("Nutrition\n");
	if(front4 == NULL){
		printf("Empty\n");
	}
	else{
		while(curr4 != NULL){
			if(curr4->checkQ == 1){
				printf("Queue -%d\n", count);
				printf("Patien's Name : %s\n", curr4->name);
				printf("Doctor's Name : %s\n", curr4->doc);
				if(curr4->status == 1){
					printf("Status : BPJS\n");
				}
				if(curr4->status == 2){
					printf("Status : Inhealth\n");
				}
				if(curr4->status == 3){
					printf("Status : Mandiri\n");
				}
				curr4->queue = count;
				count++;
				curr4 = curr4->next;
			}
			else{
				curr4 = curr4->next;
				continue;
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("Press Enter to Continue...");getch();
	system("cls");
}

void drugtaken(){
	system("cls");
	struct node1 *curr1 = front1;
	struct node2 *curr2 = front2;
	struct node3 *curr3 = front3;
	struct node4 *curr4 = front4;
	
	float fever = 25.000, toothache = 30.000, chappedlips = 15.000, indigestion = 35.000;
	int count = 1;
	
	char diagnose1[] = "Fever", diagnose2[] = "Toothache", diagnose3[] = "Chapped Lips", diagnose4[] = "Indigestion";
	printf("List of Drug Taken\n");
	printf("===========================\n");
	while(curr1 != NULL){
		if(curr1->checkQ == 1){
			printf("Queue -%d\n", count);
			printf("Patien's Name : %s\n", curr1->name);
			printf("Doctor's Name : %s\n", curr1->doc);
			printf("Diagnose : %s\n", curr1->diagnose);
			if(curr1->status == 1){
				printf("Status : BPJS\n");
			}
			if(curr1->status == 2){
				printf("Status : Inhealth\n");
			}
			if(curr1->status == 3){
				printf("Status : Mandiri\n");
			}
			if(strcmp(curr1->diagnose, diagnose1) == 0){
				printf("Price : %.3f", fever);
				curr1->pay = fever;
			}
			if(strcmp(curr1->diagnose, diagnose2) == 0){
				printf("Price : %.3f", toothache);
				curr1->pay = toothache;
			}
			if(strcmp(curr1->diagnose, diagnose3) == 0){
				printf("Price : %.3f", chappedlips);
				curr1->pay = chappedlips;
			}
			if(strcmp(curr1->diagnose, diagnose4) == 0){
				printf("Price : %.3f", indigestion);
				curr1->pay = indigestion;
			}
			curr1->checkQ = 2;
			curr1->queue = count;
			count++;
			curr1 = curr1->next;
		}
		else{
			curr1 = curr1->next;
			continue;
		}
		printf("\n");
	}
	
	while(curr2 != NULL){
		if(curr2->checkQ == 1){
			printf("Queue -%d\n", count);
			printf("Patien's Name : %s\n", curr2->name);
			printf("Doctor's Name : %s\n", curr2->doc);
			printf("Diagnose : %s\n", curr2->diagnose);
			if(curr2->status == 1){
				printf("Status : BPJS\n");
			}
			if(curr2->status == 2){
				printf("Status : Inhealth\n");
			}
			if(curr2->status == 3){
				printf("Status : Mandiri\n");
			}
			if(strcmp(curr2->diagnose, diagnose1) == 0){
				printf("Price : %.3f", fever);
				curr2->pay = fever;
			}
			if(strcmp(curr2->diagnose, diagnose2) == 0){
				printf("Price : %.3f", toothache);
				curr2->pay = toothache;
			}
			if(strcmp(curr2->diagnose, diagnose3) == 0){
				printf("Price : %.3f", chappedlips);
				curr2->pay = chappedlips;
			}
			if(strcmp(curr2->diagnose, diagnose4) == 0){
				printf("Price : %.3f", indigestion);
				curr2->pay = indigestion;
			}
			curr2->checkQ = 2;
			curr2->queue = count;
			count++;
			curr2 = curr2->next;
		}
		else{
			curr2 = curr2->next;
			continue;
		}
		printf("\n");
	}
	
	while(curr3 != NULL){
		if(curr3->checkQ == 1){
			printf("Queue -%d\n", count);
			printf("Patien's Name : %s\n", curr3->name);
			printf("Doctor's Name : %s\n", curr3->doc);
			printf("Diagnose : %s\n", curr3->diagnose);
			if(curr3->status == 1){
				printf("Status : BPJS\n");
			}
			if(curr3->status == 2){
				printf("Status : Inhealth\n");
			}
			if(curr3->status == 3){
				printf("Status : Mandiri\n");
			}
			if(strcmp(curr3->diagnose, diagnose1) == 0){
				printf("Price : %.3f", fever);
				curr3->pay = fever;
			}
			if(strcmp(curr3->diagnose, diagnose2) == 0){
				printf("Price : %.3f", toothache);
				curr3->pay = toothache;
			}
			if(strcmp(curr3->diagnose, diagnose3) == 0){
				printf("Price : %.3f", chappedlips);
				curr3->pay = chappedlips;
			}
			if(strcmp(curr3->diagnose, diagnose4) == 0){
				printf("Price : %.3f", indigestion);
				curr3->pay = indigestion;
			}
			curr3->checkQ = 2;
			curr3->queue = count;
			count++;
			curr3 = curr3->next;
		}
		else{
			curr3 = curr3->next;
			continue;
		}
		printf("\n");
	}
	
	while(curr4 != NULL){
		if(curr4->checkQ == 1){
			printf("Queue -%d\n", count);
			printf("Patien's Name : %s\n", curr4->name);
			printf("Doctor's Name : %s\n", curr4->doc);
			printf("Diagnose : %s\n", curr4->diagnose);
			if(curr4->status == 1){
				printf("Status : BPJS\n");
			}
			if(curr4->status == 2){
				printf("Status : Inhealth\n");
			}
			if(curr4->status == 3){
				printf("Status : Mandiri\n");
			}
			if(strcmp(curr4->diagnose, diagnose1) == 0){
				printf("Price : %.3f", fever);
				curr4->pay = fever;
			}
			if(strcmp(curr4->diagnose, diagnose2) == 0){
				printf("Price : %.3f", toothache);
				curr4->pay = toothache;
			}
			if(strcmp(curr4->diagnose, diagnose3) == 0){
				printf("Price : %.3f", chappedlips);
				curr4->pay = chappedlips;
			}
			if(strcmp(curr4->diagnose, diagnose4) == 0){
				printf("Price : %.3f", indigestion);
				curr4->pay = indigestion;
			}
			curr4->checkQ = 2;
			curr4->queue = count;
			count++;
			curr4 = curr4->next;
		}
		else{
			curr4 = curr4->next;
			continue;
		}
		printf("\n");
	}
	printf("\n");
	printf("Please go to the payment menu. Press Enter to Continue...");getch();
	system("cls");
}

void payment(){
	system("cls");
	struct node1 *curr1 = front1;
	struct node2 *curr2 = front2;
	struct node3 *curr3 = front3;
	struct node4 *curr4 = front4;
	
	float pay1 = 45.000, pay2 = 100.000, pay3 = 35.000, pay4 = 50.000, admin = 3.000;
	while(curr1 != NULL){
		if(curr1->checkQ == 2){
			printf("Queue -%d\n", curr1->queue);
			printf("Patient's Name : %s\n", curr1->name);
			printf("Doctor's Name : %s\n", curr1->doc);
			float sum1 = curr1->pay + pay1 + admin;
			printf("Total Price : %.3f\n", sum1);
			curr1->pay = sum1;
			if(curr1->status == 1 || curr1->status == 2){
				printf("The cost are covered by insurance\n");
			}
			if(curr1->status == 3){
				printf("Please proced to the cashier\n");
			}
			curr1->checkQ = 3;
			curr1 = curr1->next;
		}
	}
	
	while(curr2 != NULL){
		if(curr2->checkQ == 2){
			printf("Queue -%d\n", curr2->queue);
			printf("Patient's Name : %s\n", curr2->name);
			printf("Doctor's Name : %s\n", curr2->doc);
			float sum2 = curr2->pay + pay2 + admin;
			printf("Total Price : %.3f\n", sum2);
			curr2->pay = sum2;
			if(curr2->status == 1 || curr2->status == 2){
				printf("The cost are covered by insurance\n");
			}
			if(curr2->status == 3){
				printf("Please proced to the cashier\n");
			}
			curr2->checkQ = 3;
			curr2 = curr2->next;
		}
	}
	
	while(curr3 != NULL){
		if(curr3->checkQ == 2){
			printf("Queue -%d\n", curr3->queue);
			printf("Patient's Name : %s\n", curr3->name);
			printf("Doctor's Name : %s\n", curr3->doc);
			float sum3 = curr3->pay + pay3 + admin;
			printf("Total Price : %.3f\n", sum3);
			curr3->pay = sum3;
			if(curr3->status == 1 || curr3->status == 2){
				printf("The cost are covered by insurance\n");
			}
			if(curr3->status == 3){
				printf("Please proced to the cashier\n");
			}
			curr3->checkQ = 3;
			curr3 = curr3->next;
		}
	}
	
	while(curr4 != NULL){
		if(curr4->checkQ == 2){
			printf("Queue -%d\n", curr4->queue);
			printf("Patient's Name : %s\n", curr4->name);
			printf("Doctor's Name : %s\n", curr4->doc);
			float sum4 = curr1->pay + pay4 + admin;
			printf("Total Price : %.3f\n", sum4);
			curr4->pay = sum4;
			if(curr4->status == 1 || curr4->status == 2){
				printf("The cost are covered by insurance\n");
			}
			if(curr4->status == 3){
				printf("Please proced to the cashier\n");
			}
			curr4->checkQ = 3;
			curr4 = curr4->next;
		}
	}
	printf("\n");
	printf("Press Enter to Continue...");getch();
	system("cls");
}


int main(int argc, char *argv[]) {
	system("cls");
	int opt = -1;
	do{
		printf("1. List of Doctors\n");
		printf("2. Registration\n");
		printf("3. Current Clinic Queue\n");
		printf("4. Outpatient\n");
		printf("5. Pharmacy Queue\n");
		printf("6. Drug Taken\n");
		printf("7. Payment\n");
		printf("8. Exit\n");
		printf("Enter Option : ");
		scanf("%d", &opt);
		
		switch(opt){
			case 1:list_of_doctors();break;
			case 2:registration();break;
			case 3:current_clinic();break;
			case 4:outpatient();break;
			case 5:pharmacy();break;
			case 6:drugtaken();break;
			case 7:payment();break;
			case 8:exit(1);break;
		}
	}while(opt != 8);
	return 0;
}
