package com.uj.extractInterface.v2;

import com.uj.extractInterface.PayrollDatabase;

/**
 * Created by jehan on 12/24/2014.
 */
public abstract  class Transaction {
    protected PayrollDatabase db;
    protected TransactionRecorder log;

    public Transaction(PayrollDatabase db, TransactionRecorder log) {
        this.db = db;
        this.log = log;
    }

    public abstract void run();
}
