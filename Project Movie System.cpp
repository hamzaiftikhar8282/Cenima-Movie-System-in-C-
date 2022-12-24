#include <iostream>
#include <string>
#include <string.h>
#include<fstream>
#include<sstream>
#include<ctime>
//HAMZA IFTIKHAR 049 
//M.ABDULLAH 019 
//ZAIGHAM FURQAN 018 
using namespace std;
class cities {
protected:
	//char *city1;
	char city[6][30] = { "ISLAMABAD", "LAHORE", "KARACHI", "MULTAN", "SIALKOT", "RAWALPINDI" };
	int id_city;
public:
	void read_city()
	{
		int i = 0;
		cout << "\t\t\t\t\tCITIES: " << endl;
		for (i = 0; i < 6; i++)
		{
			cout << "\t\t\t\tEnter (" << i << ") for " << city[i] << endl;
		}
		cout << endl;
		cout << "Please enter the id with your city: "; cin >> id_city;
		//city1 = city[id_city];
	}

	//void display_city()
	//{

	//}
};
class cinemas :public cities {
protected:
	//char *cinema;
	char cinema1[12][30] = { "CINEPLEX ISLAMABAD", "CINEPAX ISLAMABAD", "CINESTAR CINEMA", "UNIVERSAL CINEMA", "NUPLEX CINEMA", "ATRIUM CINEMA", "REX CINEMA", "DREAMLAND CINEMA", "CINE MEHFIL CINEMA", "SUPER CINEMA", "JINNAH PARK CINEMA", "ODEON CINEMA" };
	int id_cinema, i = 0;
public:
	void read_cinema()
	{
		read_city();
		system("cls");
		if (id_city == 0)
		{
			cout << "\t\t\t\t\tCINEMAS:" << endl;
			for (i = 0; i < 2; i++)
			{
				cout << "\t\t\t\tEnter (" << i << ") for " << cinema1[i] << endl;
			}
		}
		if (id_city == 1)
		{
			cout << "\t\t\t\t\tCINEMAS:" << endl;
			for (i = 2; i < 4; i++)
			{
				cout << "\t\t\t\tEnter (" << i << ") for " << cinema1[i] << endl;
			}
		}
		if (id_city == 2)
		{
			cout << "\t\t\t\t\tCINEMAS:" << endl;
			for (i = 4; i < 6; i++)
			{
				cout << "\t\t\t\tEnter (" << i << ") for " << cinema1[i] << endl;
			}
		}
		if (id_city == 3)
		{
			cout << "\t\t\t\t\tCINEMAS:" << endl;
			for (i = 6; i < 8; i++)
			{
				cout << "\t\t\t\tEnter (" << i << ") for " << cinema1[i] << endl;
			}
		}
		if (id_city == 4)
		{
			cout << "\t\t\t\t\tCINEMAS:" << endl;
			for (i = 8; i < 10; i++)
			{
				cout << "\t\t\t\tEnter (" << i << ") for " << cinema1[i] << endl;
			}
		}
		if (id_city == 5)
		{
			cout << "\t\t\t\t\tCINEMAS:" << endl;
			for (i = 10; i < 12; i++)
			{
				cout << "\t\t\t\tEnter (" << i << ") for " << cinema1[i] << endl;
			}
		}
		cout << "\t\t\t\tPlease Enter id from the given cinemas: "; cin >> id_cinema;
		//cinema = cinema1[id_cinema];
	}
};
class movies :public cinemas {
protected:
	char movie_type;

