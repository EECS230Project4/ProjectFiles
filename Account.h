#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	void editfunds(double amount);
	void newname(string fname, string lname);

	double getfunds() const;
	string getname() const;

private:
	int number;
	string fname;
	string lname;
	double balance;
};

#endif
