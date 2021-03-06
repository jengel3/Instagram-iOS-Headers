
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol IGPhotoMapGridviewOverlayDelegate;
@class NSArray, UIView, UINavigationItem, IGButton, UIBarButtonItem, IGCollectionView, NSString;

@interface IGPhotoMapGridviewOverlay : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSArray* _points;
	UIView* _bottomBar;
	UINavigationItem* _navigationItem;
	IGButton* _deselectAllButton;
	IGButton* _selectAllButton;
	int _numSelected;
	UIView* _contents;
	UIBarButtonItem* _cancelButtonItem;
	char _delegateWasAlreadyInEditModeWhenOverlayAppeared;
	id<IGPhotoMapGridviewOverlayDelegate> _delegate;
	IGCollectionView* _feedView;

}

@property (nonatomic,retain) IGCollectionView * feedView;                                        //@synthesize feedView=_feedView - In the implementation block
@property (assign,nonatomic,__weak) id<IGPhotoMapGridviewOverlayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGCollectionView *)feedView;
-(void)onCancelTapped:(id)arg1 ;
-(void)onTitleViewTap;
-(void)updateEditModeButtons;
-(void)setSelectedStateForAllPoints:(char)arg1 ;
-(void)reloadVisibleItems;
-(void)updateNumSelected:(int)arg1 ;
-(void)updateSelectionControls;
-(char)hasDeselectedPhotos;
-(void)deselectAllButtonTapped:(id)arg1 ;
-(void)selectAllButtonTapped:(id)arg1 ;
-(void)onEditOrDoneTapped:(id)arg1 ;
-(void)showBottomBar:(char)arg1 animated:(char)arg2 ;
-(void)setFeedView:(IGCollectionView *)arg1 ;
-(void)updateEditModeUI:(char)arg1 ;
-(void)setDelegate:(id<IGPhotoMapGridviewOverlayDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id<IGPhotoMapGridviewOverlayDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setPoints:(id)arg1 ;
-(id)initWithPoints:(id)arg1 ;
@end

