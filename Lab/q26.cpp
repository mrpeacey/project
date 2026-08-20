#include<iostream>
using namespace std;
class Classifier {
    public: void classifier(){};
};
class DecisionTree:public Classifier {
    public: void classifier()
    {
        cout << "Classifying with Decision Tree" << endl;
        
    }
};
    class NeuralNetwork:public Classifier {
    public: void classifier()
    {
        cout << "Classifying with Neural Network" << endl;
        
    }
    

};
int main ()
{
    DecisionTree d;

    d.classifier();
    NeuralNetwork Nn;
    Nn.classifier();
    Classifier *ptr;
    ptr= &d;
    ptr->classifier();
    ptr=&Nn;
    ptr->classifier();

    return 0;
}