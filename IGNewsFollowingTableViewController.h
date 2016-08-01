
#import <Instagram/IGNewsTableViewController.h>
#import <Instagram/IGNetworkSourceDelegate.h>

@class IGNetworkSource, UIActivityIndicatorView, NSString;

@interface IGNewsFollowingTableViewController : IGNewsTableViewController <IGNetworkSourceDelegate> {

	char _tailLoading;
	IGNetworkSource* _networkSource;
	UIActivityIndicatorView* _tailLoadingIndicator;

}

@property (nonatomic,retain) IGNetworkSource * networkSource;                             //@synthesize networkSource=_networkSource - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * tailLoadingIndicator;              //@synthesize tailLoadingIndicator=_tailLoadingIndicator - In the implementation block
@property (assign,getter=isTailLoading,nonatomic) char tailLoading;                       //@synthesize tailLoading=_tailLoading - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(IGNetworkSource *)networkSource;
-(id)requestWithMaxID:(id)arg1 ;
-(void)networkSource:(id)arg1 didFetchObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setNetworkSource:(IGNetworkSource *)arg1 ;
-(char)shouldFetchMoreData;
-(void)setTailLoading:(char)arg1 ;
-(void)onFetchFailed:(id)arg1 ;
-(void)findFriendsButtonTapped;
-(void)finishLoadingWithStories:(id)arg1 ;
-(id)storiesByAppendingStories:(id)arg1 ;
-(void)refreshTailLoadingIndicatorIfNecessary:(char)arg1 ;
-(UIActivityIndicatorView *)tailLoadingIndicator;
-(void)configureTableView:(id)arg1 withTailLoadingIndicator:(id)arg2 ;
-(void)setTailLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(char)hasMore;
-(void)fetchMoreDataIfNecessary;
-(id)newEmptyFeedView;
-(char)isTailLoading;
-(void)fetchData;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(char)isLoading;
-(int)segment;
@end

