package com.uj.wrap.classes.s1;

/**
 * @author ：UncleJet
 * @date ：Created in 2020/12/1 上午8:52
 * @description：Often the easiest way to do this, if you can't instantiate the original class in a test harness, is to use Extract Implementer (356) or Extract Interface (362) on it and have the wrapper implement that interface.
 */
public class LoggingEmployee extends Employee {
    private final Employee employee;

    public LoggingEmployee(Employee e) {
        employee = e;
    }

    public void pay() {
        logPayment();
        employee.pay();
    }

    private void logPayment() {
        //...
    }
    //...
}
