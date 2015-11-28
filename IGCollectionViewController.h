
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol IGCollectionViewControllerDelegate, IGCollectionViewControllerDataSource, IGCollectionViewLayoutAdditions;
@class UICollectionViewLayout, NSArray, UIView, IGInternalCollectionView, IGPullToRefreshControl, NSDate, IGCollectionViewLayout, NSString;

@interface IGCollectionViewController : IGViewController <UICollectionViewDataSource> {

	char _maintainsDistanceFromBottomOnReload;
	char _usesIgCollectionViewLayout;
	char _hasNotifiedForEndOfContentReached;
	char _showsPullToRefreshControl;
	id<IGCollectionViewControllerDelegate> _delegate;
	id<IGCollectionViewControllerDataSource> _dataSource;
	UICollectionViewLayout*<IGCollectionViewLayoutAdditions> _collectionViewLayout;
	NSArray* _objects;
	id _context;
	float _supplementaryHeaderViewHeight;
	float _supplementaryFooterViewHeight;
	float _headerAdjustmentAmount;
	UIView* _backgroundSupplementaryHeaderView;
	UIView* _backgroundSupplementaryFooterView;
	float _pullToRefreshYInset;
	NSArray* _currentLoadingObjects;
	id _currentLoadingContext;
	IGInternalCollectionView* _collectionView;
	IGPullToRefreshControl* _pullToRefreshControl;
	float _pullToRefreshInset;
	NSDate* _pullToRefreshStartTime;
	int _reloadingCount;
	CGSize _contentSize;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic,__weak) id<IGCollectionViewControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGCollectionViewControllerDataSource> dataSource;                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UICollectionViewLayout*<IGCollectionViewLayoutAdditions> collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) NSArray * objects;                                                                          //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) id context;                                                                                 //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) float supplementaryHeaderViewHeight;                                                        //@synthesize supplementaryHeaderViewHeight=_supplementaryHeaderViewHeight - In the implementation block
