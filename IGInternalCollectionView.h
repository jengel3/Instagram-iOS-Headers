
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionView.h>

@class NSSet;

@interface IGInternalCollectionView : UICollectionView {

	int _ignoresContentOffsetChanges;
	NSSet* _visibleIndexPaths;

}

@property (assign,nonatomic) int ignoresContentOffsetChanges;              //@synthesize ignoresContentOffsetChanges=_ignoresContentOffsetChanges - In the implementation block
@property (nonatomic,retain) NSSet * visibleIndexPaths;                    //@synthesize visibleIndexPaths=_visibleIndexPaths - In the implementation block
-(void)notifyForVisibleCells;
-(NSSet *)visibleIndexPaths;
-(void)setVisibleIndexPaths:(NSSet *)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)setContentOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setIgnoresContentOffsetChanges:(int)arg1 ;
-(int)ignoresContentOffsetChanges;
@end