	//char movie;
	char movie[15][30] = { "DIL TERA HOGYA", "TERI MERI KAHANI", "YE JAWANI PHIR NAHI ANI", "LOVE SIYAPA", "TUM NA MILEY", "IT", "ANABELLA", "THE 8TH NIGHT ", "OXYGEN", "RED NOTICE", "GABBAR SINGH", "WAR", "AJAB PREM KI GHAZAB KAHANI", "DHAMAKA", "MAIN HOON NA" };
	int time[3] = { 1, 5, 9 };
	int id_type, id_movie,id_time;
public:
	void read_movie()
	{
		char movie_type[3][30] = { "LOLLYWOOD", "HOLLYWOOD", "BOLLYWOOD" };

		read_cinema();
		system("cls");
		cout << "\t\t\t\t\tTYPES: " << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << "\t\t\t\tEnter (" << i << ") for type " << movie_type[i] << endl;
		}
		cout << "Enter movie type: ";
		cin >> id_type;
		system("cls");
			if (id_type == 0)
			{
				for (int i = 0; i < 5; i++)
				{
					
					
						
						if (cinema1[id_cinema] == cinema1[0] || cinema1[id_cinema] == cinema1[2] || cinema1[id_cinema] == cinema1[4] || cinema1[id_cinema] == cinema1[6] || cinema1[id_cinema] == cinema1[8] || cinema1[id_cinema] == cinema1[10])
						{
							if (i < 2)
							{
							
								cout << "\t\t\t\tEnter (" << i << ") for movie " << movie[i] << endl;
							}
						}
						if (cinema1[id_cinema] == cinema1[1] || cinema1[id_cinema] == cinema1[3] || cinema1[id_cinema] == cinema1[5] || cinema1[id_cinema] == cinema1[7] || cinema1[id_cinema] == cinema1[9] || cinema1[id_cinema] == cinema1[11])
						{
							if (i >= 2)
							{
								
								cout << "\t\t\t\tEnter (" << i << ") for movie " << movie[i] <<  endl;
								
							}
						}
						
					
				}
			}
			if (id_type == 1)
			{
				for (int i = 5; i < 10; i++)
				{
					
					
						
						if (cinema1[id_cinema] == cinema1[1] || cinema1[id_cinema] == cinema1[3] || cinema1[id_cinema] == cinema1[5] || cinema1[id_cinema] == cinema1[7] || cinema1[id_cinema] == cinema1[9] || cinema1[id_cinema] == cinema1[11])
						{
							if (i < 8)
							{
								
								cout << "\t\t\t\tEnter (" << i << ") for movie " << movie[i] <<  endl;
							}
						}
						if (cinema1[id_cinema] == cinema1[0] || cinema1[id_cinema] == cinema1[2] || cinema1[id_cinema] == cinema1[4] || cinema1[id_cinema] == cinema1[6] || cinema1[id_cinema] == cinema1[8] || cinema1[id_cinema] == cinema1[10])
						{
							if (i >= 8)
							{
								
								cout << "\t\t\t\tEnter (" << i << ") for movie " << movie[i] << endl;
								
							}
						}
						
				
				}
			}
			if (id_type == 2)
			{
				for (int i = 10; i < 15; i++)
				{
					
					
						if (cinema1[id_cinema] == cinema1[0] || cinema1[id_cinema] == cinema1[2] || cinema1[id_cinema] == cinema1[4] || cinema1[id_cinema] == cinema1[6] || cinema1[id_cinema] == cinema1[8] || cinema1[id_cinema] == cinema1[10])
						{
							if (i < 13)
							{
								
								cout << "\t\t\t\tEnter (" << i << ") for movie " << movie[i] <<  endl;
							}
						}
						if (cinema1[id_cinema] == cinema1[1] || cinema1[id_cinema] == cinema1[3] || cinema1[id_cinema] == cinema1[5] || cinema1[id_cinema] == cinema1[7] || cinema1[id_cinema] == cinema1[9] || cinema1[id_cinema] == cinema1[11])
						{
							if (i >= 13)
							{
								
								
								cout << "\t\t\t\tEnter (" << i << ") for movie " << movie[i] <<  endl;
							}
						}
					
				}
			}
			
		
		cout << "Enter movie: "; cin >> id_movie;
		if (id_movie == 0 ||id_movie == 3 ||id_movie==6||id_movie==8||id_movie==11||id_movie==13 )
		{
			id_time = 1;
		}
		else if (id_movie==1||id_movie==4||id_movie==7||id_movie==12||id_movie==14)
		{
			id_time = 2;
		}
		else if (id_movie==2||id_movie==5||id_movie==9||id_movie==10)
		{
			id_time = 0;
		}
	}
	void display()
	{

		cout << endl << endl;
		cout << endl;
		cout << "\t\tCITY         : " << city[id_city] << endl;
		cout << "\t\tCINEMA       : " << cinema1[id_cinema] << endl;
		cout << "\t\tMOVIE        : " << movie[id_movie] << endl;
		cout << "\t\tTIME         : " << time[id_time] << ":00 PM." << endl;
		cout << endl;
	}
	void display_menu()
	{
		int k = 0;
		cout << "CITY AND THEIR CENIMAS:" << endl;
		for (int i = 0; i < 6; i++)
		{
			cout << "City: " << city[i] << endl;
			for (int j = k; j < k + 2; j++)
			{
				cout << "Cenima: " << cinema1[j] << endl;
			}
			k = k + 2;
		}
	}

};
class seats{
	//protected:
	//int k = 0, m = 0;
public:
	char arr[7][7] = { 'L', 'L', 'B', 'L', 'B', 'L', 'L',
		'L', 'B', 'L', 'L', 'L', 'L', 'L',
		'B', 'B', 'L', 'L', 'B', 'L', 'L',
		'L', 'L', 'B', 'B', 'L', 'L', 'L',
		'B', 'L', 'B', 'L', 'L', 'L', 'L',
		'B', 'L', 'B', 'L', 'L', 'L', 'L',
		'B', 'B', 'L', 'L', 'B', 'L', 'L' };
	void arrayy(char arr[][7], int size)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)

			{
				cout << arr[i][j] << "   ";
			}
			cout << endl;
			cout << endl;
		}
	}
	void convert(char arr[][7], int size, int &price, int &k, int &m)

	{

		char ch;
		cout << "Enter the row (0 to 6) in which u want to sit: "; cin >> m;
		cout << "Enter the seat (0 to 6) on which u want to sit: "; cin >> k;
		//cin >> ch;
		// cin>>ch;
		system("cls");
		for (int i = 0; i < size; i++)

		{
			for (int j = 0; j < size; j++)
			{
				if (k > 6 || m > 6)
				{
					cout << "No such row or seat avalible in this theatre. " << endl;
					convert(arr, size, price, k, m);
				}
				else
				{
					if (i == m&&j == k)
					{
						if (arr[i][j] == 'B')
						{
							cout << "SORRY! This seat is already booked. " << endl;
							convert(arr, size, price, k, m);
						}
						else if (m == 6 && k <= 6)
						{
							arr[i][j] -= 10;
							cout << "THANKS FOR BOOKING A GOLDEN SEAT!" << endl;
							price = 1250;
						}
						else
						{
							arr[i][j] -= 10;
							cout << "THANKS FOR BOOKING A SILVER SEAT!" << endl;
							price = 900;
						}
					}
				}
			}

			//cout << endl;

		}
	}
	void display_seat(int &m, int&k)
	{
		cout << "\t\tROW NO       : " << m << endl;
		cout << "\t\tSEAT NO      : " << k << endl;
	}
};
class node :public seats  {
public:
	int size = 7;

