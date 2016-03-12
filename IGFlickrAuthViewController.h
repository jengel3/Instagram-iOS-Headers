
#import <Instagram/IGViewController.h>
#import <Instagram/IGFlickrAuthDelegate.h>

@class UIWebView, IGFlickrAuthHelper, NSString;

@interface IGFlickrAuthViewController : IGViewController <IGFlickrAuthDelegate> {

	UIWebView* _webView;
	IGFlickrAuthHelper* _authHelper;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flickrDidNotAuthorize:(id)arg1 ;
-(void)flickrDidAuthorize:(id)arg1 ;
-(void)flickrWebViewLoadInProgress:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

