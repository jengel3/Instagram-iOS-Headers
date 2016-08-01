
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView, NSDate;

@interface IGAlertHUD : UIView {

	UILabel* _textLabel;
	UIActivityIndicatorView* _spinner;
	NSDate* _suppressAlertsUntil;

}
+(id)sharedHUD;
-(void)onAppResumed:(id)arg1 ;
-(void)showWithProgressIndicatorInView:(id)arg1 animated:(char)arg2 ;
-(void)doShowWithText:(id)arg1 inView:(id)arg2 showsProgressIndicator:(char)arg3 removeAfterDelay:(char)arg4 animated:(char)arg5 force:(char)arg6 ;
-(void)showWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(char)arg3 animated:(char)arg4 ;
-(char)canDisplay;
-(void)sizeToFitContentWidth:(float)arg1 contentHeight:(float)arg2 ;
-(void)showInView:(id)arg1 animated:(char)arg2 ;
-(void)hideAfterDelay:(float)arg1 animated:(char)arg2 ;
-(void)hideAfterShowingText:(id)arg1 animated:(char)arg2 ;
-(void)showWithProgressIndicatorInView:(id)arg1 ;
-(void)showWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(char)arg3 ;
-(void)showWithProgressIndicatorAndText:(id)arg1 inView:(id)arg2 ;
-(void)hideAfterShowingText:(id)arg1 ;
-(void)hideAnimated:(char)arg1 ;
-(void)hide;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
@end

