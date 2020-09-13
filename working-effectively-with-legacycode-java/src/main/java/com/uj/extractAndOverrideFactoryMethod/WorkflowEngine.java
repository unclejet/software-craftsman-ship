package com.uj.extractAndOverrideFactoryMethod;

/**
 * Created by jehan on 1/4/2015.
 */
public class WorkflowEngine
{
    private final TransactionManager tm;

    public WorkflowEngine () {
        this.tm = makeTransactionManager();
        //...
    }

    protected TransactionManager makeTransactionManager() {
        Reader reader = new ModelReader(AppConfig.getDryConfiguration());
        Persister persister = new XMLStore(AppConfiguration.getDryConfiguration());
        return new TransactionManager(reader, persister);
    }
    //...

    public boolean realRun() {
        return tm.doSomething();
    }
}
