package com.uj.wrap.method;

import java.util.ArrayList;
import java.util.Date;
import java.util.Iterator;

/**
 * @author ：UncleJet
 * @date ：Created in 2020/12/1 上午8:08
 * @description：
 */
public class Employee {
    private ArrayList<Timecard> timecards;
    private ArrayList<Date> payPeriod;
    private Date date;
    private double payRate;
    private PayDispatcher payDispatcher;

    //original method
    public void payV1() {
        Money amount = new Money();
        for (Iterator it = timecards.iterator(); it.hasNext(); ) {
            Timecard card = (Timecard)it.next();
            if (payPeriod.contains(date)) {
                amount.add(card.getHours() * payRate);
            }
        }
        payDispatcher.pay(this, date, amount);
    }

    //如下是wrap method的手法

    private void dispatchPayment() {
        //payV1改成这个方法名，方法内容完全一致
        payV1();
    }

    //在已有的方法里面新增我们添加的方法
    public void pay() {
        //在pay的时候新增的log的需求
        logPayment();
        dispatchPayment();
    }

    private void logPayment() {
        //...
    }

    /**
     *如下是wrap method的另一种手法
     * 新起了一个方法来wrap已有的方法
     */
    public void makeLoggedPayment() {
        logPaymentV2();
        payV2();
    }

    public void payV2() {
        //...
    }

    private void logPaymentV2() {
        //...
    }
}
