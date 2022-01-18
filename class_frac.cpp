class fraction{
    private:
        int num;
        int denom;
    public:
        fraction(int num,int denom){
            this->num=num;
            this->denom=denom;
        }
    void add(fraction f2){
        int lcm=this->denom * f2.denom;
        int x=(lcm/this->denom);
        int y=(lcm/f2.denom);
        int n=(x*this->num)+(y*f2.num);
        num=n;
        denom=lcm;
        simplify();
    }
    void simplify(){
        int gcd=1;
        int j=min(this->num,this->denom);
        for(int i=1;i<=j;i++){
            if(this->num%i==0 && this->denom%i==0){
                gcd=i;
            }
        }
        this->num=this->num/gcd;
        this->denom=this->denom/gcd;
    }
    void print(){
        cout<<this->num<<"/"<<this->denom<<endl;
    }
};