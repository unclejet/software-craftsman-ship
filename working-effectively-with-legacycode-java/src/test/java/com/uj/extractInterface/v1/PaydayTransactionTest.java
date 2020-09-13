package com.uj.extractInterface.v1;

import com.uj.extractInterface.Employee;
import com.uj.extractInterface.PayrollDatabase;
import org.junit.Test;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

import static org.junit.Assert.assertEquals;

/**
 * Created by jehan on 12/24/2014.
 */
public class PaydayTransactionTest {
    FakeDatabase db = new FakeDatabase();

    @Test
    public void testPayDay() {
        Transaction t = new PaydayTransaction(
                getTestingDatabase(), new TRansactionLog());

        t.run();

        assertEquals(getSampleCheck(12), getTestingDatabase().findCheck(12), 0);
    }

    private FakeDatabase getTestingDatabase() {
        return db;
    }

    private double getSampleCheck(int number) {
        double baseSalary = 5000;
        return baseSalary * number;
    }

    private class FakeDatabase extends PayrollDatabase {
        private int number = 12;
        private double totalPaied;
        private List<Employee> employees;

        @Override
        public Iterator getEmployees() {
            employees = new ArrayList<Employee>(number);
            for (int i = 0; i < number; i++) {
                Employee e = new Employee();
                employees.add(e);
            }

            return employees.iterator();
        }

        public double findCheck(int number) {
            this.number = number;
            for (Employee e : employees) {
                totalPaied += e.getSalary();
            }
            return totalPaied;
        }

    }

}
