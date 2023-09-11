class Student : public Person{
private:
	int level;
	float gpa;

public:
	//Constructor
	Student() {

    }
	Student(string name, char gender, int age, int id, int level, float gpa) :Person(name, gender, id, age) {
		this->id = id;
		this->level = level;
		this->gpa = gpa;
	}
	// Setters
	void set_gpa(float gpa) {
		this->gpa = gpa;
	}
	void set_level(int level) {
		this->level = level;
	}

	// Getters
	float get_gpa() {
		return gpa;
	}
	int get_level() {
		return level;
	}
	int get_id()
	{
	    return id;
	}
	void study() {
		//waiting for implementation
	}
	void take_exam() {
		//waiting for implementation
	}
	void attend() {
		cout<<name<<"attended"<<endl;
	}
};
