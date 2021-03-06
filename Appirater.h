
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@protocol AppiraterDelegate;
@class UIAlertView, NSObject, NSString;

@interface Appirater : NSObject <UIAlertViewDelegate, SKStoreProductViewControllerDelegate> {

	UIAlertView* ratingAlert;
	NSObject*<AppiraterDelegate> _delegate;
	int _debugMode;
	NSString* _appName;
	NSString* _alertMessage;
	NSString* _alertTitle;
	NSString* _cancelButtonText;
	NSString* _rateButtonText;
	NSString* _rateLaterButtonText;
	NSString* _sendFeedbackButtonText;

}

@property (nonatomic,retain) UIAlertView * ratingAlert; 
@property (assign,nonatomic,__weak) NSObject*<AppiraterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int debugMode;                                             //@synthesize debugMode=_debugMode - In the implementation block
@property (nonatomic,copy) NSString * appName;                                          //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy) NSString * alertMessage;                                     //@synthesize alertMessage=_alertMessage - In the implementation block
@property (nonatomic,copy) NSString * alertTitle;                                       //@synthesize alertTitle=_alertTitle - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonText;                                 //@synthesize cancelButtonText=_cancelButtonText - In the implementation block
@property (nonatomic,copy) NSString * rateButtonText;                                   //@synthesize rateButtonText=_rateButtonText - In the implementation block
@property (nonatomic,copy) NSString * rateLaterButtonText;                              //@synthesize rateLaterButtonText=_rateLaterButtonText - In the implementation block
@property (nonatomic,copy) NSString * sendFeedbackButtonText;                           //@synthesize sendFeedbackButtonText=_sendFeedbackButtonText - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)appLaunched;
+(void)appLaunched:(char)arg1 ;
+(id)getRootViewController;
+(void)setModalOpen:(char)arg1 ;
+(void)rateApp;
+(void)closeModal;
+(void)setLogStringBlock:(/*^block*/id)arg1 ;
+(void)setDaysUntilPrompt:(double)arg1 ;
+(void)setUsesUntilPrompt:(int)arg1 ;
+(void)setSignificantEventsUntilPrompt:(int)arg1 ;
+(void)setTimeBeforeReminding:(double)arg1 ;
+(void)setUsesAnimation:(char)arg1 ;
+(void)setRatingDisabled:(char)arg1 ;
+(void)appEnteredForeground:(char)arg1 ;
+(void)userDidSignificantEvent:(char)arg1 ;
+(id)sharedInstance;
+(void)setDelegate:(id)arg1 ;
+(void)setStatusBarStyle:(int)arg1 ;
+(void)setUserDefaults:(id)arg1 ;
+(void)setAppId:(id)arg1 ;
-(NSString *)cancelButtonText;
-(void)setCancelButtonText:(NSString *)arg1 ;
-(void)setDebugMode:(int)arg1 ;
-(NSString *)sendFeedbackButtonText;
-(NSString *)rateLaterButtonText;
-(NSString *)rateButtonText;
-(void)setRatingAlert:(UIAlertView *)arg1 ;
-(UIAlertView *)ratingAlert;
-(int)debugMode;
-(int)appUpgradesCount;
-(char)trackingCurrentVersion;
-(void)resetWithCurrentVersion;
-(void)incrementUseCount;
-(char)ratingConditionsHaveBeenMet;
-(char)connectedToNetwork;
-(void)showRatingAlert;
-(void)incrementSignificantEventCount;
-(void)incrementAndRate:(char)arg1 ;
-(void)hideRatingAlert;
-(void)incrementSignificantEventAndRate:(char)arg1 ;
-(int)appUpgradesSeedCount;
-(void)setRateButtonText:(NSString *)arg1 ;
-(void)setRateLaterButtonText:(NSString *)arg1 ;
-(void)setSendFeedbackButtonText:(NSString *)arg1 ;
-(void)appWillResignActive;
-(void)setDelegate:(NSObject*<AppiraterDelegate>)arg1 ;
-(id)init;
-(NSObject*<AppiraterDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)setAlertTitle:(NSString *)arg1 ;
-(NSString *)alertTitle;
-(void)setDebugModeEnabled:(char)arg1 ;
-(NSString *)alertMessage;
-(void)setAlertMessage:(NSString *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appName;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end

