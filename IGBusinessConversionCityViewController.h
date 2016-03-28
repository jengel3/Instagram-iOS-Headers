
#import <Instagram/IGViewController.h>
#import <Instagram/IGSearchBarDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol IGBusinessConversionCityViewControllerDelegate;
@class UITableView, NSArray, IGSearchBar, NSString;

@interface IGBusinessConversionCityViewController : IGViewController <IGSearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {

	char _noResultsFound;
	id<IGBusinessConversionCityViewControllerDelegate> _delegate;
	UITableView* _tableView;
	NSArray* _searchResults;
	IGSearchBar* _searchBar;
	NSString* _currentQuery;

}

@property (assign,nonatomic,__weak) id<IGBusinessConversionCityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                         //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * searchResults;                                                         //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) IGSearchBar * searchBar;                                                         //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,copy) NSString * currentQuery;                                                           //@synthesize currentQuery=_currentQuery - In the implementation block
@property (assign,nonatomic) char noResultsFound;                                                             //@synthesize noResultsFound=_noResultsFound - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)noResultsFound;
-(void)setNoResultsFound:(char)arg1 ;
-(void)fetchResultsForQuery:(id)arg1 ;
-(void)handleSearchResults:(id)arg1 ;
-(void)refreshCurrentSearch;
-(void)setDelegate:(id<IGBusinessConversionCityViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGBusinessConversionCityViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(IGSearchBar *)searchBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)setSearchBar:(IGSearchBar *)arg1 ;
-(void)setSearchResults:(NSArray *)arg1 ;
-(NSArray *)searchResults;
-(void)setCurrentQuery:(NSString *)arg1 ;
-(NSString *)currentQuery;
@end

