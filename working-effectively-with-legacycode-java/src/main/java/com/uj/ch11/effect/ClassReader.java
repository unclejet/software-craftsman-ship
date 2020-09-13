package com.uj.ch11.effect;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/**
 * Created by jehan on 12/10/2014.
 */
public class ClassReader {
    private boolean isPublicSection = false;
    private CppClass parsedClass;
    private List<Declaration> declarations = new ArrayList<Declaration>();
    private Reader reader;

    public ClassReader(Reader reader) {
        this.reader = reader;
    }

    public void parse() throws Exception {
        TokenReader source = new TokenReader(reader);
        Token classToken = source.readToken();
        Token className = source.readToken();
        
        Token lbrace = source.readToken();
        matchBody(source);
        Token rbrace = source.readToken();

        Token semicolon = source.readToken();

        if (classToken.getType() == Token.CLASS
                && className.getType() == Token.IDENT
                && lbrace.getType() == Token.LBRACE
                && rbrace.getType() == Token.RBRACE
                && semicolon.getType() == Token.SEMIC) {
            parsedClass = new CppClass(className.getText(), declarations);
        }
    }

    private void matchBody(TokenReader source) {
        //...
        try {
            matchVirtualDeclaration(source);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private void matchVirtualDeclaration(TokenReader source) throws IOException {
        if (!(source.peekToken().getType() == Token.VIRTUAL))
            return;
        List<Token> declarationTokens = new ArrayList<Token>();
        declarationTokens.add(source.readToken());
        while (source.peekToken().getType() != Token.SEMIC) {
            declarationTokens.add(source.readToken());
        }
        declarationTokens.add(source.readToken());
        if (isPublicSection)
            declarations.add(new Declaration(declarationTokens));
    }
}
