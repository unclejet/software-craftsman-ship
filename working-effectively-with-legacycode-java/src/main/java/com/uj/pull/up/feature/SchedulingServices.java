package com.uj.pull.up.feature;

import java.util.ArrayList;
import java.util.List;

/**
 * Created by jehan on 2/28/2015.
 */
public abstract class SchedulingServices {
    protected List<ScheduleItem> items = new ArrayList<ScheduleItem>();

    public int getDeadTime() {
        int result = 0;
        for (ScheduleItem item : items) {
            if (item.getType() != ScheduleItem.TRANSIENT && notShared(item)) {
                result += item.getSetupTime() + clockTime();
            }
            if (item.getType() != ScheduleItem.TRANSIENT) {
                result += item.finishingTime();
            } else {
                result += getStandardFinish(item);
            }
        }

        return result;
    }

    private int getStandardFinish(ScheduleItem item) {
        return -1;
    }

    private int clockTime() {
        return -1;
    }

    private boolean notShared(ScheduleItem item) {
        return false;
    }
}
