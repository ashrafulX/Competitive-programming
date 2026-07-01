 #include<bits/stdc++.h>
 using namespace std;
 class Crickter
 {
    public:
    string country;
    int jersey;
    Crickter(string country,int jersey)
    {
        this->country=country;
        this->jersey=jersey;
    }

 };
 int main()
 {
    Crickter *dhoni = new Crickter("D-India",100);
    Crickter *kohli = new Crickter ("K-India",18);
    cout<<"Before"<<endl;
    cout<<kohli->country<<" "<<kohli->jersey<<endl;
    // kohli=dhoni;
    // kohli->country=dhoni->country;
    // dhoni->jersey=dhoni->jersey;
    *kohli=*dhoni;
    delete dhoni;
    cout<<"After"<<endl;
    cout<<kohli->country<<" "<<kohli->jersey<<endl;

     return 0;
 }