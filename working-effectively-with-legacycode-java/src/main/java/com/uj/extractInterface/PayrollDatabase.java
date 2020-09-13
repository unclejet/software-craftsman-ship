package com.uj.extractInterface;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/**
 * Created by jehan on 12/24/2014.
 */
public class PayrollDatabase {
    private List<Employee> employeeList = new ArrayList<Employee>();
    public Iterator getEmployees() {
        //get employee list from DB
        //...
        return employeeList.iterator();
    }


}
