class Department{
private:
    	string name;                        	// name of the department
    	int capacity;                       	// capacity of the department
		double required_gpa;                    // required gpa of the department
public:
    Department(){

	}
    Department(int capacity,int required_gpa,string name){
        this->capacity = capacity;
        this->required_gpa = required_gpa;
        this->name = name;
    }

	/*Begin of setters*/
    void set_capacity(int capacity){
        this->capacity = capacity;
    }
    void set_required_gpa(double required_gpa){
        this->required_gpa = required_gpa;
    }
    void set_name(string name){
        this->name = name;
    }
	/*End of setters*/

	/*Beign of getters*/
    int get_capacity(){
        return capacity;
    }
    int get_required_gpa(){
        return required_gpa;
    }
    string get_name(){
        return name;
    }
    /*End of getters*/

};
