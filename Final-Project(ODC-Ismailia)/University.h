class University
{
    private:
       static University* ptr;
       University(){

            addData();
       }
       vector<Course>courses;
       vector<Department>departments;
       vector<Student>students;
       vector<Professor>professors;

     public:
        University(const University& obj) = delete;

       static University* get_instance()
       {
           if(ptr == NULL)
           {
               ptr = new University();
               return ptr;

           }
           else
            return ptr;
       }

       ///----------------------Student-----------------------------------------------
       void add_student(string name, char gender, int age, int id, int level, float gpa) {
		Student s(name, gender, age, id, level, gpa);
		students.push_back(s);
	}

	bool update_student(int id, float gpa) {
		for (int i = 0; i < (int)students.size(); i++) {
			if (id == students[i].get_id()) {
				students[i].set_gpa(gpa);
				return true;
			}
		}
			return false;
	}

	bool remove_student(int id) {
		for (int i = 0; i < students.size(); i++) {
			if (id == students[i].get_id()) {
				students.erase(students.begin() + i);
				return true;
			}
		}
		return false;
	}

	void show_students()
	{
	    for(int i = 0; i < students.size(); i++){
            cout << students[i].get_name() << " " << students[i].get_gpa();
	    }
	    cout << endl;
	}
	///----------------------Professor-----------------------------------------------

	  void add_professor(string name, char gender, int id, int age, Department* department, double salary, string degree) {
		Professor pf(name, gender, id,age, department ,salary, degree);
		professors.push_back(pf);
	}

	bool update_professor(int id, double salary) {
		for (int i = 0; i < (int)professors.size(); i++) {
			if (id == professors[i].get_id()) {
				professors[i].set_salary(salary);
				return true;
			}
		}
        return false;
	}

	bool remove_professor(int id) {
		for (int i = 0; i < professors.size(); i++) {
			if (id == professors[i].get_id()) {
				professors.erase(professors.begin() + i);
				return true;
			}
		}
		return false;
	}

	void show_professors()
	{
	    for(int i = 0; i < professors.size(); i++){
            cout << professors[i].get_name() << " " << professors[i].get_salary();
	    }
	    cout << endl;
	}

	///----------------------Course-----------------------------------------------
	 void add_course(string course_name ,string course_code,vector<Course*> prerequirts,Professor* professors, vector<Student*> students, int course_hours)
	 {
		Course co(course_name, course_code, prerequirts,professors,students,course_hours);
		courses.push_back(co);
	}

	bool update_course(string code, int hours) {
		for (int i = 0; i < (int)courses.size(); i++) {
			if (code == courses[i].get_course_code()) {
				courses[i].set_course_hours(hours);
				return true;
			}
		}
        return false;
	}

	bool remove_course(string code) {
		for (int i = 0; i < courses.size(); i++) {
			if (code == courses[i].get_course_code()) {
				courses.erase(courses.begin() + i);
				return true;
			}
		}
		return false;
	}

	void show_courses()
	{
	    for(int i = 0; i < courses.size(); i++){
            cout << courses[i].get_course_name() << " " << courses[i].get_course_code() << " " <<  courses[i].get_course_hours();
	    }
	    cout << endl;
	}

	///-------------------------------------Department---------------------
	void add_department(int capacity,double required_gpa,string name){
            Department d(capacity,required_gpa,name);
            departments.push_back(d);
        }
		bool update_department(string name,int capacity){
			for(int i=0;i<departments.size();i++){
				if(departments[i].get_name() == name){
					departments[i].set_capacity(capacity);
					return true;
				}
			}
			return false;
		}
		bool remove_department(string name){
			for (int i = 0; i < departments.size(); i++)
			{
				if(departments[i].get_name() == name){
					departments.erase(departments.begin()+i);
					return true;
				}
			}
			return false;
		}

    void show_departments()
	{
	    for(int i = 0; i < departments.size(); i++){
            cout << departments[i].get_name() << " " << departments[i].get_capacity();
	    }
	    cout << endl;
	}

	void printAll(){
        for(int i=0;i<departments.size();i++){
            cout<<"Department: "<<departments[i].get_name()<<endl;
        }
        for(int i=0;i<professors.size();i++){
            cout<<"Professor Name: "<<professors[i].get_name()<<endl;
        }
        for(int i=0;i<students.size();i++){
            cout<<"Student Name: "<<students[i].get_name()<<endl;
        }
        show_courses();
	}

	void addData()
    {
        Department d1(50, 3.2,"Web Development");
        departments.push_back(d1);
        Department d2(33, 3.5,"Cyber Security");
        departments.push_back(d2);
        Department d3(20, 3.0,"Artificial Intelligence");
        departments.push_back(d3);
        Department d4(125, 2.5, "Information Systems");
        departments.push_back(d4);

        Student s1("Ahmed Ali",'M',19, 1, 2, 2.74);
        students.push_back(s1);
        Student s2("Mirna Hussein", 'F', 22,2, 4, 3.68);
        students.push_back(s2);
        Student s3("Hamada Hossam",'M',28 ,3, 3, 2.37);
        students.push_back(s3);
        Student s4("Taghreed Mohsen",'F',20, 4, 3, 3);
        students.push_back(s4);
        Student s5("Yasmin Belal",'F', 18, 5, 1, 3.71);
        students.push_back(s5);
        Student s6("Amr Diab", 'M',50,6 ,4, 2.01);
        students.push_back(s6);
        Student s7("Tamer Hosny", 'M',30, 7, 3, 2.02);
        students.push_back(s7);
        Student s8("Ahmed Alaa", 'M',21,8, 2, 2.49);
        students.push_back(s8);

        Professor p1("Mohamed Ali", 'M',1 , 56,&d1, 12000, "Masters");
        professors.push_back(p1);
        Professor p2("HOSSAM HASSAN", 'M',2 , 50,&d2, 15000, "Masters");
        professors.push_back(p2);
        Professor p3("AHMED MOHSEN", 'M',3 , 30,&d3, 5000, "Masters");
        professors.push_back(p3);
        Professor p4("MAHMOUD KAHRBAB", 'M',4 , 44,&d4, 1500, "Masters");
        professors.push_back(p4);


        vector<Student*> st1;
        st1.push_back(&s1);
        st1.push_back(&s2);
        st1.push_back(&s3);
        st1.push_back(&s4);
        vector<Student*> st2;
        st2.push_back(&s5);
        st2.push_back(&s6);
        st2.push_back(&s7);
        st2.push_back(&s8);

        Course c1("HTML", "HTML123", vector<Course*>(), &p1, st1,12); courses.push_back(c1);
        vector<Course*> crs1;
        crs1.push_back(&c1);
        Course c2("CSS", "CSS123",crs1,&p3, st2,9); courses.push_back(c2);
        Course c3("Networks", "Net521", crs1, &p4, st2,18); courses.push_back(c3);
    }

};

