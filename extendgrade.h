
#include <iostream>
#include <string>

using namespace std;
class extendgrade
{
  public:

  extendgrade()
  {
    this->sci_grade=0;
    this->lang_grade=0;

  }

  extendgrade(float s , float l)
  {
    this->sci_grade=s;
    this->lang_grade=l;
  } 

  extendgrade(extendgrade& clone)
  {
    this->sci_grade=clone.sci_grade;
    this->lang_grade=clone.lang_grade;

  }
  //getters

  float getsci_grade()
  {
    return this->sci_grade;
  }

  float getlang_grade()
  {
    return this->lang_grade;
  }

  //setters

  void setsci_grade(float s)
  {
      this->sci_grade=s;}
      void setlang_grade (float l)
      {
          this->lang_grade=l;
      }
     
     
      extendgrade operator +( extendgrade grade_in)
      
    {extendgrade temp;
  /*temp.eng_grade=this->eng_grade+grade_in.eng_grade;
  temp.maths_grade=this->maths_grade+grade_in.maths_grade*/
  temp.sci_grade=this->sci_grade+grade_in.sci_grade;
  temp.lang_grade=this->lang_grade+grade_in.lang_grade;
  return temp;
}

void display()
{
  /*cout<<"ENGLISH GRADES"<<endl;
  cout<<this->geteng_grade()<<endl;
  cout<<"MATHEMATICS GRADE"<<endl;
  cout<<this->getmaths_grade()<<endl;*/
  cout<<"SCIENCE GRADE"<<endl;
  cout<<this->getsci_grade()<<endl;
  cout<<"LANGUAGE GRADE"<<endl;
  cout<<this->getlang_grade()<<endl;
}

  private:
  float sci_grade;
  float lang_grade;
};

