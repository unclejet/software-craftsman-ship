package com.uj.extractAndOverrideCall;

import java.util.List;

/**
 * Created by jehan on 1/16/2015.
 */
public class PageLayout {
    private int id = 0;
    private List styles;
    private StyleTemplate template;
    //...
    protected void rebindStyles() {
        styles = formStyles(template, id);
        //...
    }

    protected List formStyles(StyleTemplate template, int id) {
        return StyleMaster.formStyles(template, id);
    }

    //...
}
