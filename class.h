#pragma once

#include <string>

class StanfordID{
    private:
        std::string m_name;
        std::string m_sunet;
        int m_idNumber;
    public:
        StanfordID(std::string name, std::string sunet, int idNumber);
        std::string getName();
        std::string getSunet();
        int getID();
        ~StanfordID();
        bool operator == (const StanfordID &other) const;
        bool operator != (const StanfordID &other) const; 
        bool operator < (const StanfordID &other) const;
};

class Shape{
    public:
        virtual double area() const = 0; // pure virtual function
};

class Circle : public Shape{
    private:
        double radius;
    public:
        Circle(double r) : radius(r) {}
        double area() const override {
            return 3.14159 * radius * radius;
        }
};

class Rectangle : public Shape{
    private:
        double m_width;
        double m_height;
    public:
        Rectangle(double width, double height) : m_width(width), m_height(height) {}
        double area() const override {
            return m_width * m_height;
        }
};

