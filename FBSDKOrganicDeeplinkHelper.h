
#import <Instagram/SFSafariViewControllerDelegate.h>

@class UIWindow, UIViewController, NSString;

@interface FBSDKOrganicDeeplinkHelper : NSObject <SFSafariViewControllerDelegate> {

	UIWindow* _safariWindow;
	UIViewController* _safariViewController;
	/*^block*/id _handler;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fetchOrganicDeeplink:(/*^block*/id)arg1 ;
-(id)constructDeeplinkRetrievalUrl;
-(void)presentSafariViewController;
-(void)cleanUpSafariViewController;
-(void)safariViewController:(id)arg1 didCompleteInitialLoad:(char)arg2 ;
@end

