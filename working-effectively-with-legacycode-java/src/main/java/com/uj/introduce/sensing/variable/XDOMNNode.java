package com.uj.introduce.sensing.variable;

/**
 * Created by jehan on 2/2/2015.
 */
public class XDOMNNode {
    static final int TF_G = 0;
    static final int TF_H = 1;
    static final int TF_GLOT = 2;
    public static final int TF_A = 3;

    private int type = -1;
    private boolean isChild;

    public XDOMNNode(int type) {
        this.type = type;
    }

    public int type() {
        return type;
    }

    public boolean isChild() {
        return isChild;
    }

    public void setIsChild(boolean isChild) {
        this.isChild = isChild;
    }
}
