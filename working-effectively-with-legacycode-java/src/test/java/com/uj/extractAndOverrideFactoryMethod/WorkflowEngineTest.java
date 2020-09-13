package com.uj.extractAndOverrideFactoryMethod;

import org.junit.Test;

import static junit.framework.Assert.assertFalse;
import static junit.framework.Assert.assertTrue;

/**
 * Created by jehan on 1/4/2015.
 */
public class WorkflowEngineTest {
    @Test
    public void realRunisTrue() throws Exception {
        WorkflowEngine engine = new WorkflowEngine();
        assertTrue(engine.realRun());
    }

    @Test
    public void realRunisFalse() throws Exception {
        WorkflowEngine engine = new TestWorkflowEngine();
        assertFalse(engine.realRun());
    }




    class FakeTransactionManager extends TransactionManager {
        public FakeTransactionManager(Reader reader, Persister persister) {
            super(reader, persister);
        }

        @Override
        public boolean doSomething() {
            return false;
        }
    }

    class TestWorkflowEngine extends WorkflowEngine {
        @Override
        protected TransactionManager makeTransactionManager() {
            return new FakeTransactionManager(null, null);
        }
    }

}
