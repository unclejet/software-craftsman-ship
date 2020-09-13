package com.uj.commandQuerySeparation;

import org.junit.Assert;
import org.junit.Test;

/**
 * Created by jehan on 1/26/2015.
 */
public class AccountDetailFrameTest {
    @Test
    public void testPerformCommand() throws Exception {
        TestAccountDetailDisplay display = new TestAccountDetailDisplay();
        TestSymbolSource accountSymbol = new TestSymbolSource();
        AccountDetailFrame frame = new AccountDetailFrame(display, accountSymbol);
        accountSymbol.accountSymbol = "SYM";

        frame.performCommand("project activity");

        Assert.assertEquals("SYM: ", display.displayText);
    }

    class TestAccountDetailDisplay extends AccountDetailDisplay {
        String displayText = "";

        @Override
        void setDisplayText(String accountDescription) {
            displayText = accountDescription;
        }
    }

    class TestSymbolSource extends SymbolSource {
        String accountSymbol = "";

        @Override
        void setDescription(String description) {
        }

        @Override
        String getAccountSymbol() {
            return accountSymbol;
        }
    }
}
