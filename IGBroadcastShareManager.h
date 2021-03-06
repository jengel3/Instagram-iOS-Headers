
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGLocationPickerDelegate.h>
#import <Instagram/IGLocationSuggestionDataSource.h>
#import <Instagram/IGLocationSuggestionDelegate.h>
#import <Instagram/IGShareListManagerDelegate.h>
#import <Instagram/IGUserInTaggingViewControllerDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGAnalyticsModule.h>
#import <Instagram/IGShareManager.h>

@class NSString, UIViewController, IGMediaMetadata, IGCollectionView, UIView, NSIndexPath, UIScrollView;

@interface IGBroadcastShareManager : IGViewController <IGLocationPickerDelegate, IGLocationSuggestionDataSource, IGLocationSuggestionDelegate, IGShareListManagerDelegate, IGUserInTaggingViewControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGAnalyticsModule, IGShareManager> {

	char _isStickyEnabled;
	NSString* _shareString;
	UIViewController* _delegate;
	IGMediaMetadata* _mediaMetadata;
	IGCollectionView* _collectionView;
	UIView* _headerView;
	UIView* _headerBackgroundView;
	float _locationSuggestionCellHeight;
	NSString* _searchSessionId;
	NSIndexPath* _shareIndexPath;

}

@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                 //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (nonatomic,retain) IGCollectionView * collectionView;               //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                             //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * headerBackgroundView;                   //@synthesize headerBackgroundView=_headerBackgroundView - In the implementation block
@property (assign,nonatomic) float locationSuggestionCellHeight;              //@synthesize locationSuggestionCellHeight=_locationSuggestionCellHeight - In the implementation block
@property (nonatomic,retain) NSString * searchSessionId;                      //@synthesize searchSessionId=_searchSessionId - In the implementation block
@property (assign,nonatomic) char isStickyEnabled;                            //@synthesize isStickyEnabled=_isStickyEnabled - In the implementation block
@property (nonatomic,retain) NSIndexPath * shareIndexPath;                    //@synthesize shareIndexPath=_shareIndexPath - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * shareString;                            //@synthesize shareString=_shareString - In the implementation block
@property (nonatomic,readonly) char isReadyToShare; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic,__weak) UIViewController * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)analyticsModule;
-(id)initWithMediaMetadata:(id)arg1 userSession:(id)arg2 ;
-(void)setShareString:(NSString *)arg1 ;
-(void)configureWithHeaderView:(id)arg1 ;
-(NSString *)shareString;
-(char)isReadyToShare;
-(void)locationPickerViewController:(id)arg1 didFinish:(char)arg2 withLocation:(id)arg3 ;
-(void)userInTaggingViewController:(id)arg1 didFinish:(char)arg2 ;
-(id)analyticsMetadata;
-(UIView *)headerBackgroundView;
-(void)updateLocationEnabled;
-(float)locationSuggestionCellHeight;
-(void)configureCaptionCell:(id)arg1 ;
-(void)configurePeopleCell:(id)arg1 ;
-(void)configureLocationCell:(id)arg1 ;
-(void)configureShareCell:(id)arg1 index:(int)arg2 ;
-(NSIndexPath *)shareIndexPath;
-(void)setShareIndexPath:(NSIndexPath *)arg1 ;
-(void)onPeopleCellTapped;
-(void)setHeaderBackgroundView:(UIView *)arg1 ;
-(void)setLocationSuggestionCellHeight:(float)arg1 ;
-(char)isStickyEnabled;
-(id)viewControllerForPresentingLocationPicker;
-(void)locationSuggestionCell:(id)arg1 didFinishWithLocation:(id)arg2 ;
-(void)locationSuggestionCelldidClearLocation:(id)arg1 ;
-(void)locationSuggestionCell:(id)arg1 stateChanged:(int)arg2 ;
-(NSString *)searchSessionId;
-(void)setSearchSessionId:(NSString *)arg1 ;
-(void)setIsStickyEnabled:(char)arg1 ;
-(void)shareListNeedsReloadForServiceAtIndex:(int)arg1 ;
-(id)viewControllerForShareConfiguration;
-(void)shareListNeedsFullReload;
-(char)enableNavState;
-(void)setDelegate:(UIViewController *)arg1 ;
-(void)dealloc;
-(UIViewController *)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3 ;
-(UIScrollView *)scrollView;
-(IGCollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setCollectionView:(IGCollectionView *)arg1 ;
-(IGMediaMetadata *)mediaMetadata;
-(void)setMediaMetadata:(IGMediaMetadata *)arg1 ;
@end

