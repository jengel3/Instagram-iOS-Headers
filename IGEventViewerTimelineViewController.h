
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol IGEventViewerTimelineViewControllerDelegate;
@class UICollectionView, IGEventViewerTimelineHighlightView, IGEventViewerTimelineFlowLayout, IGEventViewerCollectionViewDataSource, NSIndexPath, NSString;

@interface IGEventViewerTimelineViewController : UIViewController <UICollectionViewDelegateFlowLayout> {

	UICollectionView* _collectionView;
	id<IGEventViewerTimelineViewControllerDelegate> _delegate;
	IGEventViewerTimelineHighlightView* _highlightView;
	IGEventViewerTimelineFlowLayout* _flowLayout;
	IGEventViewerCollectionViewDataSource* _dataSource;
	NSIndexPath* _currentlyHighlightedIndexPath;

}

@property (nonatomic,__weak,readonly) UICollectionView * collectionView;                                   //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerTimelineViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerTimelineHighlightView * highlightView;                  //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerTimelineFlowLayout * flowLayout;                        //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,readonly) IGEventViewerCollectionViewDataSource * dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentlyHighlightedIndexPath;                                  //@synthesize currentlyHighlightedIndexPath=_currentlyHighlightedIndexPath - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSIndexPath *)currentlyHighlightedIndexPath;
-(void)updateHighlightViewForIndexPath:(id)arg1 ;
-(void)setCurrentlyHighlightedIndexPath:(NSIndexPath *)arg1 ;
-(void)animationMediaProgressForDuration:(double)arg1 ;
-(void)setDelegate:(id<IGEventViewerTimelineViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(IGEventViewerCollectionViewDataSource *)dataSource;
-(id<IGEventViewerTimelineViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(IGEventViewerTimelineHighlightView *)highlightView;
-(IGEventViewerTimelineFlowLayout *)flowLayout;
-(void)setupSubviews;
-(id)initWithDataSource:(id)arg1 ;
-(void)scrollToItemAtIndexPath:(id)arg1 animated:(char)arg2 ;
@end

