
#import <Instagram/FBSDKURLOpening.h>
#import <Instagram/FBSDKWebDialogDelegate.h>

@class FBSDKLoginManagerLogger, FBSDKKeychainStore, UIViewController, NSSet, NSString;

@interface FBSDKLoginManager : NSObject <FBSDKURLOpening, FBSDKWebDialogDelegate> {

	/*^block*/id _handler;
	FBSDKLoginManagerLogger* _logger;
	char _performingLogIn;
	FBSDKKeychainStore* _keychainStore;
	unsigned _defaultAudience;
	unsigned _loginBehavior;
	UIViewController* _fromViewController;
	NSSet* _requestedPermissions;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIViewController * fromViewController;              //@synthesize fromViewController=_fromViewController - In the implementation block
@property (nonatomic,readonly) NSSet * requestedPermissions;                            //@synthesize requestedPermissions=_requestedPermissions - In the implementation block
@property (assign,nonatomic) unsigned defaultAudience;                                  //@synthesize defaultAudience=_defaultAudience - In the implementation block
@property (assign,nonatomic) unsigned loginBehavior;                                    //@synthesize loginBehavior=_loginBehavior - In the implementation block
+(id)stringForChallenge;
+(void)renewSystemCredentials:(/*^block*/id)arg1 ;
+(void)initialize;
-(void)logInWithPublishPermissions:(id)arg1 fromViewController:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)logInWithReadPermissions:(id)arg1 fromViewController:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)logOut;
-(void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)webDialog:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webDialogDidCancel:(id)arg1 ;
-(unsigned)defaultAudience;
-(void)setDefaultAudience:(unsigned)arg1 ;
-(unsigned)loginBehavior;
-(void)setLoginBehavior:(unsigned)arg1 ;
-(void)assertPermissions:(id)arg1 ;
-(void)logInWithPermissions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)loadExpectedChallenge;
-(void)storeExpectedChallenge:(id)arg1 ;
-(void)determineRecentlyGrantedPermissions:(id*)arg1 recentlyDeclinedPermissions:(id*)arg2 forGrantedPermission:(id)arg3 declinedPermissions:(id)arg4 ;
-(void)validateReauthentication:(id)arg1 withResult:(id)arg2 ;
-(void)invokeHandler:(id)arg1 error:(id)arg2 ;
-(void)logInWithBehavior:(unsigned)arg1 ;
-(id)logInParametersWithPermissions:(id)arg1 ;
-(void)performNativeLogInWithParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)performBrowserLogInWithParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)beginSystemLogIn;
-(void)performWebLogInWithParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)logInWithReadPermissions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)logInWithPublishPermissions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)completeAuthentication:(id)arg1 expectChallenge:(char)arg2 ;
-(void)setRequestedPermissions:(NSSet *)arg1 ;
-(NSSet *)requestedPermissions;
-(void)handleImplicitCancelOfLogIn;
-(void)performSystemLogIn;
-(void)fallbackToNativeBehavior;
-(void)continueSystemLogInWithTokenString:(id)arg1 error:(id)arg2 state:(id)arg3 ;
-(void)setFromViewController:(UIViewController *)arg1 ;
-(id)init;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(UIViewController *)fromViewController;
-(void)setHandler:(/*^block*/id)arg1 ;
@end

