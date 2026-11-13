#include"is_leap_year.h"//必须包含自己源文件得声明
bool is_leap_year(int a)
{
	if ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0))
		return true;
	else
		return false;
}
