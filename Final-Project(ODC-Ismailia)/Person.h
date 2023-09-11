class Person {
protected:
	string name;
	char gender;
	int id;
	int age;
public:
	Person() {

	}
	Person(string name, char gender, int id, int age) {
		this->name = name;
		this->gender = gender;
		this->id = id;
		this->age = age;
	}
	//Setter
	virtual void set_name(string name) {
		this->name = name;
	}
	virtual void set_gender(char gender) {
		this->gender = gender;
	}
	virtual void set_id(int id) {
		this->id = id;
	}
	virtual void set_age(int age) {
		this->age = age;
	}
	// Getter
	virtual string get_name() {
		return name;
	}
	virtual char get_gender() {
		return gender;
	}
	virtual int get_id() {
		return id;
	}
	virtual int get_age() {
		return age;
	}

	virtual void attend() = 0;

};




