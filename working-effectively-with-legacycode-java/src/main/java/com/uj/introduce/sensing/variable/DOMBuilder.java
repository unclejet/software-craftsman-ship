package com.uj.introduce.sensing.variable;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

import static com.uj.introduce.sensing.variable.XDOMNNode.*;

/**
 * Created by jehan on 2/2/2015.
 */
public class DOMBuilder {
    boolean nodeAdded = false;
    private Object m_state;

    void processNode(XDOMNSnippet root, List childNodes) {
        if (root != null) {
            if (childNodes != null)
                root.addNode(new XDOMNSnippet(childNodes));
            root.addChild(XDOMNSnippet.NullSnippet);
        }
        List paraList = new ArrayList();
        XDOMNSnippet snippet = new XDOMNReSnippet();
        snippet.setSource(m_state);
        for (Iterator it = childNodes.iterator(); it.hasNext();) {
            XDOMNNode node = (XDOMNNode)it.next();
            if (isBaseChild(node)) {
                paraList.add(node);
                nodeAdded = true;
            }
            //...
        }
        //...
    }

    private boolean isBaseChild(XDOMNNode node) {
        return node.type() == TF_G || node.type() == TF_H ||
                (node.type() == TF_GLOT && node.isChild());
    }
}
