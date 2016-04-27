

@class IGFeedItem, IGDirectResponseInfo, IGFeedDirectResponseHandler;

@interface IGCTAPresenterContext : NSObject {

	IGFeedItem* _feedItem;
	IGDirectResponseInfo* _directResponseInfo;
	IGFeedDirectResponseHandler* _directResponseHandler;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;                                            //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) IGDirectResponseInfo * directResponseInfo;                        //@synthesize directResponseInfo=_directResponseInfo - In the implementation block
@property (nonatomic,readonly) IGFeedDirectResponseHandler * directResponseHandler;              //@synthesize directResponseHandler=_directResponseHandler - In the implementation block
-(IGFeedItem *)feedItem;
-(IGDirectResponseInfo *)directResponseInfo;
-(id)initWithFeedItem:(id)arg1 directResponseInfo:(id)arg2 directResponseHandler:(id)arg3 ;
-(IGFeedDirectResponseHandler *)directResponseHandler;
@end

