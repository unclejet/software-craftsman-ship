package com.uj.adapt.parameter;

/**
 * @author ：UncleJet
 * @date ：Created in 2020/12/18 上午8:43
 * @description：
 */
public class FakeParameterSource implements ParameterSource {
    public String value;
    @Override
    public String getParameterForName(String pageStateName) {
        return value;
    }
}
