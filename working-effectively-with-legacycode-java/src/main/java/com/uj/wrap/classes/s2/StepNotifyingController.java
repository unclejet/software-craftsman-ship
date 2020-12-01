package com.uj.wrap.classes.s2;

import java.util.List;

/**
 * @author ：UncleJet
 * @date ：Created in 2020/12/1 上午9:02
 * @description：装饰器也可以子类自封装
 * ToolController controller = new StepNotifyingController(
 *                        new AlarmingController
 *                        ( new ACMEController()), notifyees);
 */
public class StepNotifyingController extends ToolControllerDecorator
{
    private List notifyees;
    public StepNotifyingController(ToolController controller,
                                   List notifyees) {
        super(controller);
        this.notifyees = notifyees;
    }

    //这里的notify就是对通用step进行了装饰功能
    public void step() {
        // notify all notifyees here ...
        controller.step();
    }
}
