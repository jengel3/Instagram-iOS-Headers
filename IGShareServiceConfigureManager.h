
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGMixiAdvancedOptionsDelegate.h>

@protocol IGShareServiceConfigureManagerDelegate;
@class UIViewController, NSString;

@interface IGShareServiceConfigureManager : NSObject <IGActionSheetDelegate, IGMixiAdvancedOptionsDelegate> {

	int _presentationStyle;
	id<IGShareServiceConfigureManagerDelegate> _delegate;

}

@property (assign,nonatomic) int presentationStyle;                                                   //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,nonatomic,__weak) id<IGShareServiceConfigureManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)showAdvancedOptionsForServiceType:(int)arg1 ;
-(void)configureServiceType:(int)arg1 ;
-(void)onFlickrLoginCompleted;
-(void)onFacebookLoginCompleted;
-(void)onFoursquareLoginCompleted;
-(void)onServiceReauthenticationStarted:(id)arg1 ;
-(void)onServiceReauthenticationFinished:(id)arg1 ;
-(void)onServiceReauthenticationLoginNeeded:(id)arg1 ;
-(void)onTwitterLoginCompleted;
-(void)displayViewController:(id)arg1 forServiceType:(int)arg2 ;
-(void)onWeiboLoginCompleted;
-(void)onMixiLoginCompleted;
-(void)onVkLoginCompleted;
-(void)onVkLoginCancelledLogin;
-(void)onAmebaLoginCompleted;
-(void)displayViewController:(id)arg1 forServiceType:(int)arg2 animated:(char)arg3 ;
-(void)onServiceLoginCompleted:(int)arg1 animated:(char)arg2 ;
-(void)onServiceLoginCompleted:(int)arg1 ;
-(void)presentMixiPrivacyPicker;
-(void)mixiDidSelectPrivacySetting:(int)arg1 ;
-(void)mixiDidCancelPrivacySetting;
-(void)dismissEmailModal;
-(void)onTumblrLoginCompleted;
-(void)setPresentationStyle:(int)arg1 ;
-(void)setDelegate:(id<IGShareServiceConfigureManagerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(id<IGShareServiceConfigureManagerDelegate>)delegate;
-(int)presentationStyle;
-(UIViewController *)viewController;
@end

