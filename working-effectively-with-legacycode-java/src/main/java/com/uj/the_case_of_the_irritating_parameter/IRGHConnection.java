package com.uj.the_case_of_the_irritating_parameter;

/**
 * @author ：UncleJet
 * @date ：Created in 2020/12/3 上午8:42
 * @description：
 */
public interface IRGHConnection {
    void connect();
    void disconnect();
    RFDIReport RFDIReportFor(int id);
    ACTIOReport ACTIOReportFor(int customerID);
}
