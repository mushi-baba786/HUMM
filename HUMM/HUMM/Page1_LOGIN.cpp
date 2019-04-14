#include "Page1_LOGIN.h"
#include <mysql.h>
#include <iostream>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

int qstate;

[STAThreadAttribute]
int main()	{
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES *res;

	conn = mysql_init(0);

	conn = mysql_real_connect(conn, "localhost", "root", "abc12345", "testdb", 3306, NULL, 0);

	if (conn) {
		puts("Successful connection to db");
	
		string query = "SELECT * FROM test";
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);

		if (!qstate) {

			res = mysql_store_result(conn);
			while (row = mysql_fetch_row(res)) {

				printf("ID: %s, Name: %s, Value, %s\n", row[0], row[1], row[2]);
			}
		}
		else {

			puts("Connection to db has failed!");
		}
	}

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	HUMM::Page1_LOGIN form;
	Application::Run(%form);
	return 0;
}
