#include <iostream>
#include <cmath>
using namespace std;



/* guess number
int main(void)
{   

    int guess;
    int secretnum=11;
    int guesstimes=0;
    int guesslimted=5;
    bool outofguess=false;

    while (secretnum !=guess  && !outofguess)
    {   
        if(guesstimes<=guesslimted) 
        {
            cout<<"guess"<<endl;
            cin>>guess;
            guesstimes++;
        }else
        {
            outofguess=true;
        }
        
    }
    
    if (outofguess)
    {
        cout<<"lose";
    }
    else
    {
        cout<<"win";
    }
}
*/

/*pointers

int main(void)
{       
    int age =19;
    int *paGe=&age;//&age 就是age的物理地址
    double gpa=2.7;
    double *pgpa=&gpa;
    string name="make";
    cout<<&age<<endl;//&  意思是打印出存储变量age的物理地址 0x61fe00
    cout<<*&age;
}
*/



/* class and object
class Book
{
private://不可改变输入项目 输入什么就是什么不能修改
    string author;
public://可自由修改输入项目
    string title;
    
    int pages;//self.*** python???
    Book(string aTitle,string aAuthor,int aPages){
        title=aTitle;
        author=aAuthor;
        pages=aPages;
    }   
    bool hashonoes(){
        if (pages>=400){
            return true;
        }
        return false;
    };
    void setauthor(string aAuthor){
    
    if (aAuthor =="JK"|| aAuthor =="GJ"){
        author=aAuthor;
    }else{
        author = "invalid_argument";
    }

    }
    string getaAuthor(){
        return author;
    }
};
int main(void)
{
    Book book1("hhppp","JK",500);
    
    //book1.title="jjjk";//正常运行
    //book1.author="ghhjhj";//成员 "Book::author" (已声明 所在行数:62) 不可访问C/C++(265)
    
    book1.setauthor("GJ"); //这可以用此项方式重新赋值
    cout<<book1.pages<<endl;
    cout<<book1.getaAuthor()<<endl;
    //cout<<book1.author<<endl;//成员 "Book::author" (已声明 所在行数:62) 不可访问C/C++(265)
    cout <<book1.hashonoes()<<endl;
    cout<<book1.title<<endl;
}
*/



/*
 继承


 class A
*******


class B :class A 
**A的一切B均可以调用 反之则不然


 */


