
#import <Instagram/IGPlainTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>

@class NSArray, NSMutableSet, IGTableViewInsetInfoView, UITableView, NSString;

@interface IGClusterBrowsingViewController : IGPlainTableViewController <UITableViewDataSource, UITableViewDelegate, IGRaindropAnalyticsDelegate> {

	NSArray* _clusters;
	int _currentExpandedSection;
	NSMutableSet* _displayedUsers;
	NSMutableSet* _displayedClusters;
	IGTableViewInsetInfoView* _infoView;

}

@property (nonatomic,retain) UITableView * tableView; 
@property (nonatomic,retain) NSArray * clusters;                               //@synthesize clusters=_clusters - In the implementation block
@property (assign,nonatomic) int currentExpandedSection;                       //@synthesize currentExpandedSection=_currentExpandedSection - In the implementation block
@property (nonatomic,retain) NSMutableSet * displayedUsers;                    //@synthesize displayedUsers=_displayedUsers - In the implementation block
@property (nonatomic,retain) NSMutableSet * displayedClusters;                 //@synthesize displayedClusters=_displayedClusters - In the implementation block
@property (nonatomic,retain) IGTableViewInsetInfoView * infoView;              //@synthesize infoView=_infoView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(char)enableNavState;
-(char)disableNavigationGesture;
-(char)disableNonEdgeNavigationGesture;
-(NSMutableSet *)displayedUsers;
-(void)setDisplayedUsers:(NSMutableSet *)arg1 ;
-(void)setCurrentExpandedSection:(int)arg1 ;
-(void)setDisplayedClusters:(NSMutableSet *)arg1 ;
-(int)currentExpandedSection;
-(id)expandedIndexArrayForSection:(int)arg1 ;
-(void)setDetailTextForHeaderCell:(id)arg1 inSection:(int)arg2 ;
-(void)logExpandCluster:(id)arg1 atPosition:(int)arg2 ;
-(char)indexPathIsLastRowOfSection:(id)arg1 ;
-(void)logExpandIndividualCluster:(id)arg1 atPosition:(int)arg2 ;
-(NSMutableSet *)displayedClusters;
-(void)logDisplayForCluster:(id)arg1 atPosition:(int)arg2 ;
-(void)logDisplayForUser:(id)arg1 atUserPosition:(int)arg2 inCluster:(id)arg3 atClusterPosition:(int)arg4 ;
-(void)configureHeaderCell:(id)arg1 forSection:(int)arg2 ;
-(id)newHeaderView;
-(void)fetchData;
-(IGTableViewInsetInfoView *)infoView;
-(void)setInfoView:(IGTableViewInsetInfoView *)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(int)viewType;
-(void)viewDidLoad;
-(void)setClusters:(NSArray *)arg1 ;
-(NSArray *)clusters;
-(char)sectionIsExpanded:(int)arg1 ;
@end

