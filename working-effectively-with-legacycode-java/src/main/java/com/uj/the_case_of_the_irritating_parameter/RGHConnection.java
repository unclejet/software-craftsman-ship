package com.uj.the_case_of_the_irritating_parameter;

import java.io.IOException;

/**
 * @author ：UncleJet
 * @date ：Created in 2020/12/3 上午8:36
 * @description： 要连接远程服务器获取需要的反馈信息，从而验证客户的信用额度
 */
public class RGHConnection implements IRGHConnection {
    public RGHConnection(int port, String Name, String passwd)
            throws IOException {
        //...
    }

    @Override
    public void connect() {

    }

    @Override
    public void disconnect() {

    }

    @Override
    public RFDIReport RFDIReportFor(int id) {
        return null;
    }

    @Override
    public ACTIOReport ACTIOReportFor(int customerID) {
        return null;
    }
}