@property (assign,nonatomic) float supplementaryFooterViewHeight;                                                        //@synthesize supplementaryFooterViewHeight=_supplementaryFooterViewHeight - In the implementation block
@property (assign,nonatomic) float headerAdjustmentAmount;                                                               //@synthesize headerAdjustmentAmount=_headerAdjustmentAmount - In the implementation block
@property (nonatomic,retain) UIView * backgroundSupplementaryHeaderView;                                                 //@synthesize backgroundSupplementaryHeaderView=_backgroundSupplementaryHeaderView - In the implementation block
@property (nonatomic,retain) UIView * backgroundSupplementaryFooterView;                                                 //@synthesize backgroundSupplementaryFooterView=_backgroundSupplementaryFooterView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                                  //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                                         //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) char maintainsDistanceFromBottomOnReload;                                                   //@synthesize maintainsDistanceFromBottomOnReload=_maintainsDistanceFromBottomOnReload - In the implementation block
@property (nonatomic,readonly) char isAtTopOfContent; 
@property (nonatomic,readonly) float currentContentOffsetY; 
@property (nonatomic,copy,readonly) NSArray * sortedVisibleIndexPaths; 
@property (nonatomic,readonly) char isReloadingContent; 
@property (nonatomic,copy,readonly) NSArray * visibleCells; 
@property (assign,nonatomic) float pullToRefreshYInset;                                                                  //@synthesize pullToRefreshYInset=_pullToRefreshYInset - In the implementation block
@property (nonatomic,readonly) char usesIgCollectionViewLayout;                                                          //@synthesize usesIgCollectionViewLayout=_usesIgCollectionViewLayout - In the implementation block
@property (nonatomic,retain) NSArray * currentLoadingObjects;                                                            //@synthesize currentLoadingObjects=_currentLoadingObjects - In the implementation block
@property (nonatomic,retain) id currentLoadingContext;                                                                   //@synthesize currentLoadingContext=_currentLoadingContext - In the implementation block
@property (nonatomic,retain) IGInternalCollectionView * collectionView;                                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGPullToRefreshControl * pullToRefreshControl;                                              //@synthesize pullToRefreshControl=_pullToRefreshControl - In the implementation block
@property (assign,nonatomic) char hasNotifiedForEndOfContentReached;                                                     //@synthesize hasNotifiedForEndOfContentReached=_hasNotifiedForEndOfContentReached - In the implementation block
@property (assign,nonatomic) float pullToRefreshInset;                                                                   //@synthesize pullToRefreshInset=_pullToRefreshInset - In the implementation block
@property (assign,nonatomic) char showsPullToRefreshControl;                                                             //@synthesize showsPullToRefreshControl=_showsPullToRefreshControl - In the implementation block
@property (nonatomic,retain) NSDate * pullToRefreshStartTime;                                                            //@synthesize pullToRefreshStartTime=_pullToRefreshStartTime - In the implementation block
@property (assign,nonatomic) int reloadingCount;                                                                         //@synthesize reloadingCount=_reloadingCount - In the implementation block
@property (nonatomic,readonly) IGCollectionViewLayout * igCollectionViewLayout; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)headerAdjustmentAmount;
-(void)scrollToBottomAnimated:(char)arg1 ;
-(void)enumerateVisibleViewsWithClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)visibleIndexPaths;
-(id)initWithLayout:(id)arg1 showsPullToRefresh:(char)arg2 ;
-(void)finishRefreshFromPullToRefreshControl;
-(id)currentReloadContext;
-(void)reloadWithNewObjects:(id)arg1 context:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(char)isReloadingContent;
-(void)setSupplementaryHeaderViewHeight:(float)arg1 ;
-(UIView *)backgroundSupplementaryHeaderView;
-(UIView *)backgroundSupplementaryFooterView;
-(void)setSupplementaryFooterViewHeight:(float)arg1 ;
-(float)supplementaryHeaderViewHeight;
-(float)currentContentOffsetY;
-(char)usesIgCollectionViewLayout;
-(void)reloadWithNewObjects:(id)arg1 context:(id)arg2 synchronus:(char)arg3 forceAnimated:(char)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)enumerateVisibleCellsWithClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(float)supplementaryFooterViewHeight;
-(void)reloadWithCurrentObjectsAnimated:(char)arg1 ;
-(void)fakePullToRefreshWithDuration:(double)arg1 animated:(char)arg2 ;
-(void)reloadWithCurrentObjects;
-(char)isAtTopOfContent;
-(void)setHeaderAdjustmentAmount:(float)arg1 ;
-(void)didChangeHeaderAdjustmentAmount:(float)arg1 ;
-(NSArray *)currentLoadingObjects;
-(void)registerClasses;
-(void)onScrollViewPan:(id)arg1 ;
-(void)applyContentInset;
-(char)showsPullToRefreshControl;
-(float)pullToRefreshYInset;
-(void)setPullToRefreshControl:(IGPullToRefreshControl *)arg1 ;
-(IGPullToRefreshControl *)pullToRefreshControl;
-(void)onPullToRefresh:(id)arg1 ;
-(id)currentLoadingContext;
-(void)updatePullToRefreshControl;
-(void)notifyChangeFromScrollPosition:(CGPoint)arg1 toScrollPosition:(CGPoint)arg2 ;
-(void)layoutFooterView;
-(float)pullToRefreshInset;
-(IGCollectionViewLayout *)igCollectionViewLayout;
-(char)disableAsynchronousLoading;
-(void)setCurrentLoadingContext:(id)arg1 ;
-(void)setCurrentLoadingObjects:(NSArray *)arg1 ;
-(int)reloadingCount;
-(void)setReloadingCount:(int)arg1 ;
-(char)maintainsDistanceFromBottomOnReload;
-(void)setFooterHeight:(float)arg1 atIndexPath:(id)arg2 ;
-(void)setItemHeight:(float)arg1 atIndexPath:(id)arg2 ;
-(void)setSupplementaryHeaderViewHeight:(float)arg1 animated:(char)arg2 ;
-(void)setPullToRefreshInset:(float)arg1 ;
-(void)setPullToRefreshStartTime:(NSDate *)arg1 ;
-(NSDate *)pullToRefreshStartTime;
-(void)setMaintainsDistanceFromBottomOnReload:(char)arg1 ;
-(NSArray *)sortedVisibleIndexPaths;
-(unsigned)mostVisibleSection;
-(void)scrollToTopOfContentInsetAnimated:(char)arg1 ;
-(id)indexPathForPoint:(CGPoint)arg1 ;
-(void)setBackgroundSupplementaryHeaderView:(UIView *)arg1 ;
-(void)setBackgroundSupplementaryFooterView:(UIView *)arg1 ;
-(void)setPullToRefreshYInset:(float)arg1 ;
-(char)hasNotifiedForEndOfContentReached;
-(void)setHasNotifiedForEndOfContentReached:(char)arg1 ;
-(void)setShowsPullToRefreshControl:(char)arg1 ;
-(void)scrollToTopAnimated:(char)arg1 ;
-(NSArray *)objects;
-(void)setDataSource:(id<IGCollectionViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<IGCollectionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGCollectionViewControllerDataSource>)dataSource;
-(id<IGCollectionViewControllerDelegate>)delegate;
-(void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3 ;
-(void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2 ;
-(id)indexPathForCell:(id)arg1 ;
-(id)cellForItemAtIndexPath:(id)arg1 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3 ;
-(CGSize)contentSize;
-(UICollectionViewLayout*<IGCollectionViewLayoutAdditions>)collectionViewLayout;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(UIEdgeInsets)contentInset;
-(id)context;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(NSArray *)visibleCells;
-(IGInternalCollectionView *)collectionView;
-(void)viewDidLoad;
-(char)automaticallyAdjustsScrollViewInsets;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setContext:(id)arg1 ;
-(void)setCollectionView:(IGInternalCollectionView *)arg1 ;
-(void)setCollectionViewLayout:(UICollectionViewLayout*<IGCollectionViewLayoutAdditions>)arg1 ;
-(void)configureCollectionView:(id)arg1 ;
-(void)scrollToItemAtIndexPath:(id)arg1 animated:(char)arg2 ;
-(void)setObjects:(NSArray *)arg1 ;
@end

