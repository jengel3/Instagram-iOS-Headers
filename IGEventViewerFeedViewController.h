
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGEventViewerFeedLayoutDelegate.h>
#import <Instagram/IGEventViewerFeedLayoutDataSource.h>

@protocol IGEventViewerFeedViewScrollingDelegate, IGEventViewerFeedViewDraggingDelegate;
@class IGListCollectionView, IGListAdapter, IGEventViewerFeedLayout, IGEventViewerDataSource, IGEventViewerCollectionViewCellAnimator, NSIndexPath, IGEventViewerActionCell, NSString;

@interface IGEventViewerFeedViewController : UIViewController <UICollectionViewDelegate, IGEventViewerFeedLayoutDelegate, IGEventViewerFeedLayoutDataSource> {

	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGEventViewerFeedLayout* _feedLayout;
	id<IGEventViewerFeedViewScrollingDelegate> _scrollingDelegate;
	id<IGEventViewerFeedViewDraggingDelegate> _draggingDelegate;
	IGEventViewerDataSource* _dataSource;
	IGEventViewerCollectionViewCellAnimator* _cellAnimator;
	NSIndexPath* _centeredIndexPathWhenBeginDragging;
	CGPoint _lastContentOffset;
	CGPoint _panGestureStartLocation;

}

@property (nonatomic,readonly) IGEventViewerDataSource * dataSource;                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) IGEventViewerCollectionViewCellAnimator * cellAnimator;                         //@synthesize cellAnimator=_cellAnimator - In the implementation block
@property (nonatomic,retain) NSIndexPath * centeredIndexPathWhenBeginDragging;                                 //@synthesize centeredIndexPathWhenBeginDragging=_centeredIndexPathWhenBeginDragging - In the implementation block
@property (assign,nonatomic) CGPoint lastContentOffset;                                                        //@synthesize lastContentOffset=_lastContentOffset - In the implementation block
@property (assign,nonatomic) CGPoint panGestureStartLocation;                                                  //@synthesize panGestureStartLocation=_panGestureStartLocation - In the implementation block
@property (nonatomic,__weak,readonly) IGListCollectionView * collectionView;                                   //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                                    //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerFeedLayout * feedLayout;                                    //@synthesize feedLayout=_feedLayout - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerFeedViewScrollingDelegate> scrollingDelegate;              //@synthesize scrollingDelegate=_scrollingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerFeedViewDraggingDelegate> draggingDelegate;                //@synthesize draggingDelegate=_draggingDelegate - In the implementation block
@property (nonatomic,readonly) NSIndexPath * currentlyCenteredIndexPath; 
@property (nonatomic,readonly) IGFeedItemMediaCell*<IGEventViewerCellType> currentlyCenteredCell; 
@property (nonatomic,readonly) IGEventViewerActionCell * currentlyCenteredActionCell; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGListAdapter *)listAdapter;
-(void)setupCollectionViewAndListAdapter;
-(void)didReceiveScrollViewPanGesture:(id)arg1 ;
-(NSIndexPath *)currentlyCenteredIndexPath;
-(id<IGEventViewerFeedViewScrollingDelegate>)scrollingDelegate;
-(void)scrollToItemAtIndexPath:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(IGEventViewerCollectionViewCellAnimator *)cellAnimator;
-(void)setCenteredIndexPathWhenBeginDragging:(NSIndexPath *)arg1 ;
-(void)willScrollToContentOffset:(CGPoint)arg1 ;
-(NSIndexPath *)centeredIndexPathWhenBeginDragging;
-(void)eventViewerFeedLayoutDidReachMaximumContentOffset:(id)arg1 ;
-(CGSize)eventViewerFeedLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(IGFeedItemMediaCell*<IGEventViewerCellType>)currentlyCenteredCell;
-(IGEventViewerActionCell *)currentlyCenteredActionCell;
-(id)cellAtIndexPath:(id)arg1 ;
-(void)setScrollingDelegate:(id<IGEventViewerFeedViewScrollingDelegate>)arg1 ;
-(CGPoint)panGestureStartLocation;
-(void)setPanGestureStartLocation:(CGPoint)arg1 ;
-(void)scrollViewDidEndScrolling;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(IGEventViewerDataSource *)dataSource;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewDidLoad;
-(CGPoint)lastContentOffset;
-(void)setLastContentOffset:(CGPoint)arg1 ;
-(IGEventViewerFeedLayout *)feedLayout;
-(void)configureCollectionView:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(id<IGEventViewerFeedViewDraggingDelegate>)draggingDelegate;
-(void)setDraggingDelegate:(id<IGEventViewerFeedViewDraggingDelegate>)arg1 ;
@end

