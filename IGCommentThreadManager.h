

@protocol IGCommentThreadManagerDelegate, IGFeedItemLoggingProviderDelegate;
@class IGFeedItem;

@interface IGCommentThreadManager : NSObject {

	char _loading;
	IGFeedItem* _feedItem;
	id<IGCommentThreadManagerDelegate> _delegate;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;

}

@property (nonatomic,__weak,readonly) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                               //@synthesize loading=_loading - In the implementation block
@property (nonatomic,readonly) IGFeedItem * feedItem;                                                     //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGCommentThreadManagerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
-(IGFeedItem *)feedItem;
-(void)loadCommentsForNextPage:(char)arg1 ;
-(id)initWithPost:(id)arg1 loggingDelegate:(id)arg2 ;
-(void)loadFirstPage;
-(void)postCommentText:(id)arg1 ;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(void)loadMore;
-(void)setDelegate:(id<IGCommentThreadManagerDelegate>)arg1 ;
-(id<IGCommentThreadManagerDelegate>)delegate;
-(char)isLoading;
-(void)setLoading:(char)arg1 ;
@end

