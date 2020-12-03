package com.uj.the_case_of_the_irritating_parameter;

import java.security.cert.Certificate;

/**
 * @author ：UncleJet
 * @date ：Created in 2020/12/3 上午8:35
 * @description： CreditValidator的构造器参数有恼人的依赖
 */
public class CreditValidator {
    /**
     * 对RGHConnection的依赖可以采用提取接口, OLD
     * @param connection
     * @param master
     * @param validatorID
     */
//    public CreditValidator(RGHConnection connection,
//                           CreditMaster master,
//                           String validatorID) {
//        //...
//    }

    public CreditValidator(IRGHConnection connection,
                           CreditMaster master,
                           String validatorID) {
        //...
    }


    Certificate validateCustomer(Customer customer) throws InvalidCredit {
        //...
        return null;
    }

    //...
}
