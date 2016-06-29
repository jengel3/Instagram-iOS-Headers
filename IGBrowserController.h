
#import <Instagram/IGWebViewControllerBrowsingDelegate.h>

@protocol IGFeedItemDirectResponseLoggingProviderDelegate;
@class IGFeedItem, IGDirectResponseInfo, IGComposedWebViewLogger, IGComposedWebViewSharingLogger;

@interface IGBrowserController : NSObject <IGWebViewControllerBrowsingDelegate> {

	id<IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
	IGFeedItem* _feedItem;
	IGDirectResponseInfo* _directResponseInfo;
	IGComposedWebViewLogger* _webViewLogger;
	IGComposedWebViewSharingLogger* _sharingLogger;
	double _webviewUsageStartTime;

}

@property (nonatomic,__weak,readonly) id<IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                                                     //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGDirectResponseInfo * directResponseInfo;                                                 //@synthesize directResponseInfo=_directResponseInfo - In the implementation block
@property (assign,nonatomic) double webviewUsageStartTime;                                                              //@synthesize webviewUsageStartTime=_webviewUsageStartTime - In the implementation block
@property (nonatomic,retain) IGComposedWebViewLogger * webViewLogger;                                                   //@synthesize webViewLogger=_webViewLogger - In the implementation block
@property (nonatomic,retain) IGComposedWebViewSharingLogger * sharingLogger;                                            //@synthesize sharingLogger=_sharingLogger - In the implementation block
-(IGDirectResponseInfo *)directResponseInfo;
-(IGFeedItem *)feedItem;
-(id<IGFeedItemDirectResponseLoggingProviderDelegate>)loggingDelegate;
-(id)initWithLoggingDelegate:(id)arg1 ;
-(void)openWebViewForURL:(id)arg1 feedItem:(id)arg2 directResponseInfo:(id)arg3 viewController:(id)arg4 useSafariViewController:(char)arg5 completion:(/*^block*/id)arg6 ;
-(void)setDirectResponseInfo:(IGDirectResponseInfo *)arg1 ;
-(id)safariViewControllerForURL:(id)arg1 ;
-(id)webViewControllerForURL:(id)arg1 feedItem:(id)arg2 ;
-(void)setWebViewLogger:(IGComposedWebViewLogger *)arg1 ;
-(IGComposedWebViewLogger *)webViewLogger;
-(void)setSharingLogger:(IGComposedWebViewSharingLogger *)arg1 ;
-(IGComposedWebViewSharingLogger *)sharingLogger;
-(void)setWebviewUsageStartTime:(double)arg1 ;
-(double)webviewUsageStartTime;
-(void)webViewControllerDidBeginBrowsing:(id)arg1 ;
-(void)webViewControllerDidEndBrowsing:(id)arg1 ;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
@end

