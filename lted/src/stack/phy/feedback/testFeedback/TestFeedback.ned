//
//                           SimuLTE
// Copyright (C) 2012 Antonio Virdis, Daniele Migliorini, Giovanni
// Accongiagioco, Generoso Pagano, Vincenzo Pii.
//
// This file is part of a software released under the license included in file
// "license.pdf". This license can be also found at http://www.ltesimulator.com/
// The above file and the present reference are part of the software itself,
// and cannot be removed from it.
//


package lte_d2d.src.stack.phy.feedback.testFeedback;

import lte_d2d.src.stack.phy.feedback.*;


network TestFeedback
{
    submodules:
        lteDlFbGenerator: LteDlFeedbackGenerator {
            @display("p=96,71");
        }
        feedbackTester: FeedbackTester {
            @display("p=237,71");
        }
}
