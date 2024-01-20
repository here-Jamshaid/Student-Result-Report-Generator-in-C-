#include<iostream>
using namespace std;
int main()
{
	const int Size = 5;
	int RollNo[Size] = { 0 };
	int mathmarks[Size] = { 0 };
	int compmarks[Size] = { 0 };
	int per[Size] = { 0 };
	int RollNosearch = 0;
	bool RollNofound = 0;
	int StudCount = 0;
	int i = 0;
	int choice1 = 0;
	char choice = 'y';
	char Grade[Size] = { '\0' };
	cout << "                                            WELCOME TO ADMIN PANEL        " << endl << endl;
	cout << "   Enter Roll Numbers and their data to enroll students!";
	cout << endl;
	for (i = 0; (i < Size && ((choice == 'y') || choice == 'Y')); i++)
	{
		cout << "   Enter Roll Numbers of student " << i + 1 << ":";
		cin >> RollNo[i];
		cout << "   Enter Marks of Computer Science of student " << i + 1 << " within 100:";
		cin >> compmarks[i];
		while (!(compmarks[i] >= 0 && compmarks[i] <= 100))
		{
			cout << "   Wrong Input. Enter Marks of Computer Science of student " << i + 1 << " within 100:";
			cin >> compmarks[i];
		}
		// enter maths marks out of 100
		cout << "   Enter Marks of Mathematics of student " << i + 1 << " within 100:";
		cin >> mathmarks[i];
		while (!(mathmarks[i] >= 0 && mathmarks[i] <= 100))
		{


			cout << "   Wrong Input. Enter Marks of Mathematics of student " << i + 1 << " within 100:";
			cin >> mathmarks[i];
		}
		per[i] = ((compmarks[i] + mathmarks[i]) * 100) / 200;    // per of student
		cout << "   Precentage of student " << i + 1 << " is:" << per[i];
		cout << endl;
		if (per[i] >= 91 && per[i] <= 100)
		{
			Grade[i] = 'A';
			cout << "   Grade of student " << i + 1 << " is: " << Grade[i];
		}
		else if (per[i] >= 75 && per[i] <= 90)
		{
			Grade[i] = 'B';
			cout << "   Grade of student " << i + 1 << " is: " << Grade[i];
		}
		else if (per[i] >= 60 && per[i] <= 75)
		{
			Grade[i] = 'C';
			cout << "   Grade of student " << i + 1 << " is: " << Grade[i];
		}
		else if (per[i] >= 50 && per[i] < 60)
		{
			Grade[i] = 'D';
			cout << "   Grade of student " << i + 1 << " is: " << Grade[i];
		}
		else
		{
			Grade[i] = 'F';
			cout << "   Grade of student " << i + 1 << " is: " << Grade[i];
		}
		cout << endl;
		StudCount++;
		if (i < Size - 1)
		{
			cout << "   Enter Y/y to continue adding students and their data and N/n to stop: ";
			cin >> choice;
			while (!(choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N'))
			{

				cout << "   Wrong Input. Enter Your choice:";
				cin >> choice;
			}
		}
	}
	cout << "|\t\t\t\t\t\t\t\t\t\t\t\t\t\t       |" << endl;
	// print - row
	for (int i = 0; i < 120; i++)
	{
		cout << "-";
	}
	cout << endl;
	cout << "|\t\t\t\t\t\t\t\t\t\t\t\t\t\t       |" << endl;
	// to ask whether user want to print menu or not:
	cout << "|  Do you want to perform any of the following operations?\t\t\t\t\t\t\t       |" << endl;
	cout << "|  Press Y/y. For Yes.\t\t\t\t\t\t\t\t\t\t\t\t       |" << endl;
	cout << "|  Press N/n. For No.\t\t\t\t\t\t\t\t\t\t\t\t       |" << endl;
	// print - row
	for (int i = 0; i < 120; i++)
	{
		cout << "-";
	}
	cout << endl;
	//print = row
	for (int i = 0; i < 120; i++)
	{
		cout << "=";
	}
	cout << endl;
	cout << "   Enter Your choice:";
	cin >> choice;
	while (!(choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N'))
	{

		cout << "   Wrong Input. Enter Your choice:";
		cin >> choice;

	Start:
		system("CLS");
		//Menu
		if (choice == 'y' || choice == 'Y')
		{
			cout << "+______________________________________________________________________________________________________________________+" << endl;
			cout << "|                                                                                                                      |" << endl;
			cout << "|                                             Result of Students                                                       |" << endl;
			cout << "|                                                                                                                      |" << endl;
			cout << "+----------------------------------------------------------------------------------------------------------------------+" << endl;
			cout << "|         |                    |                    |                        |                         |               |" << endl;
			cout << "| Sr # |  | | Student Roll #|  |  |Computer Marks|  |  |Mathematics Marks|   |  |per Obtained|  |  |Grade|      |" << endl;
			cout << "|         |                    |                    |                        |                         |               |" << endl;
			cout << "+----------------------------------------------------------------------------------------------------------------------+" << endl;
			//Result of Students
			for (i = 0; i < Size; i++)
			{
				cout << "| " << i + 1 << "|      |    " << RollNo[i] << "       |    " << compmarks[i] << "      |    " << mathmarks[i] << "       |    " << per[i] << "       |    " << Grade[i];
				cout << endl;
			}
			cout << "+----------------------------------------------------------------------------------------------------------------------+" << endl;
			cout << "|                                             +___________+                                                            |" << endl;
			cout << "|                                             |    Menu   |                                                            |" << endl;
			cout << "|                                             +-----------+                                                            |" << endl;
			cout << "+----------------------------------------------------------------------------------------------------------------------+" << endl;
			cout << "|                                                                                                                      |" << endl;
			cout << "|                                                                                                                      |" << endl;
			cout << "|                                                                                                                      |" << endl;
			cout << "|  Press 1 to update Roll Number of a particular Student.                                                              |" << endl;
			cout << "|  Press 2 to update marks of a particular student for CS.                                                             |" << endl;
			cout << "|  Press 3 to update marks of CS for all students who are already enrolled.                                            |" << endl;
			cout << "|  Press 4 to update marks for Mathematics                                                                             |" << endl;
			cout << "|  Press 5 to update marks of Mathematics for all students who are already enrolled.                                   |" << endl;
			cout << "|  Press 6 to sort the data on the basis of generated percentage.The data must be sorted in ascending order.Also make |" << endl;
			cout << "|  sure that all the record should be sorted on the basis on per.                                               |" << endl;
			cout << "|  Press 7 to delete the record of a particular student.The example is below                                           |" << endl;
			cout << "|  Press 8 to Exit.                                                                                                    |" << endl;
			cout << "|                                                                                                                      |" << endl;
			cout << "|                                                                                                                      |" << endl;
			cout << "|                                                                                                                      |" << endl;
			cout << "|______________________________________________________________________________________________________________________|" << endl;
		Choice:
			cout << "   Enter your choice:";
			cin >> choice1;
			switch (choice1)
			{
			case 1:
			{
					  cout << "\t\t\tUpdate Roll Number of a Particular Student.\t\t\t";
					  cout << endl << "   Enter i of Student (1 to 5) : ";
					  cin >> i;
					  i = i - 1;
					  while (!(i >= 0 && i < 5))
					  {
						  cout << "   Wrong Input. Enter i of Student (1 to 5) :";
						  cin >> i;
						  i = i - 1;
					  }
					  cout << "   Enter new Roll Number of Student " << i + 1 << ": ";
					  cin >> RollNo[i];
					  break;
			}
			case 2:
			{
					  cout << "\t\t\tUpdate Marks of a Particular Student For CS.\t\t\t";
					  cout << endl << "   Enter i of Student (1 to 5) : ";
					  cin >> i;
					  i = i - 1;
					  while (!(i >= 0 && i < 5))
					  {
						  cout << "   Wrong Input. Enter i of Student (1 to 5) :";
						  cin >> i;
						  i = i - 1;
					  }
					  cout << "   Enter Updated Marks of CS of Student " << i + 1 << " Within 100: ";
					  cin >> compmarks[i];
					  while (!(compmarks[i] >= 0 && compmarks[i] <= 100))
					  {
						  cout << "   Wrong Input. Enter Updated Marks of CS of Student " << i + 1 << " Within 100: ";
						  cin >> compmarks[i];
					  }
					  per[i] = ((compmarks[i] + mathmarks[i]) * 100) / 200;
					  if (per[i] >= 91 && per[i] <= 100)
					  {
						  Grade[i] = 'A';
					  }
					  else if (per[i] >= 75 && per[i] <= 90)
					  {
						  Grade[i] = 'B';
					  }
					  else if (per[i] >= 60 && per[i] <= 75)
					  {
						  Grade[i] = 'C';
					  }
					  else if (per[i] >= 50 && per[i] < 60)
					  {
						  Grade[i] = 'D';
					  }
					  else
					  {
						  Grade[i] = 'F';
					  }
					  break;
			}
			case 3:
			{
					  cout << "\t\t\tUpdate Marks of CS for all students are who are already enrolled.\t\t\t" << endl;
					  for (i = 0; i < StudCount; i++)
					  {
						  cout << "   Enter Updated Marks of CS of Student " << i + 1 << " Within 100: ";
						  cin >> compmarks[i];
						  while (!(compmarks[i] >= 0 && compmarks[i] <= 100))
						  {
							  cout << "   Wrong Input. Enter Updated Marks of CS of Student " << i + 1 << " Within 100: ";
							  cin >> compmarks[i];
						  }
						  per[i] = ((compmarks[i] + mathmarks[i]) * 100) / 200;
						  if (per[i] >= 91 && per[i] <= 100)
						  {
							  Grade[i] = 'A';
						  }
						  else if (per[i] >= 75 && per[i] <= 90)
						  {
							  Grade[i] = 'B';
						  }
						  else if (per[i] >= 60 && per[i] <= 75)
						  {
							  Grade[i] = 'C';
						  }
						  else if (per[i] >= 50 && per[i] < 60)
						  {
							  Grade[i] = 'D';
						  }
						  else
						  {
							  Grade[i] = 'F';
						  }
					  }
					  break;
			}
			case 4:
			{
					  cout << "\t\t\tUpdate Marks of a Particular Student For Maths.\t\t\t";
					  cout << endl << "   Enter i of Student (1 to 5) : ";
					  cin >> i;
					  i = i - 1;
					  while (!(i >= 0 && i < 5))
					  {
						  cout << "   Wrong Input. Enter i of Student (1 to 5) :";
						  cin >> i;
						  i = i - 1;
					  }
					  cout << "   Enter Updated Marks of Maths of Student " << i + 1 << " Within 100: ";
					  cin >> mathmarks[i];
					  while (!(mathmarks[i] >= 0 && mathmarks[i] <= 100))
					  {
						  cout << "   Wrong Input. Enter Updated Marks of Maths of Student " << i + 1 << " Within 100: ";
						  cin >> mathmarks[i];
					  }
					  per[i] = ((compmarks[i] + mathmarks[i]) * 100) / 200;
					  if (per[i] >= 91 && per[i] <= 100)
					  {
						  Grade[i] = 'A';
					  }
					  else if (per[i] >= 75 && per[i] <= 90)
					  {
						  Grade[i] = 'B';
					  }
					  else if (per[i] >= 60 && per[i] <= 75)
					  {
						  Grade[i] = 'C';
					  }
					  else if (per[i] >= 50 && per[i] < 60)
					  {
						  Grade[i] = 'D';
					  }
					  else
					  {
						  Grade[i] = 'F';
					  }
					  break;
			}
			case 5:
			{
					  cout << "\t\t\tUpdate Marks of Maths for all students are who are already enrolled.\t\t\t" << endl;
					  for (i = 0; i < StudCount; i++)
					  {
						  cout << "   Enter Updated Marks of Maths of Student " << i + 1 << " Within 100: ";
						  cin >> mathmarks[i];
						  while (!(mathmarks[i] >= 0 && mathmarks[i] <= 100))
						  {
							  cout << "   Wrong Input. Enter Updated Marks of Maths of Student " << i + 1 << " Within 100: ";
							  cin >> mathmarks[i];
						  }
						  per[i] = ((compmarks[i] + mathmarks[i]) * 100) / 200;
						  if (per[i] >= 91 && per[i] <= 100)
						  {
							  Grade[i] = 'A';
						  }
						  else if (per[i] >= 75 && per[i] <= 90)
						  {
							  Grade[i] = 'B';
						  }
						  else if (per[i] >= 60 && per[i] <= 75)
						  {
							  Grade[i] = 'C';
						  }
						  else if (per[i] >= 50 && per[i] < 60)
						  {
							  Grade[i] = 'D';
						  }
						  else
						  {
							  Grade[i] = 'F';
						  }
					  }
					  break;
			}
			case 6:
			{
					  cout << "\t\t\tSort Data on Basis of pers in  Ascending Order.\t\t\t" << endl;
					  for (int i = 0; i < StudCount - 1; i++)
					  {
						  for (int j = i + 1; j < StudCount; j++)
						  {
							  if (per[i] > per[j])
							  {
								  swap(per[i], per[j]);
								  swap(RollNo[i], RollNo[j]);
								  swap(compmarks[i], compmarks[j]);
								  swap(mathmarks[i], mathmarks[j]);
								  swap(Grade[i], Grade[j]);
							  }
						  }
					  }
					  break;
			}
			case 7:
			{
					  cout << "\t\t\tDelte Record of a particular Student\t\t\t" << endl;
					  cout << "   Enter Roll Number of Student : ";
				  Back:
					  cin >> RollNosearch; //being used to check
					  for (int i = 0; i < Size; i++)
					  {
						  if (RollNo[i] == RollNosearch)
						  {
							  RollNofound = 1;
							  i = i;
							  break;
						  }
					  }
					  if (RollNofound)
					  {
						  RollNo[i] = 0;
						  Grade[i] = '\0';
						  compmarks[i] = 0;
						  mathmarks[i] = 0;
						  per[i] = 0;
					  }
					  else
					  {
						  cout << "   Roll Number Not Found. Re-Enter Roll Number : ";
						  goto Back;
					  }
					  break;
			}
			case 8:
			{
					  goto END;
					  break;
			}
			default:
			{
					   cout << "   Wrong Choice." << endl;
					   goto Choice;
					   break;
			}
			}
			goto Start;
		}
	}
	END:
		system("CLS");
		cout << "+___________________________________________________________________________________23___________________________________+" << endl;
		cout << "|                                                                                                                      |" << endl;
		cout << "|                                             Result of Students                                                       |" << endl;
		cout << "|                                                                                                                      |" << endl;
		cout << "+----------------------------------------------------------------------------------------------------------------------+" << endl;
		cout << "|         |                    |                    |                        |                         |               |" << endl;
		cout << "| Sr # |  | | Student Roll #|  |  |Computer Marks|  |  |Mathematics Marks|   |  |per Obtained|  |  |Grade|      |" << endl;
		cout << "|         |                    |                    |                        |                         |               |" << endl;
		cout << "+----------------------------------------------------------------------------------------------------------------------+" << endl;
		//Result of Students
		for (i = 0; i < Size; i++)
		{
			cout << "| " << i + 1 << "|      |    " << RollNo[i] << "       |    " << compmarks[i] << "      |    " << mathmarks[i] << "       |    " << per[i] << "       |    " << Grade[i];
			cout << endl;
		}
		cout << "+______________________________________________________________________________________________________________________+" << endl;
		system("pause");
		system("CLS");
		return 0;
	
}
