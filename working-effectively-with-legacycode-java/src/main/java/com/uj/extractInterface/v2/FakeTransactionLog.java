package com.uj.extractInterface.v2;

/**
 * Created by jehan on 12/24/2014.
 */
public class FakeTransactionLog implements TransactionRecorder {
    @Override
    public void saveTransaction(Transaction transaction) {
        System.out.println("FakeTransactionLog saveTransaction: " + transaction);
    }
}