	int k = 100, i;
	int o = 0, p = 0;
	movies *M = new movies[k];
	int id = -1;
	char name[50] = {};
	char p_num[50] = {};
	char CNIC[50] = {};
	int price = 0, total_earn = 0;
	node* next = NULL;
	node* prev = NULL;

	void read()
	{
		i = 0;
		cout << endl << endl;
		cout << "\t\t\tTICKET REGISTRATION:" << endl << endl;
		cout << "\t\tEnter NAME: " << endl << endl;
		cin >> name;
		cout << "\t\tEnter CNIC: " << endl << endl;
		cin >> CNIC;
		cout << "\t\tEnter Phone No: " << endl << endl;
		cin >> p_num;
		cout << "\t\tEnter ticket id:" << endl << endl;
		cin >> id;

		//system("cls");
		arrayy(arr, size);
		convert(arr, size, price, o, p);
		arrayy(arr, size);
		system("pause");
		system("cls");

		M[i].read_movie();
		i++;
	}


	void display()
	{
		i = 0;
		cout << "\t\t NAME         : " << name << endl;
		cout << "\t\t CNIC         : " << CNIC << endl;
		cout << "\t\t PHONE NO.    : " << p_num << endl;
		cout << "\t\t ID           : " << id << endl;
		cout << "\t\t TICKET PRICE : " << price << endl;
		display_seat(o, p);
		M[i].display();
		i++;
	}
	/*void total_earned()
	{
	total_earn+=price;
	cout << "TOTAL EARNED  : " << total_earn << endl;
	}*/
};
class ticketsys :public node          //publicing node so you can access seats in main
{
public:
	node* head = NULL;

