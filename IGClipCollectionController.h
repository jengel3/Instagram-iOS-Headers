
#import <Instagram/Instagram-Structs.h>
#import <Instagram/LXReorderableCollectionViewDataSource.h>
#import <Instagram/LXReorderableCollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol IGClipCollectionControllerDelegate;
@class IGVideoClip, UICollectionView, IGVideoComposition, NSString;

@interface IGClipCollectionController : NSObject <LXReorderableCollectionViewDataSource, LXReorderableCollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	char _scrollingToClip;
	IGVideoClip* _selectedClip;
	id<IGClipCollectionControllerDelegate> _delegate;
	UICollectionView* _collectionView;
	IGVideoComposition* _videoComposition;

}

@property (nonatomic,readonly) IGVideoClip * selectedClip;                                        //@synthesize selectedClip=_selectedClip - In the implementation block
@property (assign,nonatomic,__weak) id<IGClipCollectionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                   //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGVideoComposition * videoComposition;                               //@synthesize videoComposition=_videoComposition - In the implementation block
@property (assign,nonatomic) char scrollingToClip;                                                //@synthesize scrollingToClip=_scrollingToClip - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canBeRemovedAtPoint:(CGPoint)arg3 ;
-(void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 wasRemovedAtPoint:(CGPoint)arg3 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 willEndDraggingItemAtIndexPath:(id)arg3 ;
-(IGVideoClip *)selectedClip;
-(char)scrollingToClip;
-(void)setScrollingToClip:(char)arg1 ;
-(IGVideoComposition *)videoComposition;
-(void)setVideoComposition:(IGVideoComposition *)arg1 ;
-(void)setDelegate:(id<IGClipCollectionControllerDelegate>)arg1 ;
-(id<IGClipCollectionControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)initWithComposition:(id)arg1 ;
@end

