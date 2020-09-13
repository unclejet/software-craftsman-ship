package com.uj.extractInterface.v2;

/**
 * Created by jehan on 12/24/2014.
 */
public class TRansactionLog implements TransactionRecorder {
    public void saveTransaction(Transaction transaction) {
        System.out.println("saveTransaction: " + transaction);
    }
}
