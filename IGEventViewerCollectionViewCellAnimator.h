

#import <Instagram/Instagram-Structs.h>
@class UICollectionView, NSString;

@interface IGEventViewerCollectionViewCellAnimator : NSObject {

	UICollectionView* _collectionView;
	NSString* _videoCellId;
	NSString* _photoCellId;
	NSString* _headerCellId;
	NSString* _actionCellId;

}

@property (nonatomic,copy,readonly) NSString * videoCellId;                           //@synthesize videoCellId=_videoCellId - In the implementation block
@property (nonatomic,copy,readonly) NSString * photoCellId;                           //@synthesize photoCellId=_photoCellId - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerCellId;                          //@synthesize headerCellId=_headerCellId - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionCellId;                          //@synthesize actionCellId=_actionCellId - In the implementation block
@property (nonatomic,__weak,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(id)visibleMediaCells;
-(id)visibleHeaderCells;
-(id)visibleActionCells;
-(void)updateCrossFadeForVisibleMediaCells:(id)arg1 ;
-(void)updateCrossFadeForVisibleHeaderCells:(id)arg1 centeredIndexPath:(id)arg2 ;
-(void)updateCrossFadeForVisibleActionCells:(id)arg1 centeredIndexPath:(id)arg2 ;
-(float)alphaForHeaderCellAtSection:(unsigned)arg1 frameInWindow:(CGRect)arg2 ;
-(float)alphaForActionCellAtSection:(unsigned)arg1 frameInWindow:(CGRect)arg2 ;
-(NSString *)videoCellId;
-(NSString *)photoCellId;
-(NSString *)headerCellId;
-(NSString *)actionCellId;
-(char)isMediaCell:(id)arg1 ;
-(id)visibleCellsUsingPredicate:(id)arg1 ;
-(char)isHeaderCell:(id)arg1 ;
-(char)isActionCell:(id)arg1 ;
-(float)cellHeightForItem:(int)arg1 atSection:(unsigned)arg2 ;
-(void)updateVisibleCellsWithDynamicCrossFadeAnimated:(char)arg1 centeredIndexPath:(id)arg2 ;
-(void)updateVisibleCellsForTargetIndexPath:(id)arg1 animated:(char)arg2 ;
-(UICollectionView *)collectionView;
-(id)initWithCollectionView:(id)arg1 ;
@end

