#include <iostream>

using namespace std;
//define class:
class ComplexNum{
    float real,
        img;

    public:

    void setReal(float r){
        real=r;
    }
    void setImg(float i){
        img =i;
    }

    float getReal(){
    return real;
    }

    float getImg(){
    return img;
    }
    //for print:
    void print(); //using stand-alone function

    //for sum:
    ComplexNum Add(ComplexNum c2){  //using inline function

        ComplexNum  res;

        res.setReal(real+c2.getReal());
        res.setImg(img+c2.getImg());
    return res;
}
};

//define print function: //member function
void ComplexNum::print(){
    if((img >0) && (real==0))
        cout <<" the complex is: " <<  " + " << img << " i "<< endl;

    else if((img ==0) && (real>0))
        cout <<" the complex is: " <<  real<< endl;

        else if((img<0) && (real>0))
            cout <<" the complex is: "  << real  << img <<" i "<< endl;

                else if((img >0) && (real>0))
                     cout <<" the complex is: "  << real << " + " << img <<" i " << endl;

                     else if((img ==0 )&& (real==0))
                        cout <<" the complex is: 0 "   << endl;
}

/*
//define Add function:
ComplexNum Add(ComplexNum c1,ComplexNum c2){
    ComplexNum res;
    res.setReal(c1.getReal()+c2.getReal());
    res.setImg(c1.getImg()+c2.getImg());
    return res;
}
*/

//define substract function:  stand alone function
ComplexNum Sub(ComplexNum c1,ComplexNum c2){
    ComplexNum res;
    res.setReal(c1.getReal()-c2.getReal());
    res.setImg(c1.getImg()-c2.getImg());
    return res;
}
int main()
{
    ComplexNum comp1,
               comp2,
               resultSum,
               resultSub;
    /*float real1,
          real2,
          img1,
          img2;*/
    //for number 1:
    //cout << "please enter the real part of 1st number" << endl;
     comp1.setReal(6);
   // cout << "\nplease enter the img part of 1st number" << endl;
    comp1.setImg(-1.5);


    //for number 2:
    //cout << "\nplease enter the real part of 2nd number" << endl;
    comp2.setReal(-5);
    //cout << "\nplease enter the img part of 2nd number" << endl;
    comp2.setImg(7.3);


    //for result of sum:

    resultSum = comp1.Add(comp2);
    resultSum.print();

    //for result of sub:
    resultSub= Sub(comp1,comp2);
    resultSub.print();
    return 0;
}
