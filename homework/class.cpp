#include<iostream>
using namespace std;
int main()
{
	float Month, Day, Year;
	float Format;
	cout << "Enter a date" << endl;
	cin >> Month >> Day >> Year;
	cout << "What is the Preffered format?" << endl;
	cout << "Format 1, 2, or 3?" << endl;
	cin >> Format;
	if (Format == 1)
	{
		if (Month == 1, Day <= 31, Year<=3000)
			cout << "January" << " " << Day << ", " << Year << endl;
		else if (Month == 2, Day <= 31, Year <= 3000)
			cout << "Febuary" << " " << Day << ", " << Year << endl;
		else if (Month == 3, Day <= 31, Year <= 3000)
			cout << "March" << " " << Day << ", " << Year << endl;
		else if (Month == 4, Day <= 31, Year <= 3000)
			cout << "April" << " " << Day << ", " << Year << endl;
		else if (Month == 5, Day <= 31, Year <= 3000)
			cout << "May" << " " << Day << ", " << Year << endl;
		else if (Month == 6, Day <= 31, Year <= 3000)
			cout << "June" << " " << Day << ", " << Year << endl;
		else if (Month == 7, Day <= 31, Year <= 3000)
			cout << "July" << " " << Day << ", " << Year << endl;
		else if (Month == 8, Day <= 31, Year <= 3000)
			cout << "August" << " " << Day << ", " << Year << endl;
		else if (Month == 9, Day <= 31, Year <= 3000)
			cout << "September" << " " << Day << ", " << Year << endl;
		else if (Month == 10, Day <= 31, Year <= 3000)
			cout << "October" << " " << Day << ", " << Year << endl;
		else if (Month == 11, Day <= 31, Year <= 3000)
			cout << "November" << " " << Day << ", " << Year << endl;
		else if (Month == 12, Day <= 31, Year <= 3000)
			cout << "December" << " " << Day << ", " << Year << endl;
		else
			cout << "Error, month doesn't exist" << endl;
	}
	else if (Format == 2)
	{
		if (Month == 1, Day <= 31, Year <= 3000)
			cout << "Jan." << " " << Day << ", " << Year << endl;
		else if (Month == 2, Day <= 31, Year <= 3000)
			cout << "Feb." << " " << Day << ", " << Year << endl;
		else if (Month == 3, Day <= 31, Year <= 3000)
			cout << "Mar." << " " << Day << ", " << Year << endl;
		else if (Month == 4, Day <= 31, Year <= 3000)
			cout << "Apr." << " " << Day << ", " << Year << endl;
		else if (Month == 5, Day <= 31, Year <= 3000)
			cout << "May" << " " << Day << ", " << Year << endl;
		else if (Month == 6, Day <= 31, Year <= 3000)
			cout << "Jun." << " " << Day << ", " << Year << endl;
		else if (Month == 7, Day <= 31, Year <= 3000)
			cout << "Jul." << " " << Day << ", " << Year << endl;
		else if (Month == 8, Day <= 31, Year <= 3000)
			cout << "Aug." << " " << Day << ", " << Year << endl;
		else if (Month == 9, Day <= 31, Year <= 3000)
			cout << "Sept." << " " << Day << ", " << Year << endl;
		else if (Month == 10, Day <= 31, Year <= 3000)
			cout << "Oct." << " " << Day << ", " << Year << endl;
		else if (Month == 11, Day <= 31, Year <= 3000)
			cout << "Nov." << " " << Day << ", " << Year << endl;
		else if (Month == 12, Day <= 31, Year <= 3000)
			cout << "Dec." << " " << Day << ", " << Year << endl;
		else
			cout << "Error, month doesn't exist" << endl;
	}
	else if (Format == 3)
		cout << Month << "/" << Day << "/" << Year << endl;
	else
		cout << "Error, Please use one of the 3 formats provided" << endl;
}