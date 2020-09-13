package com.uj.linkedseam.parseandfixture;

import fit.Fixture;
import fit.Parse;

import java.io.PrintWriter;

/**
 * Created by jehan on 11/26/2014.
 */
public class FitFilter {
    public String input;
    public Parse tables;
    public Fixture fixture = new Fixture();
    public PrintWriter output;

    public static void main (String argv[]) {
        new FitFilter().run(argv);
    }

    public void run (String argv[]) {
//        args(argv);
        process();
        exit();
    }

    public void process() {
        try {
            input = "hello";
            tables = new Parse(input);
            fixture.doTables(tables);
        } catch (Exception e) {
//            exception(e);
        }
        tables.print(output);
    }

    private void exit() {
    }
}
