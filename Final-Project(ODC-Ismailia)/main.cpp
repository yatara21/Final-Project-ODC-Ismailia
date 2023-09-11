#include <iostream>
#include <vector>

using namespace std;

#include "Department.h"
#include "Person.h"
#include "Student.h"
#include "Professor.h"
#include "Course.h"
#include "University.h"

University* University::ptr = NULL;

int main()
{
    University* uni = University::get_instance();
    uni->printAll();
}
