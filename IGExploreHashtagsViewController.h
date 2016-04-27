
#import <Instagram/IGExploreFeedViewController.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGAnalyticsModule.h>

@class IGExploreNetworkSource, NSMutableSet, NSString;

@interface IGExploreHashtagsViewController : IGExploreFeedViewController <IGFeedNetworkSourceDelegate, IGAnalyticsModule> {

	IGExploreNetworkSource* _dataSource;
	NSMutableSet* _loggedImpressions;

}

@property (nonatomic,retain) IGExploreNetworkSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSMutableSet * loggedImpressions;                 //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)enableNavState;
-(id)analyticsModule;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2 ;
-(void)feedNetworkSource:(id)arg1 didRefreshObjects:(id)arg2 allObjects:(id)arg3 ;
-(NSMutableSet *)loggedImpressions;
-(void)setLoggedImpressions:(NSMutableSet *)arg1 ;
-(void)fetchMoreData;
-(void)logTap:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)logMediaClick:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)logImpression:(id)arg1 viewed:(char)arg2 atIndex:(unsigned)arg3 ;
-(void)logMediaImpression:(id)arg1 viewed:(char)arg2 atIndex:(int)arg3 mediaIndex:(unsigned)arg4 ;
-(id)feedStatusViewDataSource;
-(id)exploreViewModelForObject:(id)arg1 ;
-(void)didSelectObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didSelectObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)willDisplayObject:(id)arg1 atIndex:(int)arg2 ;
-(void)didDisplayObject:(id)arg1 atIndex:(int)arg2 ;
-(void)willDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)didDisplayObject:(id)arg1 atIndex:(int)arg2 mediaIndex:(unsigned)arg3 ;
-(void)fetchData;
-(id)initWithCoder:(id)arg1 ;
-(void)setDataSource:(IGExploreNetworkSource *)arg1 ;
-(id)init;
-(IGExploreNetworkSource *)dataSource;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithTitle:(id)arg1 ;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
@end

