/*!
    RFScrollViewPageControl
    RFUI

    Copyright (c) 2013 BB9z
    https://github.com/RFUI/Alpha

    The MIT License (MIT)
    http://www.opensource.org/licenses/mit-license.php

    Alpha
 */

#import "RFUI.h"
#import "RFInitializing.h"

@interface RFScrollViewPageControl : UIPageControl
<RFInitializing>

@property(weak, nonatomic) IBOutlet UIScrollView *scrollView;

@property(assign, nonatomic) BOOL supportHalfPage;

// Generally, you don’t needs call this method manually.
- (void)setNeedsUpdatePage;
@end
