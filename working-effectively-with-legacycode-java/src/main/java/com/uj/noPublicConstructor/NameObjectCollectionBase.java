package com.uj.noPublicConstructor;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * Created by jehan on 1/21/2015.
 */
public class NameObjectCollectionBase {
    protected List<String> fileNames = new ArrayList<String>();
    protected Map<String, IHttpPostedFile> httpPostedFileMap = new HashMap<String, IHttpPostedFile>();

    //...

    public List<String> getFileNames() {
        System.out.println("NameObjectCollectionBase get file names");
        return fileNames;
    }

    public IHttpPostedFile getHttpPostedFile(String name) {
        return httpPostedFileMap.get(name);
    }
}
