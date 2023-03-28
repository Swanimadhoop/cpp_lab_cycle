#include<iostream>
using namespace std;

const int size = 3;

class Vector {
    private:
        int v[3];

    public:
        Vector() {
            for(int i=0; i<3; i++) {
                v[i]=0;
            }
        }
        Vector(int *x) {
            for(int i=0; i<3; i++) {
                v[i]=x[i];
            }
        }
        bool operator==(Vector &a);
        bool operator!=(Vector &a);
        bool operator<(Vector &a);
        bool operator<=(Vector &a);
        bool operator>(Vector &a);
        bool operator>=(Vector &a);
        //void get_data();
};
bool Vector::operator==(Vector &a){
    for(int i=0;i<3;i++) {
        if(v[i]==a.v[i]) {
            return true;
        }
    }
    return false;
}



bool Vector::operator!=(Vector &a) {
    for(int i=0;i<3;i++) {
        if(v[i]!=a.v[i]) {
            return true;
        }
    }
    return false;
}

bool Vector::operator<(Vector &a) {
    for(int i=0;i<3;i++) {
        if(v[i]<a.v[i]) {
            return true;
        }
        else if(v[i]>a.v[i]) {
            return false;
        }
    }
    return false;
}

bool Vector::operator<=(Vector &a) {
    for(int i=0;i<3;i++) {
        if(v[i]<=a.v[i]) {
            continue;
        }
        else {
            return false;
        }
    }
    return true;
}

bool Vector::operator>(Vector &a) {
    for(int i=0;i<3;i++) {
        if(v[i]>a.v[i]) {
            return true;
        }
        else if(v[i]<a.v[i]) {
            return false;
        }
    }
    return false;
}

bool Vector::operator>=(Vector &a) {
    for(int i=0;i<3;i++) {
        if(v[i]>=a.v[i]) {
            continue;
        }
        else {
            return false;
        }
    }
    return true;
}

int main() {
    int x[3], y[3];

    cout<<"Enter the values of vector x: ";
    for(int i=0; i<3; i++) {
        cin>>x[i];
    }
    Vector v1(x);

    cout<<"Enter the values of vector y: ";
    for(int i=0; i<3; i++) {
        cin>>y[i];
    }
    Vector v2(y);

    cout<<"v1==v2: "<<(v1==v2)<<'\n';
    cout<<"v1!=v2: "<<(v1!=v2)<<'\n';
    cout<<"v1<v2: "<<(v1<v2)<<'\n';
    cout<<"v1<=v2: "<<(v1<=v2)<<'\n';
    cout<<"v1>v2: "<<(v1>v2)<<'\n';
    cout<<"v1>=v2: "<<(v1>=v2)<<'\n';

    return 0;
}
