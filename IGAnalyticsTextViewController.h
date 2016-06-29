
#import <Instagram/IGViewController.h>

@class UITextView;

@interface IGAnalyticsTextViewController : IGViewController {

	UITextView* _textView;

}
-(id)analyticsModule;
-(id)initWithText:(id)arg1 title:(id)arg2 ;
-(void)viewDidLoad;
-(char)automaticallyAdjustsScrollViewInsets;
@end

