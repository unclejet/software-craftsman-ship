package com.uj.sensingandseparation.sales.good;

import junit.framework.Assert;
import mockit.Mocked;
import mockit.NonStrictExpectations;
import mockit.Verifications;
import org.junit.Test;

/**
 * Created by jehan on 11/14/2014.
 */
public class SalesTest {
    @Test
    public void displayAnItemByFake() throws Exception {
        FakeDisplay display = new FakeDisplay();
        Sales sales = new Sales(display);
        sales.scan("1");
        Assert.assertEquals("Milk $3.99", display.getLine());
    }

    private class FakeDisplay implements Display {
        private String line;

        @Override
        public void showLine(String line) {
            this.line = line;
        }

        public String getLine() {
            return line;
        }
    }

    @Test
    public void displayAnItemByMock(@Mocked final Display display) throws Exception {
        new NonStrictExpectations() {
            {
                display.showLine("Milk $3.99");
            }
        };

        Sales sales = new Sales(display);
        sales.scan("1");

        new Verifications() {
            {
                display.showLine("Milk $3.99");
            }
        };
    }
}
