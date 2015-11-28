
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionView.h>
#import <Instagram/IGScrollingHeaderDelegate.h>

@class NSSet, NSString;

@interface IGInternalCollectionView : UICollectionView <IGScrollingHeaderDelegate> {

	int _ignoresContentOffsetChanges;
	NSSet* _visibleIndexPaths;

}

@property (assign,nonatomic) int ignoresContentOffsetChanges;              //@synthesize ignoresContentOffsetChanges=_ignoresContentOffsetChanges - In the implementation block
@property (nonatomic,retain) NSSet * visibleIndexPaths;                    //@synthesize visibleIndexPaths=_visibleIndexPaths - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)visibleIndexPaths;
-(void)notifyForVisibleCells;
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

