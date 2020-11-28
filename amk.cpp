#include <iostream>
#include <windows.h>

#include <shellapi.h>

using namespace std;

int main()
{
	string yarrak = "/C pscp -i cs550lab1.ppk ";
	string amcik_resmi;
	string amcik_ipsi;
	string seks;
	
	cout << "Enter the file name of the picture to be recognized : \n";
	cin >> amcik_resmi;
	cout << "\nEnter ip address to send picture to be recognized : \n";
	cin >> amcik_ipsi;
	seks = yarrak + amcik_resmi + " ec2-user@" + amcik_ipsi + ":/home/ec2-user/CS550_Project_1";
	seks = seks.c_str();
	
	LPTSTR got_deligi = new TCHAR[seks.size() + 1]; //define
    strcpy(got_deligi, seks.c_str());
	ShellExecute(0, "open", "cmd.exe",got_deligi, 0, SW_SHOWNORMAL);

    return 0;
}