	node* create_node()
	{
		node* ptr = new node;
		ptr->read();
		return ptr;
	}
	node* find_last()
	{
		node* temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		return temp;
	}
	void reg_tic()
	{
		node* ptr = create_node();
		if (head == NULL)
		{
			head = ptr;
		}
		else
		{
			node* last = find_last();
			ptr->prev = last;
			last->next = ptr;
			ptr->next = NULL;
		}
	}
	void display()
	{
		//cout << "d";
		node* temp = head;
		if (head == NULL)
		{
			cout << "LIST IS EMPTY..." << endl;
		}
		else
		{
			while (temp != NULL)
			{
				temp->display();
				temp = temp->next;
			}
		}
	}
	void search_by_id()
	{
		int s_id = 0;
		cout << "Enter ticket id to get information of that ticket: "; cin >> s_id;
		node* temp = head;
		if (head == NULL)
		{
			cout << "Sorry! No ticket has been registered." << endl;
		}
		while (temp != NULL)
		{
			if (temp->id == s_id)
			{
				cout << "YOUR TICKET ID FOUND: " << endl;
				temp->display();
				break;
			}
			else if (temp->next != NULL)
			{
				temp = temp->next;
			}
			else
			{
				cout << "SORRY! No ticket of such id found..." << endl;
			}
		}
	}
};
void move(ticketsys* TS1, ticketsys* TS2)
{
	int sid = 0;

	//cout << head;
	cout << "ENTER TICKET ID TO CANCEL: "; cin >> sid;
	node* temp = TS1->head;
	//node* temp2 = NULL;
	while (temp != NULL)
	{
		//TS2->head=TS1->head;
		//temp = temp->next;

		if (TS1->head == NULL)
		{
			cout << "SORRY! no ticket is registered yet..." << endl;
		}
		else
		{

			if (temp->id == sid)
			{
				if (TS2->head == NULL)
				{
					node* temp2 = temp;
					if (temp->prev != NULL&&temp->next != NULL)
					{
						temp->prev->next = temp->next;
						temp->next->prev = temp->prev;
					}
					else if (temp->prev == NULL)
					{
						TS1->head = temp->next;
					}
					else if (temp->next == NULL)
					{
						temp->prev->next = NULL;
					}
					temp2->next = NULL;
					TS2->head = temp2;
					cout << "TICKET CANCELLED SUCCESSFULLY!!!" << endl;
				}
				else
				{
					node* temp2 = temp;
					if (temp->prev != NULL && temp->next != NULL)
					{
						temp->prev->next = temp->next;
						temp->next->prev = temp->prev;
					}
					else if (temp->prev == NULL)
					{
						TS1->head = temp->next;
						temp2->next = NULL;
					}
					else if (temp->next == NULL)
					{
						temp->prev->next = NULL;
					}
					//temp2->next = NULL;
					temp2->next = TS2->head;
					TS2->head = temp2;
					cout << "TICKET CANCELLED SUCCESSFULLY!!!" << endl;
				}
			}
			else if (sid != temp->id)
			{
				if (temp == NULL)
					cout << "NO TICKET OF SUCH ID HAS BEEN ISSUED!!!" << endl;
			}

		}
		temp = temp->next;
	}
}

