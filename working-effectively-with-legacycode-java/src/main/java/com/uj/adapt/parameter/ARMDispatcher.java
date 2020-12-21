package com.uj.adapt.parameter;

import java.util.Map;

/**
 * @author ：UncleJet
 * @date ：Created in 2020/12/18 上午8:36
 * @description：
 */
public class ARMDispatcher {
    private String pageStateName;
    private Map marketBindings;

    /**
     * 方法依赖了HttpServletRequest，该类不好用提取接口来解依赖
     * @param request
     */
    public void populate(HttpServletRequest request) {
        String [] values
                = request.getParameterValues(pageStateName);
        if (values != null && values.length  > 0)
        {
            marketBindings.put(pageStateName + getDateStamp(),
                    values[0]);
        }
        //...
    }

    /**
     * 引入ParameterSource可以解除对HttpServletRequest的依赖,比如FakeParameterSource
     * @param source
     */
    public void populate(ParameterSource source) {
        String values = source.getParameterForName(pageStateName);
        Object value = null;
        if (value != null) {
            marketBindings.put(pageStateName + getDateStamp(), value);
        }
        //...
    }

    private String getDateStamp() {
        return "";
    }
    //...
}
