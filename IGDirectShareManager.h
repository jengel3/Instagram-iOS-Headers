
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGDirectRecipientDataSourceDelegate.h>

@protocol IGDirectShareManagerDataSource;
@class NSSet, IGUserSession, NSArray, IGDirectRecipientDataSource, UIView, NSString;

@interface IGDirectShareManager : IGGroupedTableViewController <UITableViewDataSource, UITableViewDelegate, IGDirectRecipientDataSourceDelegate> {

	char _isPerformingSearch;
	char _shouldShowSelf;
	id<IGDirectShareManagerDataSource> _datasource;
	NSSet* _usersToFilter;
	IGUserSession* _userSession;
	NSArray* _suggestedRecipients;
	IGDirectRecipientDataSource* _recipientDataSource;
	NSArray* _currentDataSourceResults;
	UIView* _recentsLabelHeaderView;
	UIView* _followingLabelHeaderView;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                     //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) NSArray * suggestedRecipients;                                     //@synthesize suggestedRecipients=_suggestedRecipients - In the implementation block
@property (nonatomic,retain) IGDirectRecipientDataSource * recipientDataSource;                 //@synthesize recipientDataSource=_recipientDataSource - In the implementation block
@property (nonatomic,retain) NSArray * currentDataSourceResults;                                //@synthesize currentDataSourceResults=_currentDataSourceResults - In the implementation block
@property (nonatomic,retain) UIView * recentsLabelHeaderView;                                   //@synthesize recentsLabelHeaderView=_recentsLabelHeaderView - In the implementation block
@property (nonatomic,retain) UIView * followingLabelHeaderView;                                 //@synthesize followingLabelHeaderView=_followingLabelHeaderView - In the implementation block
@property (assign,nonatomic) char isPerformingSearch;                                           //@synthesize isPerformingSearch=_isPerformingSearch - In the implementation block
@property (nonatomic,readonly) char shouldShowSelf;                                             //@synthesize shouldShowSelf=_shouldShowSelf - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                         //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectShareManagerDataSource> datasource;              //@synthesize datasource=_datasource - In the implementation block
@property (nonatomic,retain) NSSet * usersToFilter;                                             //@synthesize usersToFilter=_usersToFilter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)initWithUserSession:(id)arg1 ;
-(void)dataSourceDidReturnLocalResults:(id)arg1 ;
-(void)dataSourceDidStartLoading:(id)arg1 ;
-(void)dataSourceDidFinishLoading:(id)arg1 ;
-(void)dataSourceDidFailLoad:(id)arg1 ;
-(void)updateQuery:(id)arg1 ;
-(id)generateSuggestedRecipients;
-(id)initWithUserSession:(id)arg1 shouldShowSelf:(char)arg2 ;
-(NSSet *)usersToFilter;
-(id)filterOutUsers:(id)arg1 fromRecipients:(id)arg2 ;
-(void)setSuggestedRecipients:(NSArray *)arg1 ;
-(IGDirectRecipientDataSource *)recipientDataSource;
-(void)reloadFullUserList;
-(char)useNewDirectSearch;
-(NSArray *)currentDataSourceResults;
-(int)numberOfRecentsToShow;
-(int)numberOfDataSourceResultsToShow;
-(UIView *)recentsLabelHeaderView;
-(UIView *)followingLabelHeaderView;
-(id)verifiedSingleUserFromSuggestedRecipientsAtRow:(int)arg1 ;
-(id)userCellForUser:(id)arg1 atIndexPath:(id)arg2 ;
-(id)verifiedSingleUserFromDataSourceAtRow:(int)arg1 ;
-(id)tableView:(id)arg1 searchPromptCellForIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 noResultsCellForIndexPath:(id)arg2 ;
-(id)userIdsFromRecipientsList:(id)arg1 ;
-(char)shouldShowSelf;
-(void)setCurrentDataSourceResults:(NSArray *)arg1 ;
-(void)setUsersToFilter:(NSSet *)arg1 ;
-(void)setRecipientDataSource:(IGDirectRecipientDataSource *)arg1 ;
-(void)setRecentsLabelHeaderView:(UIView *)arg1 ;
-(void)setFollowingLabelHeaderView:(UIView *)arg1 ;
-(char)isPerformingSearch;
-(void)setIsPerformingSearch:(char)arg1 ;
-(void)fetchData;
-(NSArray *)suggestedRecipients;
-(void)setDatasource:(id<IGDirectShareManagerDataSource>)arg1 ;
-(id<IGDirectShareManagerDataSource>)datasource;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)viewDidLoad;
-(char)automaticallyAdjustsScrollViewInsets;
-(UIEdgeInsets)preferredContentInsets;
-(IGUserSession *)userSession;
@end

