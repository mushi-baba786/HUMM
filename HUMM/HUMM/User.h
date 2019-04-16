#pragma once
#include "Person.h"
#include <mysql.h>

class User : public Person {

private:

	string pass, cpass;
	string query;
	const char* q;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES *res;
	int qstate;

public:

	bool check_user() {

		query = uname;
		q = query.c_str();

		conn = mysql_init(0);

		conn = mysql_real_connect(conn, "localhost", "root", "abcd", q, 0, NULL, 0);

		if (conn) {

			qstate = mysql_query(conn, "select * from login");

			if (!qstate) {

				res = mysql_store_result(conn);

				while (row = mysql_fetch_row(res)) {

					if (pass == row[0]) {

						return true;
					}
				}
				return false;
			}
		}
		return false;
	}

	bool create_database() {

		query = "CREATE DATABASE " + uname;
		q = query.c_str();

		conn = mysql_init(0);

		conn = mysql_real_connect(conn, "localhost", "root", "abcd", "", 0, NULL, 0);

		qstate = mysql_query(conn, q);

		if (!qstate) {

			return true;
		}
		else {

			return false;
		}
	}

	void create_logintable() {

		query = uname;
		q = query.c_str();

		conn = mysql_init(0);

		conn = mysql_real_connect(conn, "localhost", "root", "abcd", q, 0, NULL, 0);

		qstate = mysql_query(conn, "CREATE TABLE login(password VARCHAR(100) NOT NULL);");

		query = "insert into login(password) values('" + pass + "')";
		q = query.c_str();
		mysql_query(conn, q);

	}
	void createInventory() {

		mysql_query(conn, "CREATE TABLE inventory(id VARCHAR(100) NOT NULL, product_name VARCHAR(100) NOT NULL, cost DOUBLE NOT NULL, price DOUBLE NOT NULL, quantity INT NOT NULL,PRIMARY KEY(id));");
	}
	void insert_inventory(string id, string name, string cost, string price, string qty) {

		cout << "DONE" << endl;
		query = "insert into inventory(id,product_name,cost,price,quantity) values('" + id + "','" + name + "','" + cost + "','" + price + "','" + qty + "')";
		q = query.c_str();
		mysql_query(conn, q);
	}
	bool check_pass() {

		if (pass == cpass) {

			return true;
		}
		else {

			return false;
		}
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
