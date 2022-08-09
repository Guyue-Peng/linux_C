#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <limits>
/*
constexpr int get_value()
{
    return 3;
}
int main(void){
    
    //compile time error without the ; at end
    std::cout<<"Hello"<< std::endl;

    //run timer error 
    int value =  7/0;
    std::cout<<"Hello:"<<value<< std::endl;



}
*/

/*

int main(void)
{
*std::cout
*std::cin
*std::cerr
*std::clog

int age1;
std::string name;
std::cout<<"name and age"<<std::endl;
std::cin>>name>>age1;

std::cout<<"hi,"<<name<<",you are"<<age1<<"years old"<<std::endl;
//std::getline(std::cin,name);
}
*/

//信息丢失 不如大括号初始化器安全 直接报错  int a{1.2};


/*
int main(){
    //2 bytes
    short short_var {-12554};
    short int short_int {6565};
    signed short signed_short {-456};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};

     //4 bytes
    int int_var{55};
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int {55};

    //4 bytes
    long long_var {-12344};
    long  int long_int {66};
    signed long singed_long {44};
    signed long int singed_long_int {55};
    unsigned long int unsigned_long_int {8888};

    // 8 bytes
    long long long_long {777};
    long long int long_long_int {555};
    signed long long int signed_long_long_int {888};
    unsigned long long  int unsigned_long_long_int {666};

    std::cout<<"short size: "<<sizeof(short_var)<<std::endl;
    std::cout<<"short int : "<<sizeof(short_int)<<std::endl;
    std::cout<<"signed_short: "<<sizeof(signed_short)<<std::endl;
    std::cout<<"signed_short_int: "<<sizeof(signed_short_int)<<std::endl;
    std::cout<<"unsigned_short_int: "<<sizeof(unsigned_short_int)<<std::endl;

    std::cout<<"int_var: "<<sizeof(int_var)<<std::endl;
    std::cout<<"signed_var: "<<sizeof(signed_var)<<std::endl;
    std::cout<<"signed_int: "<<sizeof(signed_int)<<std::endl;
    std::cout<<"unsigned_int: "<<sizeof(unsigned_int)<<std::endl;

    std::cout<<"signed_var: "<<sizeof(long_var)<<std::endl;
    std::cout<<"long_int: "<<sizeof(long_int)<<std::endl;
    std::cout<<"singed_long: "<<sizeof(singed_long)<<std::endl;
    std::cout<<"singed_long_int: "<<sizeof(singed_long_int)<<std::endl;
    std::cout<<"unsigned_long_int: "<<sizeof(unsigned_long_int)<<std::endl;

    std::cout<<"long_long: "<<sizeof(long_long)<<std::endl;
    std::cout<<"long_long_int: "<<sizeof(long_long_int)<<std::endl;    
    std::cout<<"signed_long_long_int: "<<sizeof(signed_long_long_int)<<std::endl;
    std::cout<<"unsigned_long_long_int: "<<sizeof(unsigned_long_long_int)<<std::endl;

}

*/

/*
//float
// n(floating point)/0 will get infinity(+/-)
// 0.0 /0.0  = NaN  meanings a naughty number
int main(void){
    double num1{};
    double num2{};
    double num3{};
    double num4{};
    double num5{};
    double num6{};
    double num7{};
    double num8{};
    double num9{};
    double num10{5.6};
    double num11{};// initialized to 0
    double num12{};
    double num13{};

    double result {num10/num11};

    std::cout << num10<<"/"<<num11<<" yields "<<result<<std::endl;//5.6/0 yields inf infinity
    std::cout << result <<" + "<<num10<<" yields "<<result +num10<<std::endl;

    //NaN
    result = num11/num12;
    
    std::cout << num11<<"/"<<num12<<"="<<result<<std::endl;

    float number1{1.2323232323232323230f};
    double number2 {1.5656565656565656550};
    long double number3 {1.2565656565656565650L};

    //Print out the sizes 4 8 16
    std::cout <<"sizeof float :"<< sizeof(number1)<<std::endl;
    std::cout <<"sizeof double :"<< sizeof(number2)<<std::endl;
    std::cout <<"sizeof long double :"<< sizeof(number3)<<std::endl;

    std::cout << "-----------------------------------------" <<std::endl;
    //setting precision 
    std::cout<<std::setprecision(20);//注意 std::有控制输出内容的作用。
    std::cout <<"sizeof float :"<< number1<<std::endl;//precision :7
    std::cout <<"sizeof double :"<< number2<<std::endl;//precision 15
    std::cout <<"sizeof long double :"<< number3<<std::endl;//more than 15+

    std::cout << "-----------------------------------------" <<std::endl;
    //float problems :the precision is usually too limited
    float number4 {12121212121212.0f};//precision 8
    double number5 {12121212121212.0};// cant typing f or storged by float format
    std::cout << "number4 :"<<number4<<std::endl;
    std::cout << "number5 :"<<number5<<std::endl;

    //format       size  precision comment
    //float          4     7    
    //double         8     15 
    //long double    12   >double
}

*/



