
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol IGCollectionViewControllerDelegate, IGCollectionViewControllerDataSource, IGCollectionViewLayoutAdditions;
@class IGRefreshControl, UICollectionViewLayout, NSArray, UIView, IGInternalCollectionView, IGCollectionViewLayout, NSString;

@interface IGCollectionViewController : IGViewController <UICollectionViewDataSource> {

	char _usesIgCollectionViewLayout;
	char _hasNotifiedForEndOfContentReached;
	char _showsPullToRefreshControl;
	id<IGCollectionViewControllerDelegate> _delegate;
	id<IGCollectionViewControllerDataSource> _dataSource;
	IGRefreshControl* _refreshControl;
	UICollectionViewLayout*<IGCollectionViewLayoutAdditions> _collectionViewLayout;
	NSArray* _objects;
	id _context;
	float _supplementaryHeaderViewHeight;
	float _supplementaryFooterViewHeight;
	float _headerAdjustmentAmount;
	UIView* _backgroundSupplementaryHeaderView;
	UIView* _backgroundSupplementaryFooterView;
	NSArray* _currentLoadingObjects;
	id _currentLoadingContext;
	IGInternalCollectionView* _collectionView;
	float _pullToRefreshInset;
	int _reloadingCount;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,retain) NSArray * objects;                                                                          //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) id context;                                                                                 //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * currentLoadingObjects;                                                            //@synthesize currentLoadingObjects=_currentLoadingObjects - In the implementation block
@property (nonatomic,retain) id currentLoadingContext;                                                                   //@synthesize currentLoadingContext=_currentLoadingContext - In the implementation block
@property (nonatomic,retain) IGInternalCollectionView * collectionView;                                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIView * backgroundSupplementaryHeaderView;                                                 //@synthesize backgroundSupplementaryHeaderView=_backgroundSupplementaryHeaderView - In the implementation block
@property (nonatomic,retain) UIView * backgroundSupplementaryFooterView;                                                 //@synthesize backgroundSupplementaryFooterView=_backgroundSupplementaryFooterView - In the implementation block
@property (assign,nonatomic) char hasNotifiedForEndOfContentReached;                                                     //@synthesize hasNotifiedForEndOfContentReached=_hasNotifiedForEndOfContentReached - In the implementation block
@property (assign,nonatomic) float pullToRefreshInset;                                                                   //@synthesize pullToRefreshInset=_pullToRefreshInset - In the implementation block
@property (assign,nonatomic) char showsPullToRefreshControl;                                                             //@synthesize showsPullToRefreshControl=_showsPullToRefreshControl - In the implementation block
@property (assign,nonatomic) int reloadingCount;                                                                         //@synthesize reloadingCount=_reloadingCount - In the implementation block
@property (nonatomic,readonly) IGCollectionViewLayout * igCollectionViewLayout; 
@property (assign,nonatomic,__weak) id<IGCollectionViewControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGCollectionViewControllerDataSource> dataSource;                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) IGRefreshControl * refreshControl;                                                          //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) UICollectionViewLayout*<IGCollectionViewLayoutAdditions> collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (assign,nonatomic) float supplementaryHeaderViewHeight;                                                        //@synthesize supplementaryHeaderViewHeight=_supplementaryHeaderViewHeight - In the implementation block
@property (assign,nonatomic) float supplementaryFooterViewHeight;                                                        //@synthesize supplementaryFooterViewHeight=_supplementaryFooterViewHeight - In the implementation block
@property (assign,nonatomic) float headerAdjustmentAmount;                                                               //@synthesize headerAdjustmentAmount=_headerAdjustmentAmount - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                                  //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) char isReloadingContent; 
@property (nonatomic,readonly) char usesIgCollectionViewLayout;                                                          //@synthesize usesIgCollectionViewLayout=_usesIgCollectionViewLayout - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(float)headerAdjustmentAmount;
-(id)initWithLayout:(id)arg1 showsPullToRefresh:(char)arg2 ;
-(void)reloadWithCurrentObjects;
-(id)currentReloadContext;
-(void)finishRefreshFromPullToRefreshControl;
-(void)reloadWithNewObjects:(id)arg1 context:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(char)isReloadingContent;
-(UIView *)backgroundSupplementaryHeaderView;
-(UIView *)backgroundSupplementaryFooterView;
-(char)usesIgCollectionViewLayout;
-(void)configureCollectionViewDataSource:(id)arg1 ;
-(void)registerClasses;
-(void)reloadWithNewObjects:(id)arg1 context:(id)arg2 synchronus:(char)arg3 forceAnimated:(char)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)reloadWithCurrentObjectsAnimated:(char)arg1 ;
-(NSArray *)currentLoadingObjects;
-(id)currentLoadingContext;
-(void)reloadWithCurrentObjectsAnimated:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)fakePullToRefreshWithDuration:(double)arg1 animated:(char)arg2 ;
-(id)setupCollectionViewWithLayout:(id)arg1 ;
-(void)applyContentInset;
-(char)showsPullToRefreshControl;
-(void)onPullToRefresh:(id)arg1 ;
-(void)notifyChangeFromScrollPosition:(CGPoint)arg1 toScrollPosition:(CGPoint)arg2 ;
-(void)layoutFooterView;
-(float)pullToRefreshInset;
-(IGCollectionViewLayout *)igCollectionViewLayout;
-(void)setCurrentLoadingContext:(id)arg1 ;
-(void)setCurrentLoadingObjects:(NSArray *)arg1 ;
-(int)reloadingCount;
-(void)setReloadingCount:(int)arg1 ;
-(void)setSupplementaryHeaderViewHeight:(float)arg1 animated:(char)arg2 ;
-(void)setPullToRefreshInset:(float)arg1 ;
-(void)scrollToTopOfContentInsetAnimated:(char)arg1 ;
-(void)didChangeHeaderAdjustmentAmount:(float)arg1 ;
-(void)setBackgroundSupplementaryHeaderView:(UIView *)arg1 ;
-(void)setBackgroundSupplementaryFooterView:(UIView *)arg1 ;
-(char)hasNotifiedForEndOfContentReached;
-(void)setHasNotifiedForEndOfContentReached:(char)arg1 ;
-(void)setShowsPullToRefreshControl:(char)arg1 ;
-(float)supplementaryHeaderViewHeight;
-(void)setSupplementaryHeaderViewHeight:(float)arg1 ;
-(float)supplementaryFooterViewHeight;
-(void)setSupplementaryFooterViewHeight:(float)arg1 ;
-(void)setHeaderAdjustmentAmount:(float)arg1 ;
-(void)scrollToTopAnimated:(char)arg1 ;
-(NSArray *)objects;
-(void)setDataSource:(id<IGCollectionViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<IGCollectionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGCollectionViewControllerDataSource>)dataSource;
-(id<IGCollectionViewControllerDelegate>)delegate;
-(UICollectionViewLayout*<IGCollectionViewLayoutAdditions>)collectionViewLayout;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(UIEdgeInsets)contentInset;
-(id)context;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(IGInternalCollectionView *)collectionView;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setContext:(id)arg1 ;
-(void)setCollectionView:(IGInternalCollectionView *)arg1 ;
-(void)setRefreshControl:(IGRefreshControl *)arg1 ;
-(IGRefreshControl *)refreshControl;
-(void)setCollectionViewLayout:(UICollectionViewLayout*<IGCollectionViewLayoutAdditions>)arg1 ;
-(void)setObjects:(NSArray *)arg1 ;
@end

