
#import <Instagram/IGViewController.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGBusinessConversionFlowStep.h>

@protocol IGBusinessConversionViewControllerDelegate;
@class IGButton, IGCoreTextView, IGBusinessConversionLoggingHelper, UICollectionView, UIView, IGPageCellPageControl, NSArray, NSString;

@interface IGBusinessConversionViewController : IGViewController <IGCoreTextLinkHandler, UICollectionViewDataSource, UICollectionViewDelegate, IGBusinessConversionFlowStep> {

	char _didDeclineFacebookAuth;
	id<IGBusinessConversionViewControllerDelegate> _delegate;
	IGButton* _continueButton;
	IGCoreTextView* _disclaimerLabel;
	IGBusinessConversionLoggingHelper* _loggingHelper;
	UICollectionView* _swipeableView;
	UIView* _viewFeaturesLink;
	IGPageCellPageControl* _pageControl;
	NSArray* _slidesIDs;

}

@property (nonatomic,retain) IGButton * continueButton;                                                   //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) IGCoreTextView * disclaimerLabel;                                            //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (assign,nonatomic) char didDeclineFacebookAuth;                                                 //@synthesize didDeclineFacebookAuth=_didDeclineFacebookAuth - In the implementation block
@property (nonatomic,retain) IGBusinessConversionLoggingHelper * loggingHelper;                           //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (nonatomic,retain) UICollectionView * swipeableView;                                            //@synthesize swipeableView=_swipeableView - In the implementation block
@property (nonatomic,retain) UIView * viewFeaturesLink;                                                   //@synthesize viewFeaturesLink=_viewFeaturesLink - In the implementation block
@property (nonatomic,retain) IGPageCellPageControl * pageControl;                                         //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,copy,readonly) NSArray * slidesIDs;                                                  //@synthesize slidesIDs=_slidesIDs - In the implementation block
@property (assign,nonatomic,__weak) id<IGBusinessConversionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)businessConversionNavigationControllerWithEntrypoint:(id)arg1 delegate:(id)arg2 ;
-(id)analyticsModule;
-(void)onCancelModal;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(IGCoreTextView *)disclaimerLabel;
-(IGBusinessConversionLoggingHelper *)loggingHelper;
-(void)setSwipeableView:(UICollectionView *)arg1 ;
-(UICollectionView *)swipeableView;
-(void)setDisclaimerLabel:(IGCoreTextView *)arg1 ;
-(id)analyticsFlowStep;
-(void)setDidDeclineFacebookAuth:(char)arg1 ;
-(NSArray *)slidesIDs;
-(void)viewFeaturesLabelTapped;
-(void)setViewFeaturesLink:(UIView *)arg1 ;
-(id)createContinueButton;
-(void)setContinueButton:(IGButton *)arg1 ;
-(IGButton *)continueButton;
-(UIView *)viewFeaturesLink;
-(void)openPageSelectionViewControllerWithAccessToken:(id)arg1 ;
-(void)openPageSelectionViewControllerWithCurrentUserAccessToken;
-(void)getAccessTokenAndPushBusinessSelectorIfPossible;
-(void)updateCurrentPage;
-(char)didDeclineFacebookAuth;
-(void)setLoggingHelper:(IGBusinessConversionLoggingHelper *)arg1 ;
-(id)initWithEntrypoint:(id)arg1 ;
-(void)pageControlValueChanged:(id)arg1 ;
-(void)setPageControl:(IGPageCellPageControl *)arg1 ;
-(void)setDelegate:(id<IGBusinessConversionViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<IGBusinessConversionViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(IGPageCellPageControl *)pageControl;
@end

