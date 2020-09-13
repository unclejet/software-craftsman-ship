package com.uj.extractInterface;

import java.util.Date;

/**
 * Created by jehan on 12/24/2014.
 */
public class Employee {
    private double salary;

    public boolean isPayday(Date date) {
        return true;
    }

    public void pay() {
        salary = 5000;
    }

    public double getSalary() {
        return salary;
    }
}
