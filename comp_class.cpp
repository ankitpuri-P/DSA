class Complex{
    private:
        int real;
        int img;
    public:
        Complex(int real,int img){
            this->real=real;
            this->img=img;
        }
    void print(){
        cout<<this->real<<"+"<<this->img<<endl;
    }
    void add(Complex const &f2){
        this->real=real+f2.real;
        this->img=img+f2.img;
    }
    void multiply(Complex const &f2){
        this->real=(real*f2.real)-(img*f2.img);
        this->img=(real*f2.img)+(img*f2.real);
    }
};