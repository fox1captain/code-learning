#define  _CRT_SECURE_NO_WARNINGS

static int g_val = 2024;

//static修饰全局变量的时候这个全局变量的外部链接属性
//就变成了内部链接属性。其他源文件(.c)就不能再使用到这个全局变量了

static int Add(int x, int y)
{
	return x + y;
}
//一个函数本来是具有外部链接属性的，
//但是被static修饰的时候，外部链接属性就
//变成了内部链接属性，其他源文件(.c)就不能使用