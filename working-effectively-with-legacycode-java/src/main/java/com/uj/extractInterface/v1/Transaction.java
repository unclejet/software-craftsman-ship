package com.uj.extractInterface.v1;

import com.uj.extractInterface.PayrollDatabase;

/**
 * Created by jehan on 12/24/2014.
 */
public abstract  class Transaction {
    protected PayrollDatabase db;
    protected TRansactionLog log;

    public Transaction(PayrollDatabase db, TRansactionLog log) {
        this.db = db;
        this.log = log;
    }

    public abstract void run();
}
