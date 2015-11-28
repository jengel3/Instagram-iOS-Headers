
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGUserInTaggingViewControllerDelegate.h>
#import <Instagram/IGLocationPickerDelegate.h>
#import <Instagram/IGShareListManagerDelegate.h>
#import <Instagram/IGLocationSuggestionDelegate.h>
#import <Instagram/IGShareManager.h>

@protocol IGShareManagerDelegate;
@class NSString, UIViewController, IGMediaMetadata, IGCollectionView, IGSwitch, UIButton, UIView, UIScrollView;

@interface IGBroadcastShareManager : IGViewController <UICollectionViewDataSource, UICollectionViewDelegate, IGUserInTaggingViewControllerDelegate, IGLocationPickerDelegate, IGShareListManagerDelegate, IGLocationSuggestionDelegate, IGShareManager> {

	char _shouldShowDetectionSpinner;
	NSString* _shareString;
	UIViewController*<IGShareManagerDelegate> _delegate;
	IGMediaMetadata* _mediaMetadata;
	IGCollectionView* _collectionView;
	IGSwitch* _photoMapSwitch;
	UIButton* _clearVenueButton;
	UIView* _headerView;
	UIView* _headerBackgroundView;
	float _locationSuggestionCellHeight;
	NSString* _searchSessionId;

}

@property (nonatomic,retain) IGMediaMetadata * mediaMetadata;                                        //@synthesize mediaMetadata=_mediaMetadata - In the implementation block
@property (nonatomic,retain) IGCollectionView * collectionView;                                      //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGSwitch * photoMapSwitch;                                              //@synthesize photoMapSwitch=_photoMapSwitch - In the implementation block
@property (nonatomic,retain) UIButton * clearVenueButton;                                            //@synthesize clearVenueButton=_clearVenueButton - In the implementation block
@property (assign,nonatomic) char shouldShowDetectionSpinner;                                        //@synthesize shouldShowDetectionSpinner=_shouldShowDetectionSpinner - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                    //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * headerBackgroundView;                                          //@synthesize headerBackgroundView=_headerBackgroundView - In the implementation block
@property (assign,nonatomic) float locationSuggestionCellHeight;                                     //@synthesize locationSuggestionCellHeight=_locationSuggestionCellHeight - In the implementation block
@property (nonatomic,retain) NSString * searchSessionId;                                             //@synthesize searchSessionId=_searchSessionId - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * shareString;                                                   //@synthesize shareString=_shareString - In the implementation block
@property (nonatomic,readonly) char isReadyToShare; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic,__weak) UIViewController*<IGShareManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithMediaMetadata:(id)arg1 ;
-(id)analyticsMetadata;
-(char)enableNavState;
-(void)setShareString:(NSString *)arg1 ;
-(NSString *)shareString;
-(char)isReadyToShare;
-(void)locationPickerViewController:(id)arg1 didFinish:(char)arg2 withLocation:(id)arg3 ;
-(void)userInTaggingViewController:(id)arg1 didFinish:(char)arg2 ;
-(char)isGeotagEnabled;
-(void)setGeotagEnabled:(char)arg1 ;
-(void)locationSuggestionCell:(id)arg1 stateChanged:(int)arg2 ;
-(void)locationSuggestionCelldidClearLocation:(id)arg1 ;
-(void)locationSuggestionCell:(id)arg1 didFinishWithLocation:(id)arg2 ;
-(void)locationSuggestionCell:(id)arg1 didSelectIndex:(unsigned)arg2 locations:(id)arg3 ;
-(void)locationSuggestionCell:(id)arg1 didLoadLocations:(id)arg2 ;
-(void)updateFoursquareAvailability;
-(void)clearVenue:(id)arg1 ;
-(float)locationSuggestionCellHeight;
-(void)configureCaptionCell:(id)arg1 ;
-(void)configurePeopleCell:(id)arg1 ;
-(void)configureGeoCell:(id)arg1 ;
-(void)configureVenueCell:(id)arg1 ;
-(void)configureLocationCell:(id)arg1 ;
-(void)configureShareCell:(id)arg1 index:(int)arg2 ;
-(void)onPeopleCellTapped;
-(void)onVenueCellTapped;
-(UIView *)headerBackgroundView;
-(void)setHeaderBackgroundView:(UIView *)arg1 ;
-(void)configureAddPeopleRow:(id)arg1 ;
-(void)configureTaggedFacesRow:(id)arg1 ;
-(char)shouldShowDetectionSpinner;
-(IGSwitch *)photoMapSwitch;
-(void)configureGeoCell:(id)arg1 withVenueName:(id)arg2 ;
-(void)configureGeoCellWithoutVenue:(id)arg1 ;
-(UIButton *)clearVenueButton;
-(void)updateCollectionViewForGeotagEnabled:(char)arg1 ;
-(void)setLocationSuggestionCellHeight:(float)arg1 ;
-(NSString *)searchSessionId;
-(void)shareListNeedsFullReload;
-(void)shareListNeedsReloadForServiceAtIndex:(int)arg1 ;
-(id)viewControllerForShareConfiguration;
-(void)configurePeopleCellWithDetectedFaces:(id)arg1 withRow:(int)arg2 ;
-(void)numberOfFacesChanged:(id)arg1 ;
-(void)setPhotoMapSwitch:(IGSwitch *)arg1 ;
-(void)setClearVenueButton:(UIButton *)arg1 ;
-(void)setShouldShowDetectionSpinner:(char)arg1 ;
-(void)setSearchSessionId:(NSString *)arg1 ;
-(void)setDelegate:(UIViewController*<IGShareManagerDelegate>)arg1 ;
-(void)dealloc;
-(UIViewController*<IGShareManagerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3 ;
-(UIScrollView *)scrollView;
-(int)viewType;
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

