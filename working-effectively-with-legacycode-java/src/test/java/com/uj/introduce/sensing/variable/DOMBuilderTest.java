package com.uj.introduce.sensing.variable;

import org.junit.Assert;
import org.junit.Test;

import java.util.ArrayList;
import java.util.List;

import static org.junit.Assert.*;

/**
 * Created by jehan on 2/2/2015.
 */
public class DOMBuilderTest {
    @Test
    public void testAddNodeOnBasicChild() throws Exception {
        DOMBuilder builder = new DOMBuilder();
        List children = new ArrayList();
        XDOMNNode node = new XDOMNNode(XDOMNNode.TF_G);
        node.setIsChild(true);
        children.add(node);

        builder.processNode(new XDOMNSnippet(new ArrayList()), children);

        assertTrue(builder.nodeAdded);

    }

    @Test
    public void testNoAddNodeOnNonBasicChild() throws Exception {
        DOMBuilder builder = new DOMBuilder();
        List children = new ArrayList();
        XDOMNNode node = new XDOMNNode(XDOMNNode.TF_A);
        node.setIsChild(true);
        children.add(node);

        builder.processNode(new XDOMNSnippet(new ArrayList()), children);

        assertFalse(builder.nodeAdded);

    }
}
