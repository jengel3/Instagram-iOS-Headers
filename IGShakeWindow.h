
#import <UIKit/UIWindow.h>
#import <Instagram/IGRageShakeViewControllerDelegate.h>

@class IGUser, NSString;

@interface IGShakeWindow : UIWindow <IGRageShakeViewControllerDelegate> {

	char _isReporting;
	IGUser* _userToSuggest;
	double _motionStart;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didDismissRageShakeViewController:(id)arg1 didSendReport:(char)arg2 ;
-(id)windowDescriptionData;
-(void)promptBugReporter;
-(void)showBugReporterForType:(int)arg1 ;
-(id)screenshotData;
-(void)presentReportThankYouAlert;
-(void)reportCrash;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)motionEnded:(int)arg1 withEvent:(id)arg2 ;
-(void)motionBegan:(int)arg1 withEvent:(id)arg2 ;
@end

