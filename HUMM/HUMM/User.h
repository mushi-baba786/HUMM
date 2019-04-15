#pragma once
#include "Person.h"
#include <mysql.h>

class User : public Person{

private:

	string pass, cpass;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES *res;
	int qstate;


public:

	bool check_user(string username, string password) {

		conn = mysql_init(0);

		conn = mysql_real_connect(conn, "localhost", "root", "abcd", "humm", 0, NULL, 0);

		if (conn) {

			qstate = mysql_query(conn, "select * from user_login");

			if (!qstate) {

				res = mysql_store_result(conn);

				while (row = mysql_fetch_row(res)) {

					cout << row[0] << row[1] << row[2];

					if (username == row[1] && password == row[2]) {

						return true;
					}
				}
				return false;
			}
		}
	}
	bool check_user(string uname) {

		conn = mysql_init(0);

		conn = mysql_real_connect(conn, "localhost", "root", "abcd", " ", 0, NULL, 0);

		if (conn) {
			
			qstate = mysql_query(conn, " CREATE DATABASE "+uname);

			if (qstate) {

				cout << "table created" << endl;
			}
			else {

				cout << "failed" << endl;
			}
		}
	}
		bool check_pass(string pass, string cpass) {

			if (pass == cpass) {

				return true;
			}
			else {

				return false;
			}
		}
		void insert_data(string first_name, string last_name, string username, string password) {

			conn = mysql_init(0);

			conn = mysql_real_connect(conn, "localhost", "root", "abcd", "humm", 0, NULL, 0);

			string query = "insert into user_login(username,password,first_name,last_name) values('" + username + "','" + password + "','" + first_name + "','" + last_name + "')";

			const char* q = query.c_str();
			mysql_query(conn, q);

		}

		User() {}

		User(string first_name, string last_name, string uname, string pass, string cpass) {

			this->first_name = first_name;
			this->last_name = last_name;
			this->uname = uname;
			this->pass = pass;
			this->cpass = cpass;
		}

		User(string uname, string pass) {

			this->uname = uname;
			this->pass = pass;
		}

		void setPass(string pass) {

			pass = pass;
		}

		void setUname(string uname) {

			uname = uname;
		}

		string getpass() {

			return pass;
		}
		string getcpass() {

			return cpass;
		}

		string getuname() {

			return uname;
		}
		string getfirstname() {

			return first_name;
		}
		string getlastname() {

			return last_name;
		}

};
