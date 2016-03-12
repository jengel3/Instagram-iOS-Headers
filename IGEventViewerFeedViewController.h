
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGEventViewerFeedLayoutDelegate.h>

@protocol IGEventViewerFeedViewScrollingDelegate, IGEventViewerFeedViewDraggingDelegate;
@class UICollectionView, IGEventViewerFeedLayout, IGEventViewerDataSource, IGEventViewerCollectionViewCellAnimator, NSIndexPath, NSString;

@interface IGEventViewerFeedViewController : UIViewController <UICollectionViewDelegate, IGEventViewerFeedLayoutDelegate> {

	UICollectionView* _collectionView;
	IGEventViewerFeedLayout* _feedLayout;
	id<IGEventViewerFeedViewScrollingDelegate> _scrollingDelegate;
	id<IGEventViewerFeedViewDraggingDelegate> _draggingDelegate;
	IGEventViewerDataSource* _dataSource;
	IGEventViewerCollectionViewCellAnimator* _cellAnimator;
	NSIndexPath* _centeredIndexPathWhenBeginDragging;

}

@property (nonatomic,__weak,readonly) UICollectionView * collectionView;                                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerFeedLayout * feedLayout;                                    //@synthesize feedLayout=_feedLayout - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerFeedViewScrollingDelegate> scrollingDelegate;              //@synthesize scrollingDelegate=_scrollingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerFeedViewDraggingDelegate> draggingDelegate;                //@synthesize draggingDelegate=_draggingDelegate - In the implementation block
@property (nonatomic,readonly) NSIndexPath * currentlyCenteredIndexPath; 
@property (nonatomic,readonly) IGFeedItemMediaCell*<IGEventViewerCellType> currentlyCenteredCell; 
@property (nonatomic,readonly) IGEventViewerDataSource * dataSource;                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) IGEventViewerCollectionViewCellAnimator * cellAnimator;                         //@synthesize cellAnimator=_cellAnimator - In the implementation block
@property (nonatomic,retain) NSIndexPath * centeredIndexPathWhenBeginDragging;                                 //@synthesize centeredIndexPathWhenBeginDragging=_centeredIndexPathWhenBeginDragging - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSIndexPath *)currentlyCenteredIndexPath;
-(void)eventViewerFeedLayoutDidReachMaximumContentOffset:(id)arg1 ;
-(void)didReceiveScrollViewPanGesture:(id)arg1 ;
-(id<IGEventViewerFeedViewScrollingDelegate>)scrollingDelegate;
-(void)scrollToItemAtIndexPath:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCenteredIndexPathWhenBeginDragging:(NSIndexPath *)arg1 ;
-(void)willScrollToContentOffset:(CGPoint)arg1 ;
-(NSIndexPath *)centeredIndexPathWhenBeginDragging;
-(IGEventViewerCollectionViewCellAnimator *)cellAnimator;
-(IGFeedItemMediaCell*<IGEventViewerCellType>)currentlyCenteredCell;
-(id)cellAtIndexPath:(id)arg1 ;
-(void)setCurrentlyCenteredHeaderCellMoreButtonHidden:(char)arg1 ;
-(void)adjustContentOffsetAfterLoadMoreForIndexPath:(id)arg1 ;
-(float)currentTimeForCenteredCell;
-(void)setScrollingDelegate:(id<IGEventViewerFeedViewScrollingDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(IGEventViewerDataSource *)dataSource;
-(void)viewDidLayoutSubviews;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(IGEventViewerFeedLayout *)feedLayout;
-(void)configureCollectionView:(id)arg1 ;
-(void)setupSubviews;
-(id)initWithDataSource:(id)arg1 ;
-(id<IGEventViewerFeedViewDraggingDelegate>)draggingDelegate;
-(void)setDraggingDelegate:(id<IGEventViewerFeedViewDraggingDelegate>)arg1 ;
@end

