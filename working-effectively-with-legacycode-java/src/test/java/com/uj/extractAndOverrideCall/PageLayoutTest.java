package com.uj.extractAndOverrideCall;

import org.junit.Assert;
import org.junit.Test;

import java.util.ArrayList;
import java.util.List;

/**
 * Created by jehan on 1/16/2015.
 */
public class PageLayoutTest {
    @Test
    public void formStyles() throws Exception {
        PageLayout layout = new FakePageLayout();
        Assert.assertEquals(0, layout.formStyles(null, 0).size());
    }

    class FakePageLayout extends PageLayout {
        @Override
        protected List formStyles(StyleTemplate template, int id) {
            return new ArrayList();
        }
    }
}
