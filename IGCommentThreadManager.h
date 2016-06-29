
#import <Instagram/IGRealtimeOperationDelegate.h>

@protocol IGCommentThreadManagerDelegate, IGFeedItemLoggingProviderDelegate;
@class IGFeedItem, IGRealtimeManager, NSString;

@interface IGCommentThreadManager : NSObject <IGRealtimeOperationDelegate> {

	char _loading;
	IGFeedItem* _feedItem;
	id<IGCommentThreadManagerDelegate> _delegate;
	IGRealtimeManager* _realtimeManager;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;

}

@property (nonatomic,readonly) IGRealtimeManager * realtimeManager;                                       //@synthesize realtimeManager=_realtimeManager - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                               //@synthesize loading=_loading - In the implementation block
@property (nonatomic,readonly) IGFeedItem * feedItem;                                                     //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGCommentThreadManagerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedItem *)feedItem;
-(id)initWithPost:(id)arg1 loggingDelegate:(id)arg2 ;
-(void)loadAndSubscribeToRealtime;
-(void)unsubscribeFromRealtime;
-(void)postCommentText:(id)arg1 ;
-(void)loadCommentsForNextPage:(char)arg1 ;
-(void)subscribeToRealtime:(id)arg1 patches:(id)arg2 ;
-(IGRealtimeManager *)realtimeManager;
-(void)handleRealtimeOperation:(id)arg1 ;
-(id)pkForRealtimeOperation:(id)arg1 ;
-(void)handleRealtimeRefreshRequest;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(void)loadMore;
-(void)setDelegate:(id<IGCommentThreadManagerDelegate>)arg1 ;
-(id<IGCommentThreadManagerDelegate>)delegate;
-(char)isLoading;
-(void)setLoading:(char)arg1 ;
@end