/*
//boolean
Tips! A byte can store 256 fifferent values
using it just to cover two states (T and F) is wasteful , especially for 
devices with hard memory constrains (like embedded devices)



int main (){

    bool red_light{false};
    bool green_light {true};

    if (red_light == true){
        std::cout << "stop!"<<std::endl;
    }else{
        std::cout<<"Go on !"<<std::endl;
    }

    if (green_light){
        std::cout<<"The green light is green!"<<std::endl;
    
    }else{
        std::cout <<"the light is nit green"<<std::endl;
    }

    //sizeof()
    std::cout<<"sizeof(bool): "<<sizeof(bool)<<std::endl;

    //Printing out a bool parameter
    //1--->> true
    // 0--->>false

    std::cout <<std::endl;
    std::cout<<"red_light: "<< red_light<<std::endl;
    std::cout<<"green_light: "<< green_light<<std::endl; 

    std::cout <<"-----------------------------------------------"<<std::endl;

    std::cout <<std::boolalpha;
    std::cout<<"red_light: "<< red_light<<std::endl;
    std::cout<<"green_light: "<< green_light<<std::endl; 

}

*/

/*
//auto 


int main(){

    auto var1{12};
    auto var2{1.55};
    auto var3{1.33l};
    auto var4{"kljllkl"};  //const char ??
    auto var5{'e'};//char ??
    auto var6{ 23ul}; //long long define can add two cha

}
*/

/*
//assignment
int main (void){

    int var1{123};//declare and initailize 
    std::cout <<"var1: "<< var1<<std::endl;
    
    var1=55;//assign
    std::cout<<"var1: "<<var1<< std::endl;

    //careful about auto assignments
    auto var3 {333u}; //unsign int
    var3 =-22; //assign negative number , it will assign a garbage date

    std::cout <<"var3: "<<var3<<std::endl;

}
*/

/*
// variables and data types
//int double float char bool void auto
//
//Operations on Data


int main(void){
    //addition
    int number1{2},number2{7};
    int result = number1+ number2;
    std::cout<<"result: "<<result <<std::endl;

    //subtraction
    result = number2-number1;
    std::cout<<"reslut :"<<result<<std::endl;
    result = number1-number2;
    std::cout<<"reslut :"<<result<<std::endl;

    //multiplication
    result = number2*number1;
    std::cout<<"reslut :"<<result<<std::endl;

    //division
    result = number2/number1;
    std::cout<<"reslut :"<<result<<std::endl;

    ///modules 模量(余数)
    result = number2%number1;
    std::cout<<"reslut :"<<result<<std::endl;

}
*/

/**/
//precedence and associativity (优先级和关联性)
//precedence : which aperation to do frist
//associativity : which diraction or which 






/*
//prefix and postfix + and - (前缀和后缀)
//i++ i--

int main(void){

    int value;
    value =5;

    std::cout<<"value is :"<<value++ << std::endl;//5 先赋值再输出 再运算
    std::cout<<"value is : "<< value<<std::endl;//6
    std::cout<<"----------------------------------------"<<std::endl;

    value=5;
    std::cout<<"value is :"<<value-- << std::endl;//5 先赋值再输出 再运算
    std::cout<<"value is : "<< value<<std::endl;//4
    std::cout<<"----------------------------------------"<<std::endl;

    value=5;
    ++value;
    std::cout<<"value is (++i):"<<value<<std::endl;
     std::cout<<"----------------------------------------"<<std::endl;

    value =5;
    std::cout<<"value is (--i):"<<--value<<std::endl;//6 先运算再赋值

}
*/

/*     compound operators 复合运算符 += -= /=
*/

