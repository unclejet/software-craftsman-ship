package com.uj.the_case_of_the_irritating_parameter;

import org.junit.Test;

import java.security.cert.Certificate;


/**
 * @author ：UncleJet
 * @date ：Created in 2020/12/3 上午8:49
 * @description：
 */
public class CreditValidatorTest {

    @Test
    public void testNoSuccess() throws Exception {
        CreditMaster master = new CreditMaster("crm2.mas", true);
        FakeConnection connection = new FakeConnection();
        CreditValidator validator = new CreditValidator(
                connection, master, "a");
        connection.report  = new RFDIReport();

        Certificate result = validator.validateCustomer(new Customer());

//        assertEquals(Certificate.VALID, result.getStatus());
    }
}