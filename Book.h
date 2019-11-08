/*
ABDUL HAFIZ BIN GANI,
BI18110112,
UNIVERSITI MALAYSIA SABAH,

Copyright © 2019,
All rights reserved.
*/


#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>

using namespace std;

class book
{
private:
	int choose, choosemvie;
	string dateshow, timeshow, name, id, fileb, NoOfSeats;

public:
	void signin()//for registered user to enter their name and id
	{
		cout << "Enter Name : " << endl;//user enter their name
		cin >> name;

		cout << "Enter ID : " << endl;//user enter their ID
		cin >> id;
		system("CLS");
	}

	void Choices()//For user to make choice
	{
		cout << "1. Choose Movie" << endl;//User can choose and book movie
		cout << "2. Check Booking" << endl;//User can check their booking
		cout << "3. Exit" << endl;//User can exit after done everything
		cin >> choose;
		system("CLS");

		if (choose == 1)
		{
			cout << "\t\t ******List Of Movies******* \t\t" << endl;
			cout << "1. GERAN" << endl;
			cout << "2. AVENGERS ENDGAME" << endl;
			cout << "3. WEATHERING WITH YOU" << endl;
			cout << "4. ONE PIECE STAMPEDE" << endl;
			cout << "5. JOKER" << endl;
			cout << "6. ZOMBIELAND : DOUBLE TAP" << endl;
			cout << "Choice : " << endl;
			cin >> choosemvie;
			system("CLS");

			if (choosemvie == 1)
			{
				cout << "Enter Date(DD/MM/YYYY) : " << endl;
				cin >> dateshow;
				system("CLS");

				cout << "\t\t *******SHOWTIMES*******\t\t" << endl;
				cout << "1000" << endl;
				cout << "1100" << endl;
				cout << "1200" << endl;
				cout << "1300" << endl;
				cout << "1400" << endl;
				cout << "1500" << endl;
				cout << "1600" << endl;
				cout << "1700" << endl;
				cout << "1800" << endl;
				cout << "1900" << endl;
				cout << "2000" << endl;
				cout << "2100" << endl;
				cout << "2200" << endl;

				cout << "Enter Showtimes : " << endl;
				cin >> timeshow;
				system("CLS");

				cout << "\t\t *******Seats Available******* \t\t" << endl;
				cout << "A1, A3, A5, A7, A9, A13, A15, A17" << endl;
				cout << "B2, B5, B6, B8, B10, B13, B14, B17" << endl;
				cout << "C1, C2, C3, C6, C7, C8, C9, C11" << endl;
				cout << "D3, D4, D5, D8, D10, D12, D15, D16" << endl;
				cout << "E5, E7, E10, E13, E14, E16, E18, E19" << endl;

				cout << "Enter Seats" << endl;
				cin >> NoOfSeats;
			}

			else if (choosemvie == 2)
			{
				cout << "Enter Date(DD/MM/YYYY) : " << endl;
				cin >> dateshow;
				system("CLS");

				cout << "\t\t *******SHOWTIMES*******\t\t" << endl;
				cout << "1000" << endl;
				cout << "1100" << endl;
				cout << "1200" << endl;
				cout << "1300" << endl;
				cout << "1400" << endl;
				cout << "1500" << endl;
				cout << "1600" << endl;
				cout << "1700" << endl;
				cout << "1800" << endl;
				cout << "1900" << endl;
				cout << "2000" << endl;
				cout << "2100" << endl;
				cout << "2200" << endl;

				cout << "Enter Showtimes : " << endl;
				cin >> timeshow;
				system("CLS");

				cout << "\t\t *******Seats Available******* \t\t" << endl;
				cout << "A1, A3, A5, A7, A9, A13, A15, A17" << endl;
				cout << "B2, B5, B6, B8, B10, B13, B14, B17" << endl;
				cout << "C1, C2, C3, C6, C7, C8, C9, C11" << endl;
				cout << "D3, D4, D5, D8, D10, D12, D15, D16" << endl;
				cout << "E5, E7, E10, E13, E14, E16, E18, E19" << endl;

				cout << "Enter Seats" << endl;
				cin >> NoOfSeats;
			}

			else if (choosemvie == 3)
			{
				cout << "Enter Date(DD/MM/YYYY) : " << endl;
				cin >> dateshow;
				system("CLS");

				cout << "\t\t *******SHOWTIMES*******\t\t" << endl;
				cout << "1000" << endl;
				cout << "1100" << endl;
				cout << "1200" << endl;
				cout << "1300" << endl;
				cout << "1400" << endl;
				cout << "1500" << endl;
				cout << "1600" << endl;
				cout << "1700" << endl;
				cout << "1800" << endl;
				cout << "1900" << endl;
				cout << "2000" << endl;
				cout << "2100" << endl;
				cout << "2200" << endl;

				cout << "Enter Showtimes : " << endl;
				cin >> timeshow;
				system("CLS");

				cout << "\t\t *******Seats Available******* \t\t" << endl;
				cout << "A1, A3, A5, A7, A9, A13, A15, A17" << endl;
				cout << "B2, B5, B6, B8, B10, B13, B14, B17" << endl;
				cout << "C1, C2, C3, C6, C7, C8, C9, C11" << endl;
				cout << "D3, D4, D5, D8, D10, D12, D15, D16" << endl;
				cout << "E5, E7, E10, E13, E14, E16, E18, E19" << endl;

				cout << "Enter Seats" << endl;
				cin >> NoOfSeats;
			}

			else if (choosemvie == 4)
			{
				cout << "Enter Date(DD/MM/YYYY) : " << endl;
				cin >> dateshow;
				system("CLS");

				cout << "\t\t *******SHOWTIMES*******\t\t" << endl;
				cout << "1000" << endl;
				cout << "1100" << endl;
				cout << "1200" << endl;
				cout << "1300" << endl;
				cout << "1400" << endl;
				cout << "1500" << endl;
				cout << "1600" << endl;
				cout << "1700" << endl;
				cout << "1800" << endl;
				cout << "1900" << endl;
				cout << "2000" << endl;
				cout << "2100" << endl;
				cout << "2200" << endl;

				cout << "Enter Showtimes : " << endl;
				cin >> timeshow;
				system("CLS");

				cout << "\t\t *******Seats Available******* \t\t" << endl;
				cout << "A1, A3, A5, A7, A9, A13, A15, A17" << endl;
				cout << "B2, B5, B6, B8, B10, B13, B14, B17" << endl;
				cout << "C1, C2, C3, C6, C7, C8, C9, C11" << endl;
				cout << "D3, D4, D5, D8, D10, D12, D15, D16" << endl;
				cout << "E5, E7, E10, E13, E14, E16, E18, E19" << endl;

				cout << "Enter Seats" << endl;
				cin >> NoOfSeats;
			}

			else if (choosemvie == 5)
			{
				cout << "Enter Date(DD/MM/YYYY) : " << endl;
				cin >> dateshow;
				system("CLS");

				cout << "\t\t *******SHOWTIMES*******\t\t" << endl;
				cout << "1000" << endl;
				cout << "1100" << endl;
				cout << "1200" << endl;
				cout << "1300" << endl;
				cout << "1400" << endl;
				cout << "1500" << endl;
				cout << "1600" << endl;
				cout << "1700" << endl;
				cout << "1800" << endl;
				cout << "1900" << endl;
				cout << "2000" << endl;
				cout << "2100" << endl;
				cout << "2200" << endl;

				cout << "Enter Showtimes : " << endl;
				cin >> timeshow;
				system("CLS");

				cout << "\t\t *******Seats Available******* \t\t" << endl;
				cout << "A1, A3, A5, A7, A9, A13, A15, A17" << endl;
				cout << "B2, B5, B6, B8, B10, B13, B14, B17" << endl;
				cout << "C1, C2, C3, C6, C7, C8, C9, C11" << endl;
				cout << "D3, D4, D5, D8, D10, D12, D15, D16" << endl;
				cout << "E5, E7, E10, E13, E14, E16, E18, E19" << endl;

				cout << "Enter Seats" << endl;
				cin >> NoOfSeats;
			}

			else if (choosemvie == 6)
			{
				cout << "Enter Date(DD/MM/YYYY) : " << endl;
				cin >> dateshow;
				system("CLS");

				cout << "\t\t *******SHOWTIMES*******\t\t" << endl;
				cout << "1000" << endl;
				cout << "1100" << endl;
				cout << "1200" << endl;
				cout << "1300" << endl;
				cout << "1400" << endl;
				cout << "1500" << endl;
				cout << "1600" << endl;
				cout << "1700" << endl;
				cout << "1800" << endl;
				cout << "1900" << endl;
				cout << "2000" << endl;
				cout << "2100" << endl;
				cout << "2200" << endl;

				cout << "Enter Showtimes : " << endl;
				cin >> timeshow;
				system("CLS");

				cout << "\t\t *******Seats Available******* \t\t" << endl;
				cout << "A1, A3, A5, A7, A9, A13, A15, A17" << endl;
				cout << "B2, B5, B6, B8, B10, B13, B14, B17" << endl;
				cout << "C1, C2, C3, C6, C7, C8, C9, C11" << endl;
				cout << "D3, D4, D5, D8, D10, D12, D15, D16" << endl;
				cout << "E5, E7, E10, E13, E14, E16, E18, E19" << endl;

				cout << "Enter Seats" << endl;
				cin >> NoOfSeats;
			}

			else
			{
				system("CLS");
				cout << "Wrong input" << endl;
				return;
				system("PAUSE");
			}
		}

		else if (choose == 2)
		{
			system("CLS");
			ifstream savefile;
			fileb = "D:/Book_Ticket/Debug/Book.txt";

			savefile.open(fileb.c_str());

			string booking;
			const int Booking_Find = 6;

			for (int i = 0; i < Booking_Find; i++)
			{
				getline(savefile, booking);

				if (i == 0) 
				{
					cout << booking << endl << endl;
				}
				if (i == 1) 
				{
					cout << booking << endl << endl;
				}
				if (i == 2) 
				{
					cout << booking << endl << endl;
				}
				if (i == 3) 
				{
					cout << booking << endl << endl;
				}
				if (i == 4) 
				{
					cout << booking << endl << endl;
				}

				if (i == 5)
				{
					cout << booking << endl << endl;
				}

				if (i == 6)
				{
					cout << booking << endl << endl;
				}
			}
			system("PAUSE");
		}

		else if (choose == 3)
		{
			system("CLS");
			cout << "Thank You For Booking with Us!" << endl;
			cout << "Enjoy Your Movie." << endl;
			system("PAUSE");
		}
	}

