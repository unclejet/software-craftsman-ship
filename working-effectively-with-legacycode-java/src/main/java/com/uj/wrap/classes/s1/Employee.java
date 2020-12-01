package com.uj.wrap.classes.s1;

import com.uj.wrap.method.Money;
import com.uj.wrap.method.PayDispatcher;
import com.uj.wrap.method.Timecard;

import java.util.ArrayList;
import java.util.Date;
import java.util.Iterator;

/**
 * @author ：UncleJet
 * @date ：Created in 2020/12/1 上午8:46
 * @description：
 */
public class Employee {
    private ArrayList<Timecard> timecards;
    private ArrayList<Date> payPeriod;
    private Date date;
    private double payRate;
    private PayDispatcher payDispatcher;

    //original method
    public void pay() {
        Money amount = new Money();
        for (Iterator it = timecards.iterator(); it.hasNext(); ) {
            Timecard card = (Timecard)it.next();
            if (payPeriod.contains(date)) {
                amount.add(card.getHours() * payRate);
            }
        }
//        payDispatcher.pay(this, date, amount);
    }
}