/*
//Relational Operators:Comparing Stuff

int main (void){

    int num1{45};
    int num2{60};

    std::cout <<"num1: "<<num1<<std::endl;
    std::cout <<"num2: "<<num2<<std::endl;

    std::cout<< "comparing variables"<<std::endl;

    std::cout<<"----------------------------------"<<std::endl;
    std::cout<<std::boolalpha;
    //make bool show up as true/false  instead of 1/0

    std::cout<<"num1 < num2 : "<<(num1<num2)<<std::endl;
    std::cout<<"num1 > num2 : "<<(num1>num2)<<std::endl;
    std::cout<<"num1 <= num2 : "<<(num1<=num2)<<std::endl;
    std::cout<<"num1 >= num2 : "<<(num1>=num2)<<std::endl;
    std::cout<<"num1 == num2 : "<<(num1 == num2)<<std::endl;

    std::cout<<std::noboolalpha;
    std::cout<<"num1 != num2 : "<<(num1 != num2)<<std::endl;
}
*/

/*
//logical operators 
// AND &&  OR ||  NOT !
int main (void){

    bool a {true};
    bool b {false};
    bool c {true};

    std::cout<<std::boolalpha;
    std::cout<<"a: "<<a<<std::endl;
    std::cout<<"b: "<<a<<std::endl;
    std::cout<<"c: "<<a<<std::endl;

    std::cout<<"-----------------------------------"<<std::endl;
    std::cout<<"Basic AND operator"<<std::endl;

    std::cout << "a && b :"<<(a && b)<<std::endl;
    std::cout << "a && c :"<<(a&&c)<<std::endl;
    std::cout << "a && b && c :"<<(a && b && c)<<std::endl;

    std::cout<<"-----------------------------------"<<std::endl;
    std::cout<<"Basic NOT operator"<<std::endl;

    std::cout << "!a : "<<(!a)<<std::endl;
    std::cout << "!c :"<<(!c)<<std::endl;
    std::cout << "!b :"<<(!b)<<std::endl;

    std::cout << "!(a&&b)||c: "<<(!(a&&b)||c)<<std::endl;
}
*/


/*
//Output Formatting
int main (void)
{
    std::cout<<"unformatted output "<<std::endl;
    std::cout<<"Danial"<<""<<"gray"<<"25"<<std::endl;


    std::cout<<"-----------------------------"<<std::endl;
    std::cout<<"Formatted table"<<std::endl;
    std::cout<<std::setw(10)<<"Danial"<<std::setw(10)<<""<<"gray"<<std::setw(5)<<"25"<<std::endl;
    
    std::cout<<"-----------------------------"<<std::endl;
    int col_witdth=10;

    std::cout<<std::right;
    std::cout<<std::setw(col_witdth)<<"Danial"<<std::setw(col_witdth)<<""<<"gray"<<std::setw(col_witdth
    )<<"25"<<std::endl;

    std::cout<<std::left;
    std::cout<<std::setw(col_witdth)<<"Danial"<<std::setw(col_witdth)<<""<<"gray"<<std::setw(col_witdth
    )<<"25"<<std::endl;

    std::cout<<std::left;
    std::cout<<std::setfill('+');
    std::cout<<std::setw(col_witdth)<<"Danial"<<std::setw(col_witdth)<<""<<"gray"<<std::setw(col_witdth
    )<<"25"<<std::endl;

    //boolalpha and noboolalpha ====> output 1/0 or true /false

    std::cout<<"-----------------------------"<<std::endl;

    int pos_num={45};
    int neg_num={-45};
    std::cout<<"pos_num: "<<pos_num<<std::endl;
    std::cout<<"neg_num: "<<neg_num<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::showpos;
    std::cout<<"pos_num: "<<pos_num<<std::endl;
    std::cout<<"neg_num: "<<neg_num<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::noshowpos;
    std::cout<<"pos_num: "<<pos_num<<std::endl;
    std::cout<<"neg_num: "<<neg_num<<std::endl;


    //1. 十进制。如56。 
    //2. 十六进制，以0x开头，比如0x7a。输出十六进制hex关键字格式化，
    //3. 八进制，以0开头，比如030。输出八进制用oct关键字格式化，
    std::cout <<std::endl;
    std::cout<<"int in diferenent bases :"<<std::endl;
    std::cout<<"pos_int(dec): "<<std::dec<<pos_num<<std::endl;
    std::cout<<"pos_int(hex): "<<std::hex<<pos_num<<std::endl;//55  5*8^1 + 5*8^0
    std::cout<<"pos_int(oct): "<<std::oct<<pos_num<<std::endl;

    std::cout <<std::endl;
    double double_var={142.123};
    //this number systems have on effect on floating point numbers
    std::cout<<"double in diferenent bases :"<<std::endl;
    std::cout<<"pos_int(dec): "<<std::dec<<double_var<<std::endl;
    std::cout<<"pos_int(hex): "<<std::hex<<double_var<<std::endl;
    std::cout<<"pos_int(oct): "<<std::oct<<double_var<<std::endl;

    std::cout<<std::endl;
    std::cout<<std::showbase;
    std::cout<<"showbase "<<std::endl;
    std::cout<<"pos_int(dec): "<<std::dec<<pos_num<<std::endl;
    std::cout<<"pos_int(hex): "<<std::hex<<pos_num<<std::endl;//55  5*8^1 + 5*8^0
    std::cout<<"pos_int(oct): "<<std::oct<<pos_num<<std::endl;  

    std::cout<<std::endl;
    std::cout<<std::uppercase;
    std::cout<<"upperbase "<<std::endl;//大写
    std::cout<<"pos_int(dec): "<<std::dec<<pos_num<<std::endl;
    std::cout<<"pos_int(hex): "<<std::hex<<pos_num<<std::endl;//55  5*8^1 + 5*8^0
    std::cout<<"pos_int(oct): "<<std::oct<<pos_num<<std::endl;  


    std::cout<<std::endl;
    std::cout<<std::endl;
    double c{3.14159564545454545};
    double d{2022.98};
    double f{0.0000000000135};
    std::cout<<"double (default)"<<std::endl;
    std::cout<<"c :"<<c<<std::endl;
    std::cout<<"d :"<<d<<std::endl;
    std::cout<<"f :"<<f<<std::endl;


    std::cout<<std::endl;
    std::cout<<std::fixed;
    std::cout<<"double (fixed)"<<std::endl;//6位小数
    std::cout<<"c :"<<c<<std::endl;
    std::cout<<"d :"<<d<<std::endl;
    std::cout<<"f :"<<f<<std::endl;

    std::cout<<std::endl;
    std::cout<<"recover defaults: "<<std::endl;
    std::cout.unsetf(std::ios::scientific|std::ios::fixed);//默认也是六位小数
    std::cout<<"c :"<<c<<std::endl;
    std::cout<<"d :"<<d<<std::endl;
    std::cout<<"f :"<<f<<std::endl;

    std::cout<<std::endl;
    std::cout<<std::setprecision(15);
    std::cout<<"double setprecision(15)"<<std::endl;//6位小数
    std::cout<<"c: "<<c<<std::endl;


    std::cout<<std::endl;
    std::cout<<"showpoint"<<std::endl;//
    std::cout<<std::showpoint;
    std::cout<<"c :"<<c<<std::endl;
    std::cout<<"d :"<<d<<std::endl;
    std::cout<<"f :"<<f<<std::endl;


    std::cout<< " acbccc ......" << std::endl<<std::flush;//??

}
*/

