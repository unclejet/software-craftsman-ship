package com.uj.linkedseam.parseandfixture;

import org.junit.Test;

import static org.junit.Assert.*;

/**
 * @author ：UncleJet
 * @date ：Created in 2020/11/20 上午7:21
 * @description：
 */
public class FitFilterTest {
    /**
     * 根据classpath导入的 parse_and_fixture jar包不同，会打印不同的结果
     */
    @Test
    public void filterWithFakeParseAndFixture() {
        FitFilter fitFilter = new FitFilter();
        fitFilter.run(null);
    }
}