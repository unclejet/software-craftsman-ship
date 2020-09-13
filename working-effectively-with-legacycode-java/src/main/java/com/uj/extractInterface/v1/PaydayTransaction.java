package com.uj.extractInterface.v1;

import com.uj.extractInterface.Employee;
import com.uj.extractInterface.PayrollDatabase;

import java.util.Date;
import java.util.Iterator;

/**
 * Created by jehan on 12/24/2014.
 */
public class PaydayTransaction extends Transaction {
    private Date date = new Date();

    public PaydayTransaction(PayrollDatabase db, TRansactionLog log) {
        super(db, log);
    }

    public void run() {
        for(Iterator it = db.getEmployees(); it.hasNext(); ) {
            Employee e = (Employee)it.next();
            if (e.isPayday(date)) {
                e.pay();
            }
        }
        log.saveTransaction(this);
    }
}