void insert_cancel(ticketsys* TS1, ticketsys* TS2)
{
	int sid = 0;
	//cout << head;
	cout << "ENTER TICKET ID TO REGISTER BACK: "; cin >> sid;
	node* temp = TS1->head;
	//node* temp2 = NULL;
	while (temp != NULL)
	{
		//TS2->head=TS1->head;
		//temp = temp->next;

		if (TS1->head == NULL)
		{
			cout << "SORRY! no ticket is cancelled yet..." << endl;
		}
		else
		{

			if (temp->id == sid)
			{
				if (TS2->head == NULL)
				{
					node* temp2 = temp;
					if (temp->prev != NULL&&temp->next != NULL)
					{
						temp->prev->next = temp->next;
						temp->next->prev = temp->prev;
					}
					else if (temp->prev == NULL)
					{
						TS1->head = temp->next;
					}
					else if (temp->next == NULL)
					{
						temp->prev->next = NULL;
					}
					temp2->next = NULL;
					TS2->head = temp2;
					cout << "TICKET REGISTERED SUCCESSFULLY!!!" << endl;
				}
				else
				{
					node* temp2 = temp;
					if (temp->prev != NULL && temp->next != NULL)
					{
						temp->prev->next = temp->next;
						temp->next->prev = temp->prev;
					}
					else if (temp->prev == NULL)
					{
						TS1->head = temp->next;
						temp2->next = NULL;
					}
					else if (temp->next == NULL)
					{
						temp->prev->next = NULL;
					}
					//temp2->next = NULL;
					temp2->next = TS2->head;
					TS2->head = temp2;
					cout << "TICKET REGISTERED SUCCESSFULLY!!!" << endl;
				}
			}
			else if (sid != temp->id)
			{
				if (temp == NULL)
					cout << "NO TICKET OF SUCH ID HAS BEEN CANCELLED!!!" << endl;
			}

		}
		temp = temp->next;
	}
}

int main()
{
	//int a = 0;
	//cout << " \t\t" << "RESERVATON SEATS: " << endl << endl << endl;
	int size = 7;
	int count = 0;

	int key = 0;

	ticketsys TS1, TS2;
	while (key != 7)
	{
		//	cout << "Enter 0 if u want to check seats. \nEnter 1 if u want to display menu of avalible cinemas.\nEnter 2 if u want to book tickets\nEnter 3 if u want to cancel the booked ticket\nEnter 4 to display booked tickets\nEnter 5 to display cancelled tickets\nEnter 6 if u want to restore cancelled ticket\nEnter 7 to close the program\nEnter your choice: ";




		cout << "\t\t\t\t--------------" << endl;
		cout << "\t\t\t\t|MAIN MENEU: |" << endl;
		cout << "\t\t\t\t--------------" << endl;
		cout << endl << endl << endl << endl << endl << endl;
		cout << "\t\t|------------------------------------------------|" << endl << endl;
		cout << "\t\t| (i)----->> enter 0 for check seats:            |" << endl << endl;
		cout << "\t\t| (ii)---->>enter 1 for AVAILABLE MOVIES:        |" << endl << endl;
		cout << "\t\t| (iii)---->> enter 2 FOR BOOKING TIKCET ONLINE: |" << endl << endl;
		cout << "\t\t| (iv)---->>enter 3 canccel seat:                |" << endl << endl;
		cout << "\t\t| (v)---->>enter 4 FOR CHEK ALL BOOKINGS:        |" << endl << endl;
		cout << "\t\t| (vi)---->>enter 5 FOR CHEK ALL CNECEL TICKETS: |" << endl << endl;
		cout << "\t\t| (vii)----->> enter 6 for restore cancel ticket |" << endl << endl;
		cout << "\t\t| (vii)----->> enter 7 for exit.                 |" << endl << endl;
		cout << "\t\t|------------------------------------------------|" << endl;

		system("color f0");

		cin >> key;
		cout << "\n\n\n\n";
		//TS1.total_earned();
		cout << "TOTAL TICKETS : " << count << endl;
		system("pause");
		system("cls");
		if (key == 0)
		{
			TS1.arrayy(TS1.arr, size);
			system("pause");
			system("cls");
		}
		else if (key == 1)
		{
			TS1.M->display_menu();   //accessing the menu in the class movie through the composition of the ticketsys class.
			system("pause");
			system("cls");

		}
		else if (key == 2)
		{
			cout << "REGISTER TICKET" << endl;
			TS1.reg_tic();
			cout << endl;

			//system("pause");
			system("cls");
			count++;

		}
		else if (key == 3)
		{
			move(&TS1, &TS2);
			system("pause");
			system("cls");
		}
		else if (key == 4)
		{
			cout << "REGISTERED" << endl;
			TS1.display();
			system("pause");
			system("cls");
		}
		else if (key == 5)
		{
			cout << "CANCELLED" << endl;
			TS2.display();
			system("pause");
			system("cls");
		}
		else if (key == 6)
		{
			insert_cancel(&TS2, &TS1);
			system("pause");
			system("cls");
		}

		else
		{
			cout << "---INVALID INPUT: " << endl;
		}

	}
	return 0;
}
