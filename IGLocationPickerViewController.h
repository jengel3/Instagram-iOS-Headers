
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGAnalyticsModule.h>
#import <Instagram/IGLocationPickerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGSearchControllerDelegate.h>
#import <Instagram/IGLocationDataSourceDelegate.h>

@protocol IGLocationPickerDelegate;
@class IGSearchController, IGSearchBar, IGPlainTableView, UIBarButtonItem, NSString, IGLocationDataSource, IGKVOHandle;

@interface IGLocationPickerViewController : IGViewController <IGAnalyticsModule, IGLocationPickerDelegate, UITableViewDelegate, IGSearchControllerDelegate, IGLocationDataSourceDelegate> {

	IGSearchController* _searchController;
	IGSearchBar* _locationSearchBar;
	IGPlainTableView* _tableView;
	UIBarButtonItem* _locateButton;
	int _previousStatusBarStyle;
	NSString* _searchSessionId;
	char _isInteractive;
	IGLocationDataSource* _locationDataSource;
	id<IGLocationPickerDelegate> _delegate;
	int _numOfViewedResults;
	IGKVOHandle* _contentOffsetObserver;
	NSString* _rankToken;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IGKVOHandle * contentOffsetObserver;                       //@synthesize contentOffsetObserver=_contentOffsetObserver - In the implementation block
@property (nonatomic,readonly) NSString * rankToken;                                    //@synthesize rankToken=_rankToken - In the implementation block
@property (nonatomic,retain) IGLocationDataSource * locationDataSource;                 //@synthesize locationDataSource=_locationDataSource - In the implementation block
@property (assign,nonatomic) char isInteractive;                                        //@synthesize isInteractive=_isInteractive - In the implementation block
@property (assign,nonatomic,__weak) id<IGLocationPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int numOfViewedResults;                                    //@synthesize numOfViewedResults=_numOfViewedResults - In the implementation block
-(char)enableNavState;
-(id)analyticsModule;
-(NSString *)rankToken;
-(IGLocationDataSource *)locationDataSource;
-(void)setLocationDataSource:(IGLocationDataSource *)arg1 ;
-(void)onCancelModal;
-(void)setIsInteractive:(char)arg1 ;
-(void)locationPickerViewController:(id)arg1 didFinish:(char)arg2 withLocation:(id)arg3 ;
-(void)locationDataSourceDidStartLoading;
-(void)locationDataSourceDidFinishLoadingDataSource:(id)arg1 ;
-(void)locationDataSourceDidFailLoading;
-(id)initWithSearchSessionId:(id)arg1 ;
-(void)makeSearchBar;
-(void)makeRefreshButton;
-(void)makeCancelButton;
-(void)onLocateButtonTapped;
-(void)loadLocationDataSource;
-(void)onLocationDenied:(id)arg1 ;
-(void)logSearchQueryResponseForDataSource:(id)arg1 ;
-(void)logSelectedLocationForCell:(id)arg1 indexPath:(id)arg2 locations:(id)arg3 ;
-(void)fetchLocations;
-(void)locationDataSourceDidFailToLocate;
-(void)locationDataSourceWasDeniedAccess;
-(int)numOfViewedResults;
-(void)setNumOfViewedResults:(int)arg1 ;
-(IGKVOHandle *)contentOffsetObserver;
-(void)searchControllerWillBeginSearch:(id)arg1 ;
-(void)searchControllerWillEndSearch:(id)arg1 ;
-(void)searchController:(id)arg1 searchTextDidChange:(id)arg2 ;
-(void)searchControllerSearchButtonTapped:(id)arg1 ;
-(void)setContentOffsetObserver:(IGKVOHandle *)arg1 ;
-(void)setDelegate:(id<IGLocationPickerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<IGLocationPickerDelegate>)delegate;
-(char)isInteractive;
-(char)prefersStatusBarHidden;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)updateTableInsets;
-(char)prefersNavigationBarHidden;
@end

