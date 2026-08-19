#include<iostream>
class matrix {
    int arr[3][3];
    public:
    void read()
    {
        for (int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                std::cin >> arr[i][j];
            }
        }
    }
    void display()
    {
        for(int i=0;i<3;i++)
        {
            for (int j=0;j<3;j++)
            {
                std::cout << arr[i][j];
            }
            std::cout << std::endl;
        }
    }
    matrix operator +(matrix &op)
    {
         matrix temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.arr[i][j]=this->arr[i][j]+op.arr[i][j];
            }
        }
        return temp;
    }
    matrix operator *(matrix &op)
    {
         matrix temp;
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)

            {
                temp.arr[i][j]=0;
                for(int k=0;k<3;k++)
                {
                    temp.arr[i][j]= this->arr[i][k] * op.arr[k][j]+ temp.arr[i][j];
                }
            }
        }
        return temp;
    }

};
int main()
{    matrix m1,m2;
    m1.read();
    m2.read();
    matrix m3=m1+m2;
    matrix m4=m1*m2;
    m3.display();
    m4.display();
    return 0;
}