/*

#include <cmath>
int main(void){
    double weight {7.3};
    double save{-11111};
    //floor 
    std::cout<<"weight rounded to floor is : " << std::floor (weight)<<std::endl; //取整
    //ceil
    std::cout<<"weight rounded to ceil is : " << std::ceil(weight)<<std::endl; // 进一
    //abs
    std::cout<<"weight rounded to abs is : " << std::abs(save)<<std::endl; //绝对值
    //exp
    std::cout<<"the exp of 4 is : " << std::exp (4)<<std::endl; 
    //pow
    std::cout<<"3 ^4 is : " << std::pow(3,4)<<std::endl; //指数
    //log
    std::cout<<"log;to get 54.59,you would elevate e to the power of  is : " << std::log (54.59)<<std::endl; 
    //log
    std::cout<<"the power of  is : " << std::log10(100000)<<std::endl; 
    //sqrt
    std::cout<<"the sqrt root of 81 is :"<<std::sqrt(81)<<std::endl;//平方根
    //round 四舍五入
    std::cout<<"3.656 rounded to :"<<std::round(3.654)<<std::endl;
    std::cout<<"2.5 rounded to :"<<std::round(2.5)<<std::endl;
    std::cout<<"2.4 rounded to :"<<std::round(2.4)<<std::endl;

}
*/


/*
//data size less than 4 byte is can't be mathmetic 
int main(void){
    short int var1{10};
    short int var2{20};//2 byte 
    char var3 {40};
    char var4 {90};// 1byte

    std::cout<<"size of var1 : "<<sizeof(var1)<<std::endl;
    std::cout<<"size of var2 : "<<sizeof(var2)<<std::endl;
    std::cout<<"size of var3 : "<<sizeof(var3)<<std::endl;
    std::cout<<"size of var4 : "<<sizeof(var4)<<std::endl;

    auto result1 = var1+var2;  //====> int 4 byte
    auto result2 = var3+var4;

    std::cout<<"size of result1 : "<<sizeof(result1)<<std::endl;
    std::cout<<"size of result2 : "<<sizeof(result2)<<std::endl;

}



*/























