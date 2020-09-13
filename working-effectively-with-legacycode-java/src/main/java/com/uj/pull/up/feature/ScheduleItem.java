package com.uj.pull.up.feature;

/**
 * Created by jehan on 2/28/2015.
 */
public class ScheduleItem {
    public static final int BASIC = 0;
    public static final int TRANSIENT = 1;
    private final String name;
    private final int setupTime;
    private final int finishTime;
    private final int type;

    public ScheduleItem(String name, int setupTime, int finishTime, int type) {
        this.name = name;
        this.setupTime = setupTime;
        this.finishTime = finishTime;
        this.type = type;
    }

    public int getType() {
        return type;
    }

    public int getSetupTime() {
        return setupTime;
    }

    public int finishingTime() {
        return finishTime;
    }
}
