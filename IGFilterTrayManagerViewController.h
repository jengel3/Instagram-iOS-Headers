
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/LXReorderableCollectionViewDataSource.h>
#import <Instagram/LXReorderableCollectionViewDelegateFlowLayout.h>

@protocol IGFilterTrayManagerViewControllerDelegate;
@class IGFilterCollectionController, UICollectionView, NSString;

@interface IGFilterTrayManagerViewController : IGViewController <LXReorderableCollectionViewDataSource, LXReorderableCollectionViewDelegateFlowLayout> {

	IGFilterCollectionController* _trayController;
	id<IGFilterTrayManagerViewControllerDelegate> _delegate;
	UICollectionView* _filterCollectionView;

}

@property (nonatomic,retain) UICollectionView * filterCollectionView;                                    //@synthesize filterCollectionView=_filterCollectionView - In the implementation block
@property (nonatomic,retain) IGFilterCollectionController * trayController;                              //@synthesize trayController=_trayController - In the implementation block
@property (assign,nonatomic,__weak) id<IGFilterTrayManagerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(IGFilterCollectionController *)trayController;
-(void)onDismissButtonTapped;
-(void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canBeRemovedAtPoint:(CGPoint)arg3 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 willEndDraggingItemAtIndexPath:(id)arg3 ;
-(void)setTrayController:(IGFilterCollectionController *)arg1 ;
-(UICollectionView *)filterCollectionView;
-(id)initWithFilterTrayController:(id)arg1 ;
-(void)setFilterCollectionView:(UICollectionView *)arg1 ;
-(void)setDelegate:(id<IGFilterTrayManagerViewControllerDelegate>)arg1 ;
-(id<IGFilterTrayManagerViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(char)automaticallyAdjustsScrollViewInsets;
@end

