
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGUserListNetworkDataSourceDelegate.h>

@protocol IGDirectShareManagerDataSource, IGAutocompleteDataSource;
@class NSSet, NSArray, IGUserListLocalDataSource, IGUserListNetworkDataSource, NSObject, UIView, NSString;

@interface IGDirectShareManager : IGGroupedTableViewController <UITableViewDataSource, UITableViewDelegate, IGUserListNetworkDataSourceDelegate> {

	char _isLoading;
	char _isPerformingSearch;
	id<IGDirectShareManagerDataSource> _datasource;
	NSSet* _usersToFilter;
	NSArray* _recentRecipientUsers;
	IGUserListLocalDataSource* _localUsersDataSource;
	IGUserListNetworkDataSource* _networkUsersDataSource;
	NSObject*<IGAutocompleteDataSource> _currentDataSource;
	UIView* _recentsLabelHeaderView;
	UIView* _followingLabelHeaderView;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                                          //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectShareManagerDataSource> datasource;               //@synthesize datasource=_datasource - In the implementation block
@property (nonatomic,retain) NSSet * usersToFilter;                                              //@synthesize usersToFilter=_usersToFilter - In the implementation block
@property (nonatomic,retain) NSArray * recentRecipientUsers;                                     //@synthesize recentRecipientUsers=_recentRecipientUsers - In the implementation block
@property (nonatomic,retain) IGUserListLocalDataSource * localUsersDataSource;                   //@synthesize localUsersDataSource=_localUsersDataSource - In the implementation block
@property (nonatomic,retain) IGUserListNetworkDataSource * networkUsersDataSource;               //@synthesize networkUsersDataSource=_networkUsersDataSource - In the implementation block
@property (assign,nonatomic) NSObject*<IGAutocompleteDataSource> currentDataSource;              //@synthesize currentDataSource=_currentDataSource - In the implementation block
@property (nonatomic,retain) UIView * recentsLabelHeaderView;                                    //@synthesize recentsLabelHeaderView=_recentsLabelHeaderView - In the implementation block
@property (nonatomic,retain) UIView * followingLabelHeaderView;                                  //@synthesize followingLabelHeaderView=_followingLabelHeaderView - In the implementation block
@property (assign,nonatomic) char isLoading;                                                     //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic) char isPerformingSearch;                                            //@synthesize isPerformingSearch=_isPerformingSearch - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateQuery:(id)arg1 ;
-(IGUserListLocalDataSource *)localUsersDataSource;
-(id)newHeaderViewWithTitle:(id)arg1 bottomLine:(char)arg2 ;
-(NSSet *)usersToFilter;
-(IGUserListNetworkDataSource *)networkUsersDataSource;
-(void)setCurrentDataSource:(NSObject*<IGAutocompleteDataSource>)arg1 ;
-(void)reloadFullUserList;
-(void)setIsPerformingSearch:(char)arg1 ;
-(NSArray *)recentRecipientUsers;
-(int)numberOfRecentsToShow;
-(NSObject*<IGAutocompleteDataSource>)currentDataSource;
-(UIView *)recentsLabelHeaderView;
-(UIView *)followingLabelHeaderView;
-(char)isPerformingSearch;
-(id)userCellForUser:(id)arg1 atIndexPath:(id)arg2 ;
-(id)searchPromptCellForIndexPath:(id)arg1 ;
-(id)noResultsCellForIndexPath:(id)arg1 ;
-(void)reloadNetworkUserList;
-(void)dataSourceDidStartLoading:(id)arg1 ;
-(void)dataSourceDidFinishLoading:(id)arg1 ;
-(void)dataSourceDidFailLoad:(id)arg1 ;
-(void)setUsersToFilter:(NSSet *)arg1 ;
-(void)setRecentRecipientUsers:(NSArray *)arg1 ;
-(void)setLocalUsersDataSource:(IGUserListLocalDataSource *)arg1 ;
-(void)setNetworkUsersDataSource:(IGUserListNetworkDataSource *)arg1 ;
-(void)setRecentsLabelHeaderView:(UIView *)arg1 ;
-(void)setFollowingLabelHeaderView:(UIView *)arg1 ;
-(void)fetchData;
-(void)setDatasource:(id<IGDirectShareManagerDataSource>)arg1 ;
-(id<IGDirectShareManagerDataSource>)datasource;
-(id)init;
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
-(char)isLoading;
-(void)setIsLoading:(char)arg1 ;
@end

