class Course
{
private:

	string course_name ;
	string course_code ;
	int course_hours ;
	Professor* professors;
	vector<Student*> students;
	vector<Course*> prerequirts;


	public:
    Course(){}
	Course(string course_name ,string course_code,vector<Course*> prerequirts,
			Professor *professors, vector<Student*> students, int course_hours)
	{
		this ->prerequirts =prerequirts;
		this ->students =students;
		this ->course_name = course_name;
		this ->course_code = course_code;
		this ->professors = professors;
		this ->course_hours =course_hours;
	}



	void set_course_name( string course_name )
	{
		this->course_name =course_name;
	}
	string get_course_name(void)
	{
		return course_name;
	}




	void set_course_code( string course_code )
	{
		this->course_code =course_code;
	}
	string get_course_code()
	{
		return course_code;
	}



	void set_course_hours( int course_hours )
	{
		this->course_hours =course_hours;
	}
	int get_course_hours()
	{
		return course_hours;
	}




	Professor* get_professors()
	{
		return professors;
	}
	void set_professors(Professor* professors)
	{
		this->professors =professors;
	}



	vector<Student*> get_student()
	{
		return students;
	}

	void set_student(vector<Student*> students)
	{
		this->students = students;
	}




	vector<Course*>get_prerequirts()
	{
		return prerequirts;
	}
	void set_prerequirts(vector<Course*> prerequirts)
	{
		this->prerequirts =prerequirts;
	}

};
