package com.uj.the_case_of_the_irritating_parameter;

/**
 * @author ：UncleJet
 * @date ：Created in 2020/12/3 上午8:49
 * @description：
 */
public class FakeConnection implements IRGHConnection {
    public RFDIReport report;

    @Override
    public void connect() {

    }

    @Override
    public void disconnect() {

    }

    @Override
    public RFDIReport RFDIReportFor(int id) {
        return report;
    }

    @Override
    public ACTIOReport ACTIOReportFor(int customerID) {
        return null;
    }
}
