
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGCustomViewController.h>

@protocol IGPageViewControllerDataSource, IGPageViewControllerDelegate;
@class IGPageViewControllerCollectionView, UICollectionViewFlowLayout, NSArray, NSMapTable, UIViewController, NSString;

@interface IGPageViewController : IGViewController <UICollectionViewDataSource, UICollectionViewDelegate, IGCustomViewController> {

	char _bouncesOnFirstPage;
	char _disablingChildScrollViews;
	id<IGPageViewControllerDataSource> _dataSource;
	id<IGPageViewControllerDelegate> _delegate;
	int _numberOfCachedAdjacentViewControllers;
	IGPageViewControllerCollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	int _currentIndex;
	NSArray* _disabledScrollViews;
	NSMapTable* _indexesToCachedViewControllers;
	int _indexToScrollToOnViewDidLoad;

}

@property (nonatomic,retain) IGPageViewControllerCollectionView * collectionView;               //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * collectionViewLayout;                 //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (assign,nonatomic) int currentIndex;                                                  //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,retain) NSArray * disabledScrollViews;                                     //@synthesize disabledScrollViews=_disabledScrollViews - In the implementation block
@property (assign,nonatomic) char disablingChildScrollViews;                                    //@synthesize disablingChildScrollViews=_disablingChildScrollViews - In the implementation block
@property (nonatomic,retain) NSMapTable * indexesToCachedViewControllers;                       //@synthesize indexesToCachedViewControllers=_indexesToCachedViewControllers - In the implementation block
@property (assign,nonatomic) int indexToScrollToOnViewDidLoad;                                  //@synthesize indexToScrollToOnViewDidLoad=_indexToScrollToOnViewDidLoad - In the implementation block
@property (assign,nonatomic,__weak) id<IGPageViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGPageViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int numberOfCachedAdjacentViewControllers;                         //@synthesize numberOfCachedAdjacentViewControllers=_numberOfCachedAdjacentViewControllers - In the implementation block
@property (assign,nonatomic) char bouncesOnFirstPage;                                           //@synthesize bouncesOnFirstPage=_bouncesOnFirstPage - In the implementation block
@property (nonatomic,readonly) int currentPage; 
@property (nonatomic,readonly) UIViewController * currentController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)ig_keyViewControllers;
-(void)enableDisabledScrollViews;
-(id)disableScrollViewsForViewController:(id)arg1 ;
-(void)setDisabledScrollViews:(NSArray *)arg1 ;
-(NSArray *)disabledScrollViews;
-(char)disableNonEdgeNavigationGesture;
-(void)setBouncesOnFirstPage:(char)arg1 ;
-(void)setIndexToScrollToOnViewDidLoad:(int)arg1 ;
-(void)setIndexesToCachedViewControllers:(NSMapTable *)arg1 ;
-(CGRect)collectionViewFrame;
-(int)indexToScrollToOnViewDidLoad;
-(char)bouncesOnFirstPage;
-(int)numberOfCachedAdjacentViewControllers;
-(NSMapTable *)indexesToCachedViewControllers;
-(void)setDisablingChildScrollViews:(char)arg1 ;
-(char)disablingChildScrollViews;
-(void)disableScrollingInChildViewControllers;
-(void)updateCurrentIndexWithOffset:(float)arg1 ;
-(void)notifyForFinishedScrolling;
-(void)loadAdjacentControllersIfNecessary;
-(void)insertPagesAtIndexes:(id)arg1 ;
-(void)setNumberOfCachedAdjacentViewControllers:(int)arg1 ;
-(void)setDataSource:(id<IGPageViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<IGPageViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<IGPageViewControllerDataSource>)dataSource;
-(id<IGPageViewControllerDelegate>)delegate;
-(UICollectionViewFlowLayout *)collectionViewLayout;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(IGPageViewControllerCollectionView *)collectionView;
-(int)currentIndex;
-(void)viewDidLoad;
-(int)currentPage;
-(void)setCollectionView:(IGPageViewControllerCollectionView *)arg1 ;
-(void)setCollectionViewLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setVisibleIndex:(int)arg1 animated:(char)arg2 ;
-(UIViewController *)currentController;
-(void)setCurrentIndex:(int)arg1 ;
@end

