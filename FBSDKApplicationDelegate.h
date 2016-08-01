
#import <Instagram/FBSDKContainerViewControllerDelegate.h>

@protocol FBSDKURLOpening;
@class FBSDKBridgeAPIRequest, UIViewController, NSString;

@interface FBSDKApplicationDelegate : NSObject <FBSDKContainerViewControllerDelegate> {

	FBSDKBridgeAPIRequest* _pendingRequest;
	/*^block*/id _pendingRequestCompletionBlock;
	id<FBSDKURLOpening> _pendingURLOpen;
	/*^block*/id _organicDeeplinkHandler;
	char _expectingBackground;
	UIViewController* _safariViewController;
	char _active;

}

@property (nonatomic,copy) id organicDeeplinkHandler;                    //@synthesize organicDeeplinkHandler=_organicDeeplinkHandler - In the implementation block
@property (getter=isActive,nonatomic,readonly) char active;              //@synthesize active=_active - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initializeWithLaunchData:(id)arg1 ;
+(id)sharedInstance;
+(void)load;
-(void)openBridgeAPIRequest:(id)arg1 useSafariViewController:(char)arg2 fromViewController:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)openURL:(id)arg1 sender:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)openURLWithSafariViewController:(id)arg1 sender:(id)arg2 fromViewController:(id)arg3 handler:(/*^block*/id)arg4 ;
-(char)_handleBridgeAPIResponseURL:(id)arg1 sourceApplication:(id)arg2 ;
-(void)_logIfAppLinkEvent:(id)arg1 ;
-(void)_cancelBridgeRequest;
-(void)viewControllerDidDisappear:(id)arg1 animated:(char)arg2 ;
-(void)setOrganicDeeplinkHandler:(id)arg1 ;
-(id)organicDeeplinkHandler;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isActive;
-(id)_init;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
@end

