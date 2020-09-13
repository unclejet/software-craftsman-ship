package com.uj.pull.up.feature;

/**
 * Created by jehan on 2/28/2015.
 */
public class Scheduler extends SchedulingServices {

    public void updateScheduleItem(ScheduleItem item)
            throws SchedulingException {
        try {
            validate(item);
        }
        catch (ConflictException e) {
            throw new SchedulingException(e);
        }
        //...
    }

    private void validate(ScheduleItem item)
            throws ConflictException {
        // make calls to a database
        //...
    }

}
