using System;//引入的别人的命名空间

namespace std//我们自己定义的命名空间
{
    class Name//这个是我们自己定义的类
    {
        enum/*定义枚举类型*/ Roletype//名字
        {
            Mage,Archer,Assassin,Tank,Support,Warrior//roletype其中的类型，相当于是值
        }
        struct Student
        {
            public/*访问权限公开*/ string ID;
            public string Name;
            public int Age;
            public string Bg;
            public int add()//在结构体内部定义函数可以直接访问结构体内的元素，不需要再引用
            {
                Console.WriteLine();
                return 0;
            }//结构体内部定义的函数可以直接通过成员访问
        }
        static int add1(int a)//定义外部函数
        {
            Console.WriteLine();
            return 0;
        }
        delegate int text(int x);//定义委托
        static void Main(string[] args)//这个是我们定义的方法
        {
            text hanshu1;//需要指向一个返回值类型相同以及参数的个数和参数的类型一致的函数
            hanshu1 = add1;//需要让委托指向函数，指向可以改变
            hanshu1(3);//可以直接使用

            Roletype ali = Roletype.Mage;//用枚举类型的名字Roletype来定义创建一个类型ali他的值是mage
            //使用枚举的优点1.不会写错值，2.可以提示有哪些值

            Student stu1;
            stu1.Age = 10;
            stu1.Bg = "男";
            stu1.ID = "123";
            stu1.Name = "小明";
            Student[] students = new Student[10];//创建一个结构体数组
            students[0].Age = 10;//给第一个学生的年龄赋值
            Console.WriteLine(students[0].Age);//访问一号学生的年龄
            stu1.add();//定义的成员可以.访问结构体内部定义的函数

            //Console/*system下面的类*/.WriteLine/*方法*/("666");

            //Console.WriteLine(@"a\b\c");//@:使转义字符失去转义功能

            //string a=Console.ReadLine();//输入数据。返回值为字符串（string）
            ////赋值两个规则：1.类型一致 2.右边值所需要容器大小小于等于左边大小

            //int b = Convert.ToInt32(a);//把字符串类型的数字转换成int类型的数字

            //int c = Convert.ToInt32(Console.ReadLine());//简写输入整数
            //Console.WriteLine("{0}+{1}={2}", a, b, a+b);//数据从0开始排序0,1,2，，，
            //               //取得0号值
            
            //Console.WriteLine(a);

            string ssa = "asdfasdaa sda";
            Console.WriteLine(ssa.Length);//.length求出字符串或者字符数组的长度
            foreach(char sda in ssa)//foreach循环的使用
            {
                Console.WriteLine(sda);
            }
        }
    }
}
