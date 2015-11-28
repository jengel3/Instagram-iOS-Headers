
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>

@interface IGFeedCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {

	char _isPinnedHeader;

}

@property (assign,nonatomic) char isPinnedHeader;              //@synthesize isPinnedHeader=_isPinnedHeader - In the implementation block
-(void)setIsPinnedHeader:(char)arg1 ;
-(char)isPinnedHeader;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

