
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIWindow.h>
#import <Instagram/IGRageShakeViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class IGShakeWindowEventLogger, NSString;

@interface IGShakeWindow : UIWindow <IGRageShakeViewControllerDelegate, UIAlertViewDelegate> {

	char _isReporting;
	IGShakeWindowEventLogger* _logger;
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
-(void)attachMostRecentLogFilesToViewController:(id)arg1 ;
-(id)screenshotData;
-(void)presentReportThankYouAlert;
-(void)onFlexTapGesture:(id)arg1 ;
-(void)reportCrash;
-(void)reportBug;
-(void)showAnalyticsEvents;
-(void)showTestSettings;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)motionEnded:(int)arg1 withEvent:(id)arg2 ;
-(void)motionBegan:(int)arg1 withEvent:(id)arg2 ;
@end

