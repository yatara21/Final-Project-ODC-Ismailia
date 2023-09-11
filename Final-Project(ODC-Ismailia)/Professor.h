class Professor :public Person {
private:
	Department* department;
	double salary;
	string degree;

public:
	//Constructor

	Professor() {}
	Professor(string name, char gender, int id, int age, Department *department, double salary, string degree) :Person(name, gender, id, age) {
		this->department = department;
		this->salary = salary;
		this->degree = degree;
	}
	// Setters
	void set_salary(double salary) {
		this->salary = salary;
	}
	void set_department(Department *department) {
		this->department = department;
	}
	void set_degree(string degree) {
		this->degree = degree;
	}

	// Getters
	Department* get_department() {
		return department;
	}
	double get_salary() {
		return salary;
	}
	string get_degree() {
		return degree;
	}
	void teach() {
		//waiting for implementation
	}
	void make_exam() {
		//waiting for implementation
	}
	void attend() {
		cout <<name<<"attended"<<endl;
	}
	//Destructor
	~Professor() {
		//waiting for implementation
	}

};
