package com.uj.extractInterface.v1;

/**
 * Created by jehan on 12/24/2014.
 */
public class TRansactionLog {
    public void saveTransaction(Transaction transaction) {
        //... some special dependency
        System.out.println("saveTransaction: " + transaction);
    }
}
