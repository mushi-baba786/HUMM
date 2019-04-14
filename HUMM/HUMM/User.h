#pragma once
#include "Person.h"

class User : public Person {

private:

	string pass;

public:

	User() {}

	User(string first_nmae, string last_name, string uname, string pass) {

		this->first_name = first_name;
		this->last_name = last_name;
		this->uname = uname;
		this->pass = pass;
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