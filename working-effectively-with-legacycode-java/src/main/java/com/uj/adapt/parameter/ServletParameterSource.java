package com.uj.adapt.parameter;

/**
 * @author ：UncleJet
 * @date ：Created in 2020/12/18 上午8:43
 * @description：
 */
public class ServletParameterSource implements ParameterSource {
    private HttpServletRequest request;

    public ServletParameterSource(HttpServletRequest request) {
        this.request = request;
    }

    @Override
    public String getParameterForName(String pageStateName) {
        String [] values = request.getParameterValues(pageStateName);
        if (values == null || values.length < 1)
            return null;
        return values[0];
    }
}
