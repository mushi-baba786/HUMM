#pragma once
#include "Person.h"

class User : public Person {

private:

	string pass,cpass;

public:

	User() {}

	User(string first_name, string last_name, string uname, string pass,string cpass) {

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