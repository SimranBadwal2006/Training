    #include<bits/stdc++.h>
    using namespace std;
    class Complex{
        private:
        double real;
        double img;
        public:
        double get_real(){
            return this -> real;
        }
        double get_img(){
            return this -> img;
        }
        Complex(){

        }
        Complex(double real,double img){
            this -> real =real;
            this -> img = img;
        }
        Complex operator+ (Complex obj){
            Complex temp(0,0);

            temp.real = this -> real + obj.real;
            temp.img = this -> img + obj.img;

            return temp;
        }
        void DisplayComplex(){
            cout<<"complex number:"<<this -> get_real() <<"+" <<this -> get_img()<<"i"<<endl;
        }
    };

    int main(){
        Complex c1(5, 10);
        Complex c2(10, 11);
        Complex c3 = c1+c2; //c1.operator+(c2)
        c3.DisplayComplex();
        return 0;

    }
