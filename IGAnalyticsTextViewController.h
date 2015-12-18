
#import <Instagram/IGViewController.h>

@class UITextView;

@interface IGAnalyticsTextViewController : IGViewController {

	UITextView* _textView;

}
-(id)initWithText:(id)arg1 title:(id)arg2 ;
-(void)viewDidLoad;
-(char)automaticallyAdjustsScrollViewInsets;
@end

