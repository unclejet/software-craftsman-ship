package com.uj.study.revert_string;

import org.junit.jupiter.api.Test;

import static org.hamcrest.CoreMatchers.is;
import static org.hamcrest.MatcherAssert.assertThat;

/**
 * @author ：UncleJet
 * @date ：Created in 2021/1/27 上午11:38
 * @description：
 * 题目描述
 * 接受一个只包含小写字母的字符串，然后输出该字符串反转后的字符串。（字符串长度不超过1000）
 *
 * 输入描述:
 * 输入一行，为一个只包含小写字母的字符串。
 *
 * 输出描述:
 * 输出该字符串反转后的字符串。
 *
 * 示例1
 * 输入
 * 复制
 * abcd
 * 输出
 * 复制
 * dcba
 */
public class StringRevertTest {
    @Test
    void revertString() {
        String input = "abcd";
        assertThat(StringRevert.revert(input), is("dcba"));
    }
}
