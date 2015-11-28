
#import <Instagram/IGExploreFeedViewController.h>
#import <Instagram/IGFeedStatusViewDataSource.h>
#import <Instagram/IGNetworkSourceDelegate.h>

@class IGNetworkSource, NSMutableSet, NSString;

@interface IGExploreClusterViewController : IGExploreFeedViewController <IGFeedStatusViewDataSource, IGNetworkSourceDelegate> {

	IGNetworkSource* _networkSource;
	int _networkSourceStatus;
	NSMutableSet* _loggedImpressions;
	NSString* _clusterKey;

}

@property (nonatomic,retain) IGNetworkSource * networkSource;               //@synthesize networkSource=_networkSource - In the implementation block
@property (assign,nonatomic) int networkSourceStatus;                       //@synthesize networkSourceStatus=_networkSourceStatus - In the implementation block
@property (nonatomic,retain) NSMutableSet * loggedImpressions;              //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
@property (nonatomic,retain) NSString * clusterKey;                         //@synthesize clusterKey=_clusterKey - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int status; 
-(id)analyticsModule;
-(char)enableNavState;
-(IGNetworkSource *)networkSource;
-(void)setNetworkSource:(IGNetworkSource *)arg1 ;
-(void)networkSource:(id)arg1 didFetchObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFailWithError:(id)arg2 ;
-(NSMutableSet *)loggedImpressions;
-(void)setLoggedImpressions:(NSMutableSet *)arg1 ;
-(void)followStatusNotification:(id)arg1 ;
-(void)setNetworkSourceStatus:(int)arg1 ;
-(void)fetchMoreData;
-(void)logTap:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)logMediaClick:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)logFollow:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)logImpression:(id)arg1 viewed:(char)arg2 atIndex:(unsigned)arg3 ;
-(void)logMediaImpression:(id)arg1 viewed:(char)arg2 atIndex:(int)arg3 mediaIndex:(unsigned)arg4 ;
-(int)networkSourceStatus;
-(void)logEvent:(id)arg1 item:(id)arg2 atPosition:(unsigned)arg3 fullScreen:(char)arg4 ;
-(NSString *)clusterKey;
-(char)loadedOnce;
-(char)failedWithAuthorizationError;
-(id)emptyMessage;
-(id)initWithClusterKey:(id)arg1 type:(id)arg2 ;
-(id)feedStatusViewDataSource;
-(id)exploreViewModelForObject:(id)arg1 ;
-(void)didSelectObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didSelectObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)didFollowObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didUnfollowObject:(id)arg1 atIndex:(int)arg2 ;
-(void)willDisplayObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didDisplayObject:(id)arg1 atIndex:(int)arg2 ;
-(void)willDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)didDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)setClusterKey:(NSString *)arg1 ;
-(unsigned)itemCount;
-(void)fetchData;
-(void)dealloc;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(int)status;
-(char)moreAvailable;
-(id)errorMessage;
@end

