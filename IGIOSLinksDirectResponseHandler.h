
#import <Instagram/IGDirectResponseHandling.h>

@protocol IGFeedItemDirectResponseLoggingProviderDelegate, IGDirectResponseLogging;
@class IGBrowserController, NSString;

@interface IGIOSLinksDirectResponseHandler : NSObject <IGDirectResponseHandling> {

	id<IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
	id<IGDirectResponseLogging> _logger;
	IGBrowserController* _browserController;

}

@property (nonatomic,__weak,readonly) id<IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (nonatomic,readonly) id<IGDirectResponseLogging> logger;                                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) IGBrowserController * browserController;                                                   //@synthesize browserController=_browserController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isCompatibleWithDirectResponse:(id)arg1 ;
-(id<IGFeedItemDirectResponseLoggingProviderDelegate>)loggingDelegate;
-(char)handleWebViewForLink:(id)arg1 feedItem:(id)arg2 directResponseInfo:(id)arg3 viewController:(id)arg4 completion:(/*^block*/id)arg5 ;
-(char)handlePhoneNumberForURI:(id)arg1 showCallConfirmation:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBrowserController:(IGBrowserController *)arg1 ;
-(IGBrowserController *)browserController;
-(void)handleFeedItem:(id)arg1 directResponseInfo:(id)arg2 viewController:(id)arg3 context:(id)arg4 showCallConfirmation:(char)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithLogger:(id)arg1 loggingDelegate:(id)arg2 ;
-(id<IGDirectResponseLogging>)logger;
@end

