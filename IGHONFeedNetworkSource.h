

@protocol IGHONFeedNetworkSourceDelegate;
@interface IGHONFeedNetworkSource : NSObject {

	id<IGHONFeedNetworkSourceDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<IGHONFeedNetworkSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)beginFeedRequest;
-(id<IGHONFeedNetworkSourceDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

