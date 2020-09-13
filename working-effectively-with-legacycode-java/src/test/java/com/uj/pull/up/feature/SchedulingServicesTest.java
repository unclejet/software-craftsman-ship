package com.uj.pull.up.feature;

import org.junit.Test;

import static org.junit.Assert.assertEquals;

/**
 * Created by jehan on 2/28/2015.
 */
public class SchedulingServicesTest {

    @Test
    public void testGetDeadTime() throws Exception {
        TestingSchedulingServices services = new TestingSchedulingServices();
        services.addItem(new ScheduleItem("a", 10, 20, ScheduleItem.BASIC));
        assertEquals(20, services.getDeadTime());
    }

    public class TestingSchedulingServices extends SchedulingServices
    {
        public TestingSchedulingServices() {
        }

        public void addItem(ScheduleItem item) {
            items.add(item);
        }
    }
}
