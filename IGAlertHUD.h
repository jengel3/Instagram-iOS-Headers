
#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView, NSDate;

@interface IGAlertHUD : UIView {

	UILabel* _textLabel;
	UIActivityIndicatorView* _spinner;
	NSDate* _suppressAlertsUntil;

}
+(id)sharedHUD;
-(void)showWithProgressIndicatorInView:(id)arg1 ;
-(void)hideAfterShowingText:(id)arg1 ;
-(void)onAppResumed:(id)arg1 ;
-(void)showWithProgressIndicatorInView:(id)arg1 animated:(char)arg2 ;
-(char)canDisplay;
-(void)sizeToFitView:(id)arg1 ;
-(void)showInView:(id)arg1 animated:(char)arg2 ;
-(void)hideAfterDelay:(float)arg1 animated:(char)arg2 ;
-(void)showWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(char)arg3 animated:(char)arg4 ;
-(void)doShowWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(char)arg3 animated:(char)arg4 force:(char)arg5 ;
-(void)hideAfterShowingText:(id)arg1 animated:(char)arg2 ;
-(void)showWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(char)arg3 ;
-(void)hideAnimated:(char)arg1 ;
-(void)hide;
-(void)dealloc;
-(id)init;
@end

