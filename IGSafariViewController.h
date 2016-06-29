
#import <SafariServices/SFSafariViewController.h>
#import <Instagram/IGWebViewControllerBrowsing.h>

@protocol IGWebViewControllerBrowsingDelegate;
@class IGWebViewControllerAppearanceHandler, NSString;

@interface IGSafariViewController : SFSafariViewController <IGWebViewControllerBrowsing> {

	id<IGWebViewControllerBrowsingDelegate> _browsingDelegate;
	IGWebViewControllerAppearanceHandler* _appearanceHandler;

}

@property (nonatomic,retain) IGWebViewControllerAppearanceHandler * appearanceHandler;                     //@synthesize appearanceHandler=_appearanceHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGWebViewControllerBrowsingDelegate> browsingDelegate;              //@synthesize browsingDelegate=_browsingDelegate - In the implementation block
-(IGWebViewControllerAppearanceHandler *)appearanceHandler;
-(id<IGWebViewControllerBrowsingDelegate>)browsingDelegate;
-(void)setBrowsingDelegate:(id<IGWebViewControllerBrowsingDelegate>)arg1 ;
-(void)setAppearanceHandler:(IGWebViewControllerAppearanceHandler *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end

