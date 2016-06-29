
#import <Instagram/IGNetworkSourceDelegate.h>

@protocol IGEventServiceNetworkDelegate;
@class IGNetworkSource, NSString, NSArray, IGEventFeedDataCache, IGEventServiceConfiguration;

@interface IGEventService : NSObject <IGNetworkSourceDelegate> {

	IGNetworkSource* _networkSource;
	NSString* _eventTitle;
	NSArray* _cachedPosts;
	id<IGEventServiceNetworkDelegate> _networkDelegate;
	IGEventFeedDataCache* _feedDataCache;
	IGEventServiceConfiguration* _configuration;
	NSString* _eventId;
	NSString* _eventHeader;
	NSString* _currentUserPK;

}

@property (assign,nonatomic,__weak) id<IGEventServiceNetworkDelegate> networkDelegate;              //@synthesize networkDelegate=_networkDelegate - In the implementation block
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
-(id<IGEventServiceNetworkDelegate>)networkDelegate;
-(void)cacheEventFeedData:(id)arg1 ;
-(NSArray *)cachedPosts;
-(void)fetchMorePosts;
-(NSString *)eventHeader;
-(id)initWithConfiguration:(id)arg1 feedDataCache:(id)arg2 ;
-(void)setNetworkDelegate:(id<IGEventServiceNetworkDelegate>)arg1 ;
-(void)fetchPosts;
-(IGEventFeedDataCache *)feedDataCache;
-(id)requestWithMaxID:(id)arg1 ;
-(void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFetchObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFailWithError:(id)arg2 ;
-(NSString *)currentUserPK;
-(IGEventServiceConfiguration *)configuration;
-(char)isLoading;
-(void)cancelRequest;
-(NSString *)eventId;
@end

