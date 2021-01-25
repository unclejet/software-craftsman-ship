package com.uj.study.extract.nonrepeat.integer;

import com.uj.study.common.input.LineReader;

/**
 * @author ：unclejet
 * @date ：Created in 2020/8/10 上午7:23
 * @description：
 * @modified By：
 * @version:
 */
public class UserInputReader {
    private LineReader lineReader;

    public UserInputReader(LineReader lineReader) {
        this.lineReader = lineReader;

    }

    public int readInteger() {
        String inputStr = lineReader.readLine();
        while (!isValidInput(inputStr)) {
            System.out.println("please input a integer not end with 0:");
            inputStr = lineReader.readLine();
        }
        return Integer.parseInt(inputStr);
    }

    private boolean isValidInput(String inputStr) {
        return isInteger(inputStr) && !isZeroEnd(inputStr) ? true : false;
    }

    private boolean isZeroEnd(String inputStr) {
        return inputStr.endsWith("0") ? true : false;
    }

    private boolean isInteger(String inputStr) {
        try {
            Integer.parseInt(inputStr);
            return true;
        } catch (NumberFormatException e) {
            return false;
        }
    }



}
