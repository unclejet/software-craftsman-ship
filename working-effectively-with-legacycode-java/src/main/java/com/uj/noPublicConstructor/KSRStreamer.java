package com.uj.noPublicConstructor;


import javax.lang.model.element.Name;
import java.util.ArrayList;
import java.util.List;

import static com.uj.noPublicConstructor.HttpFileCollection.*;

/**
 * Created by jehan on 1/21/2015.
 */
public class KSRStreamer {

    //...

    public List<String> getKSRStreams(NameObjectCollectionBase files) {
        List<String> result = new ArrayList<String>();
        for (String name : files.getFileNames()) {
            IHttpPostedFile file = files.getHttpPostedFile(name);
            if (file.getName().endsWith(".ksr") ||
                    (file.getName().endsWith(".txt") && file.getLength() > HttpPostedFile.MIN_LEN)) {
                //...
                result.add(file.getContent());
            }
        }

        return result;
    }


}
