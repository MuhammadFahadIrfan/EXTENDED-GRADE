#include <iostream>
#include <string>
using namespace std;

class studgrade
{
  public:

  studgrade()
  {
    this->eng_grade=0;
    this->maths_grade=0;

  }
  

  studgrade(float e , float m)
  {
    this->eng_grade=e;
    this->maths_grade=m;
  } 

  studgrade(studgrade& clone)
  {
    this->eng_grade=clone.eng_grade;
    this->maths_grade=clone.maths_grade;

  }
  //getters

  float geteng_grade()
  {
    return this->eng_grade;
  }
  

  float getmaths_grade()
  {
    return this->maths_grade;
  }

  //setters

  void seteng_grade(float e)
  {
    this->eng_grade=e;
  };
  void setmaths_grade(float m)
  {
    this->maths_grade=m;
  
  }

  //OPERATORS OVERLOADS
studgrade operator +(studgrade grade_in)
{
  studgrade temp;
  temp.eng_grade=this->eng_grade+grade_in.eng_grade;
  temp.maths_grade=this->maths_grade+grade_in.maths_grade;
  return temp;
}

void display()
{
  cout<<"ENGLISH GRADES"<<endl;
  cout<<this->geteng_grade()<<endl;
  cout<<"MATHEMATICS GRADE"<<endl;
  cout<<this->getmaths_grade()<<endl;
}

  private:
  float eng_grade;
  float maths_grade;
};