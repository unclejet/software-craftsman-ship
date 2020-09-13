package com.uj.resetSingleton;

import junit.framework.Assert;
import org.junit.Test;

/**
 * Created by jehan on 1/12/2015.
 */
public class FacilityTest {
    @Test
    public void noticeIsInvalidButPermitIsValid() throws Exception {
        System.out.println("make sure this test run first");
        PermitNotice notice = new PermitNotice(0, "a");
        PermitRepository.resetForTesting();
        Facility facility = new Facility(Facility.RESIDENCE, "a", notice);
        Assert.assertEquals(0, facility.getBasePermit().getPermitNumber());
    }

    @Test
    public void noticeIsInvalidAndPermitIsAlsoInvalid() throws Exception {
        System.out.println("this case should run second, this one depends on the first case");
        PermitNotice notice = new PermitNotice(1, "b");
        PermitRepository.resetForTesting();
        Facility facility = new Facility(Facility.RESIDENCE, "a", notice);
        Assert.assertEquals(1, facility.getBasePermit().getPermitNumber());
    }
}
