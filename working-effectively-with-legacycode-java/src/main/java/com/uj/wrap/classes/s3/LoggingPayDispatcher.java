package com.uj.wrap.classes.s3;

import com.uj.wrap.classes.s1.Employee;

/**
 * @author ：UncleJet
 * @date ：Created in 2020/12/1 上午9:07
 * @description：
 */
public class LoggingPayDispatcher {
    private Employee e;

    public LoggingPayDispatcher(Employee e) {
        this.e  = e;
    }

    public void pay() {
        e.pay();
        logPayment();
    }

    private void logPayment() {
        //...
    }
    //...
}
