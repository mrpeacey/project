 #include<iostream>
 class Rectangle {
    private: 
       int length;
       int breadth;
      public:
       void set_length(int l)
       {
          length=l;
       }
        void set_breadth(int b)
       {
          breadth=b;
       }
       int get_length()
       {
          return length;
       }
       int get_breadth()
       {
        return breadth;
       }
       void getArea()
       {
        std::cout << "Area is " << length * breadth << std::endl;
       }
        void getPerimeter()
       {
       std:: cout << "Perimeter is " << 2*(length+breadth) << std::endl;
       }
 };
 int main()
 {
    Rectangle r1;
    r1.set_length(33);
    r1.set_breadth(22);
    r1.getArea();
    r1.getPerimeter();
    return 0;
 }