	void streamfile()//Save file
	{
		string file;
		file = "D:/Book_Ticket/Debug/Book.txt";
		ofstream outfile;
		outfile.open(file.c_str());
		outfile << "Name\t\t : " << name << endl;
		outfile << "ID\t\t : " << id << endl;
		outfile << "Date\t\t : " << dateshow << endl;
		outfile << "Showtimes\t : " << timeshow << endl;
		outfile << "Seats\t\t : " << NoOfSeats << endl;

		if (choosemvie == 1)
		{
			outfile << "GERAN" << endl;
		}
		
		else if (choosemvie == 2)
		{
			outfile << "AVENGERS ENDGAME" << endl;
		}

		else if (choosemvie == 3)
		{
			outfile << "WEATHERING WITH YOU" << endl;
		}

		else if (choosemvie == 4)
		{
			outfile << "ONE PIECE STAMPEDE" << endl;
		}

		else if (choosemvie == 5)
		{
			outfile << "JOKER" << endl;
		}

		else if (choosemvie == 6)
		{
			outfile << "ZOMBIELAND : DOUBLE TAP" << endl;
		}

		else
		{
			cout << "Movie not in the list" << endl;
		}

		outfile << endl;
		outfile.close();
		ifstream saveFile;
		saveFile.open("Book.txt");
	}

	void connect()//Connect all function
	{
		book::Choices();
		book::streamfile();
	}
};

#pragma once
