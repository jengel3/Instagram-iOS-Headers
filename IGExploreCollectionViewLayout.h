
#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableSet;

@interface IGExploreCollectionViewLayout : UICollectionViewFlowLayout {

	NSMutableSet* _removedIndexPaths;

}

@property (nonatomic,retain) NSMutableSet * removedIndexPaths;              //@synthesize removedIndexPaths=_removedIndexPaths - In the implementation block
-(NSMutableSet *)removedIndexPaths;
-(void)setRemovedIndexPaths:(NSMutableSet *)arg1 ;
-(id)init;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
@end

