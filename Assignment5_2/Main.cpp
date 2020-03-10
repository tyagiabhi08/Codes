#include"Date.h"
#include"Person.h"
#include"Employee.h"
int main()
{

	//Date d1(12,12,2020);

 // Person p1("Abhishek","Delhi",d1);
  /*Person p1("Abhishek","Delhi",12,12,2020);
  p1.display();
*/

  //Employee emp(1,2000.09,"Ece",d1);
  //Employee emp(1,2000.09,"Ece",12,12,2020);
  //emp.display();

  Employee emp(1,2000.09,"Ece",12,12,2020,"Abhishek","Delhi",8,8,1996);
  emp.display();

return 0;
}



