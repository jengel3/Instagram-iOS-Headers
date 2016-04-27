
#import <Instagram/IGNetworkSourceDelegate.h>

@protocol IGEventServiceNetworkDelegate, IGEventServiceCacheDelegate;
@class NSString, NSArray, IGNetworkSource, IGEventFeedDataArchiver, IGEventFeedDataCache, IGEventServiceConfiguration;

@interface IGEventService : NSObject <IGNetworkSourceDelegate> {

	NSString* _eventTitle;
	NSArray* _cachedPosts;
	id<IGEventServiceNetworkDelegate> _networkDelegate;
	id<IGEventServiceCacheDelegate> _cacheDelegate;
	IGNetworkSource* _networkSource;
	IGEventFeedDataArchiver* _feedDataArchiver;
	IGEventFeedDataCache* _feedDataCache;
	IGEventServiceConfiguration* _configuration;
	NSString* _eventId;
	NSString* _eventHeader;
	NSString* _currentUserPK;

}

@property (assign,nonatomic,__weak) id<IGEventServiceNetworkDelegate> networkDelegate;              //@synthesize networkDelegate=_networkDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventServiceCacheDelegate> cacheDelegate;                  //@synthesize cacheDelegate=_cacheDelegate - In the implementation block
@property (nonatomic,readonly) IGNetworkSource * networkSource;                                     //@synthesize networkSource=_networkSource - In the implementation block
@property (nonatomic,readonly) IGEventFeedDataArchiver * feedDataArchiver;                          //@synthesize feedDataArchiver=_feedDataArchiver - In the implementation block
@property (nonatomic,readonly) IGEventFeedDataCache * feedDataCache;                                //@synthesize feedDataCache=_feedDataCache - In the implementation block
@property (nonatomic,readonly) IGEventServiceConfiguration * configuration;                         //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSString * eventId;                                                  //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,readonly) NSString * eventTitle;                                               //@synthesize eventTitle=_eventTitle - In the implementation block
@property (nonatomic,readonly) NSString * eventHeader;                                              //@synthesize eventHeader=_eventHeader - In the implementation block
@property (nonatomic,readonly) NSString * currentUserPK;                                            //@synthesize currentUserPK=_currentUserPK - In the implementation block
@property (nonatomic,readonly) NSArray * cachedPosts;                                               //@synthesize cachedPosts=_cachedPosts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)reportUserDismissPost:(id)arg1 ;
-(NSString *)eventTitle;
-(IGEventFeedDataArchiver *)feedDataArchiver;
-(id<IGEventServiceCacheDelegate>)cacheDelegate;
-(id)networkParams;
-(NSString *)currentUserPK;
-(id<IGEventServiceNetworkDelegate>)networkDelegate;
-(void)cacheEventFeedData:(id)arg1 ;
-(NSArray *)cachedPosts;
-(void)loadPostsFromCache;
-(void)fetchPosts;
-(void)fetchMorePosts;
-(void)setNetworkDelegate:(id<IGEventServiceNetworkDelegate>)arg1 ;
-(void)setCacheDelegate:(id<IGEventServiceCacheDelegate>)arg1 ;
-(NSString *)eventHeader;
-(IGEventFeedDataCache *)feedDataCache;
-(id)initWithConfiguration:(id)arg1 feedDataCache:(id)arg2 ;
-(IGNetworkSource *)networkSource;
-(void)networkSource:(id)arg1 didFetchObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFailWithError:(id)arg2 ;
-(IGEventServiceConfiguration *)configuration;
-(void)cancelRequest;
-(NSString *)eventId;
@end

