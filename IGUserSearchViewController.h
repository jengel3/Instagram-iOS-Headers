
#import <Instagram/IGSearchResultsViewController.h>
#import <Instagram/IGExploreSearchChildViewController.h>

@class IGUserListAutocompleteDataSource, NSString;

@interface IGUserSearchViewController : IGSearchResultsViewController <IGExploreSearchChildViewController>

@property (nonatomic,readonly) IGUserListAutocompleteDataSource * dataSource; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsExtras;
-(char)enableNavState;
-(id)fallbackIcon;
-(id)initWithHostingViewController:(id)arg1 dataSource:(id)arg2 ;
-(void)reloadTableView;
-(void)logItemTap:(id)arg1 atRow:(int)arg2 searchString:(id)arg3 ;
-(id)searchBarPlaceholder;
-(void)filterBySearchString:(id)arg1 ;
-(void)clearSearchHistory;
-(void)logSearchCancelEventForSearchString:(id)arg1 ;
-(void)logSearchCancelRaindropEvent;
-(void)logRaindropSearchQueryEvent;
-(id)userIdsArray;
-(id)accessibilityIdentifier;
-(int)viewType;
-(void)viewDidLoad;
-(int)searchType;
@end

