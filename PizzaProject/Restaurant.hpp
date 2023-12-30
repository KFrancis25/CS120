//
// Created by kaial on 11/18/2022.
//

#ifndef PIZZAPROJECT_RESTAURANT_HPP
#define PIZZAPROJECT_RESTAURANT_HPP

#include <stdexcept>
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <deque>
#include "Order.hpp"
#include "Driver.hpp"
#include "Time.hpp"
using namespace std;

//---------------------------------------------------------------------------------------//
//                                                                                       //
//                                Restaurant Class Definition                            //
//                                                                                       //
//---------------------------------------------------------------------------------------//

class Restaurant{
private:
    //Restaurant keeps track of all drivers and orders in the system, including logged-out drivers and completed orders.
    list <Driver> drivers;
    deque <Order> incoming_order;
    deque <Order> outgoing_order;
    list <Order> delivered;
    int order_completed = 0;
    int total_time = 0;

public:
    //class
    Restaurant();
    //status of order and driver location
    void status();
    //order summary
    void summary();
    // receives the name of the driver
    Driver *getDriver(string name) throw (logic_error);
    // adds driver to list
    void addDriver(string name);
    //adds order to queue
    void addOrder(Order &order);
    // Pre: The cooking queue must not be empty.
    // Post: Places first order in cooking queue into the delivery queue
    // and removes item from cooking queue.
    void serveOrder() throw (logic_error);
    // Pre: The delivery queue must not be empty.
    // Post: Removes the first order in the delivery queue and returns it.
    Order departOrder() throw (logic_error);
    // delivery status
    //void deliver(Driver *driver, Time time, float tip, Order deliver);
    void deliver(Order order_delivered);

//    Restaurant& operator=(const Restaurant &other);
//    Restaurant& operator=(Restaurant &&other);
//    void refreshList;
//    void removefromList;
};

//---------------------------------------------------------------------------------------//
//                                                                                       //
//                               Restaurant Class Implementation                         //
//                                                                                       //
//---------------------------------------------------------------------------------------//
Restaurant::Restaurant()
{
    list <Driver> drivers;
    deque <Order> incoming_order;
    deque <Order> outgoing_order;
    list <Order> delivered;
//    int order_completed = 0;
//    int total_time = 0;
}

void Restaurant::status()
{
    cout << "Waiting for the orders to be ready: " << endl;
}

void Restaurant::summary()
{

}

Driver * Restaurant::getDriver(string name) throw(logic_error)
{

}


void Restaurant::addDriver(string name)
{
    drivers.push_back(Driver(name));
}

void Restaurant::addOrder(Order &order)
{
    incoming_order.push_back(order);
}

void Restaurant::serveOrder() throw(logic_error)
{
    if(incoming_order.empty())
    {
        throw logic_error("No incoming order is getting ready.");
    }

    Order serve = incoming_order.front();
    incoming_order.pop_front();
    outgoing_order.push_back(serve);
}

Order Restaurant::departOrder() throw(logic_error)
{
    if(outgoing_order.empty())
    {
        throw logic_error ("No outgoing order is getting ready.");
    }

    Order depart = outgoing_order.front();
    outgoing_order.pop_front();

    return depart;
}

void Restaurant::deliver(Order order_delivered)
{
    delivered.push_back(order_delivered);
}

#endif //PIZZAPROJECT_RESTAURANT_HPP
