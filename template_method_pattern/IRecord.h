#pragma once
#include <iostream>

class IRecord
{
protected:
	virtual void validate() = 0;

	virtual void before_save() = 0;

	virtual void save_to_db() = 0;

public:
	void save() {
		//this default implementation is not supposed to be re implemented it is fixed

		this->validate();
		this->before_save();
		this->save_to_db();

	}
};

class User : public IRecord {
	void validate() {
		printf("inside user validate\n");
	}

	void before_save() {

		printf("inside user before save\n");
	}

	void save_to_db() {

		printf("inside user save to db\n");
	}

};

class book : public IRecord {
	void validate() {
		printf("inside book validate\n");
	}

	void before_save() {

		printf("inside book before save\n");
	}

	void save_to_db() {

		printf("inside book save to db\n");
	}

};