package com.uj.wrap.classes.s2;

/**
 * @author ：UncleJet
 * @date ：Created in 2020/12/1 上午9:01
 * @description：装饰器模式来实现wrap class
 * 这个类看起来没什么用，只是打了一个基础
 */
public abstract class ToolControllerDecorator extends ToolController {
    protected ToolController controller;

    public ToolControllerDecorator(ToolController controller) {
        this.controller = controller;
    }

    public void raise() {
        controller.raise();
    }

    public void lower() {
        controller.lower();
    }

    public void step() {
        controller.step();
    }

    public void on() {
        controller.on();
    }

    public void off() {
        controller.off();
    }
}
