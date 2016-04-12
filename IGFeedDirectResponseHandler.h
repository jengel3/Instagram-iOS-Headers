
#import <Instagram/IGUnifiedWebViewControllerBrowsingLifeCycleDelegate.h>

@protocol IGFeedItemDirectResponseLoggingProviderDelegate, IGPresentationContext;
@class IGFeedItem, IGDirectResponseInfo, IGComposedWebViewLogger, IGComposedWebViewSharingLogger;

@interface IGFeedDirectResponseHandler : NSObject <IGUnifiedWebViewControllerBrowsingLifeCycleDelegate> {

	id<IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
	id<IGPresentationContext> _presentationContext;
	IGFeedItem* _feedItem;
	IGDirectResponseInfo* _directResponseInfo;
	IGComposedWebViewLogger* _webViewLogger;
	IGComposedWebViewSharingLogger* _sharingLogger;
	double _webviewUsageStartTime;

}

@property (assign,nonatomic,__weak) id<IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGPresentationContext> presentationContext;                                    //@synthesize presentationContext=_presentationContext - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                                                   //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGDirectResponseInfo * directResponseInfo;                                               //@synthesize directResponseInfo=_directResponseInfo - In the implementation block
@property (assign,nonatomic) double webviewUsageStartTime;                                                            //@synthesize webviewUsageStartTime=_webviewUsageStartTime - In the implementation block
@property (nonatomic,retain) IGComposedWebViewLogger * webViewLogger;                                                 //@synthesize webViewLogger=_webViewLogger - In the implementation block
@property (nonatomic,retain) IGComposedWebViewSharingLogger * sharingLogger;                                          //@synthesize sharingLogger=_sharingLogger - In the implementation block
-(void)setPresentationContext:(id<IGPresentationContext>)arg1 ;
-(IGFeedItem *)feedItem;
-(id<IGPresentationContext>)presentationContext;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)setLoggingDelegate:(id<IGFeedItemDirectResponseLoggingProviderDelegate>)arg1 ;
-(IGDirectResponseInfo *)directResponseInfo;
-(id<IGFeedItemDirectResponseLoggingProviderDelegate>)loggingDelegate;
-(id)initWithLoggingDelegate:(id)arg1 ;
-(void)handleDirectResponseActionForFeedItem:(id)arg1 currentPagingIndex:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleDirectResponseActionForFeedItem:(id)arg1 directResponseInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)openWebViewForURL:(id)arg1 feedItemContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDirectResponseInfo:(IGDirectResponseInfo *)arg1 ;
-(char)isNekoStyleDirectResponseInfo:(id)arg1 ;
-(void)useNekoDirectResponseForFeedItem:(id)arg1 directResponseInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)useOriginalStyleDirectResponseForFeedItem:(id)arg1 directResponseInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)logDidViewForFeedItem:(id)arg1 directResponseInfo:(id)arg2 context:(id)arg3 openTarget:(id)arg4 ;
-(char)isOriginalStyleDirectResponseInfo:(id)arg1 ;
-(void)useActionURLHandlerForFeedItem:(id)arg1 directResponseInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)logFailedActionForFeedItem:(id)arg1 directResponseInfo:(id)arg2 context:(id)arg3 openTarget:(id)arg4 ;
-(id)extraDictionaryForFeedItem:(id)arg1 directResponseInfo:(id)arg2 context:(id)arg3 openTarget:(id)arg4 ;
-(void)setWebViewLogger:(IGComposedWebViewLogger *)arg1 ;
-(IGComposedWebViewLogger *)webViewLogger;
-(void)setSharingLogger:(IGComposedWebViewSharingLogger *)arg1 ;
-(IGComposedWebViewSharingLogger *)sharingLogger;
-(void)setWebviewUsageStartTime:(double)arg1 ;
-(double)webviewUsageStartTime;
-(void)webViewControllerDidBeginBrowsing:(id)arg1 ;
-(void)webViewControllerDidEndBrowsing:(id)arg1 ;
@end

