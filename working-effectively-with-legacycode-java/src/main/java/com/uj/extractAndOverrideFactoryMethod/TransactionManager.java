package com.uj.extractAndOverrideFactoryMethod;

/**
 * Created by jehan on 1/4/2015.
 */
public class TransactionManager {
    public TransactionManager(Reader reader, Persister persister) {
        System.out.println("Real TransactionManager created");
    }

    public boolean doSomething() {
        //...
        return true;
    }
}
